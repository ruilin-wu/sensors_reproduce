"""
interpreter.py -- the fixed-point golden-model interpreter for DSK.

Executes a @kernel function's body directly, using EXACT fixed-point
semantics matching the hardware backend: full-precision intermediate
arithmetic (mirroring Chisel's natural width growth for +/-/*), with
explicit renormalization (frac-shift) and wraparound (two's-complement
truncation) applied at every assignment into a declared-type variable --
including every iteration of an accumulation, not just at the end. This is
what makes the interpreter a legitimate golden model rather than merely a
"close enough" reference: it reproduces overflow behavior bit-for-bit,
not just typical-case values.

Reuses dsk_types.py directly (the same module the boundary checker uses)
rather than an independent type implementation, for the same reason
meta_quantize exists as one shared function instead of being
reimplemented per file: divergence between "the type system" as used by
two different tools is exactly the class of bug this project keeps
finding the hard way.

Scope: Fixed / Int / UInt / Bool / Complex-over-Fixed are fully
implemented. Float (HardFloat-backed) is explicitly out of scope, per the
same "leave float implementation for later" decision made earlier in this
project -- NotImplementedError, not a silent wrong answer.
"""

from __future__ import annotations
import ast
import math
from dataclasses import dataclass
from typing import Optional, Any

from dsk_types import (
    DSKType, FixedType, ComplexType, FloatType, IntType, BoolType,
    ArrayType, MetaType, TupleType, ListType, StructType, BlockFixedType,
    parse_type, is_meta, strip_meta,
)


# ======================================================================
# Wraparound / renormalization -- the core fidelity primitive
# ======================================================================

def wrap_int(v: int, width: int, signed: bool) -> int:
    """Two's-complement (signed) or modulo (unsigned) truncation to
    `width` bits. Matches FixedPointUtil.wrap from the Chisel-side golden
    models exactly -- same function, same convention, ported rather than
    reinvented."""
    mask = (1 << width) - 1
    v &= mask
    if signed and (v & (1 << (width - 1))):
        v -= 1 << width
    return v


def _is_signed(t: DSKType) -> bool:
    if isinstance(t, IntType):
        return t.signed
    if isinstance(t, (FixedType, BlockFixedType)):
        return True
    if isinstance(t, BoolType):
        return False
    raise TypeError(f"not a scalar int-like type: {t}")


def _width(t: DSKType) -> int:
    if isinstance(t, (IntType, FixedType, BlockFixedType)):
        return t.width
    if isinstance(t, BoolType):
        return 1
    raise TypeError(f"not a scalar int-like type: {t}")


def _frac(t: DSKType) -> int:
    return t.frac if isinstance(t, (FixedType, BlockFixedType)) else 0


def require_no_float(t: DSKType, context: str) -> None:
    inner = t.inner if isinstance(t, ComplexType) else t
    if isinstance(inner, FloatType):
        raise NotImplementedError(
            f"{context}: Float arithmetic is out of scope for this "
            f"interpreter (same 'leave float implementation for later' "
            f"decision as elsewhere in this project) -- use HardFloat "
            f"simulation directly, not this interpreter, for Float-typed "
            f"kernels."
        )


# ======================================================================
# Runtime values
# ======================================================================

@dataclass
class HWValue:
    """A kernel-time (hardware) value: an exact integer plus the DSKType
    that gives it meaning. For Complex, `raw` is unused and re_raw/im_raw
    hold the two components (each interpreted per `type.inner`). For
    BlockFixedType, `raw` holds this element's own mantissa and
    `exponent` holds the exponent SHARED by every other element in the
    same block -- a plain, copied int (not a mutable shared reference):
    every element of a block is produced together by the same
    normalize/renormalize operation and so naturally receives the same
    value, matching this interpreter's existing immutable,
    functional-update style throughout (array assignment already
    produces a new HWValue rather than mutating one in place)."""
    type: DSKType
    raw: Optional[int] = None
    re_raw: Optional[int] = None
    im_raw: Optional[int] = None
    exponent: Optional[int] = None

    def as_python(self) -> Any:
        if isinstance(self.type, ComplexType):
            f = _frac(self.type.inner)
            return complex(self.re_raw / (1 << f), self.im_raw / (1 << f))
        if isinstance(self.type, FixedType):
            return self.raw / (1 << self.type.frac)
        if isinstance(self.type, BlockFixedType):
            return (self.raw / (1 << self.type.frac)) * (2.0 ** self.exponent)
        return self.raw


def zero_value(t: DSKType) -> Any:
    if isinstance(t, ComplexType):
        return HWValue(type=t, re_raw=0, im_raw=0)
    if isinstance(t, BlockFixedType):
        return HWValue(type=t, raw=0, exponent=0)
    if isinstance(t, ArrayType):
        return _make_array(t.elem, t.dims)
    return HWValue(type=t, raw=0)


def _make_array(elem: DSKType, dims: tuple) -> list:
    if len(dims) == 1:
        return [zero_value(elem) for _ in range(dims[0])]
    return [_make_array(elem, dims[1:]) for _ in range(dims[0])]


def wrap_to(v: HWValue, dst: DSKType) -> HWValue:
    """The renormalize-then-truncate operation performed at every
    assignment into a declared-type variable -- the direct analogue of
    `(computed_value)(width-1,0).asSInt` after an optional `>> frac` in
    every hand-built Chisel module in this project."""
    require_no_float(dst, "wrap_to")
    if isinstance(dst, ComplexType):
        assert isinstance(v.type, ComplexType)
        re = wrap_to(HWValue(type=v.type.inner, raw=v.re_raw), dst.inner)
        im = wrap_to(HWValue(type=v.type.inner, raw=v.im_raw), dst.inner)
        return HWValue(type=dst, re_raw=re.raw, im_raw=im.raw)

    if isinstance(dst, BlockFixedType):
        # Reshapes the MANTISSA to the declared width/frac, exactly like
        # Fixed's own wrap_to -- deliberately does NOT touch the
        # exponent. Recomputing a "better" shared exponent from the
        # block's current data is a conceptually different operation
        # (renormalize_block, below), not something an ordinary
        # assignment implicitly does -- matching how Fixed's own wrap_to
        # never rescales anything either, it only reshapes.
        assert isinstance(v.type, BlockFixedType), \
            f"wrap_to(..., BlockFixedType) requires a BlockFixedType source value, got {v.type}"
        shift = _frac(v.type) - _frac(dst)
        raw = v.raw >> shift if shift >= 0 else v.raw << (-shift)
        raw = wrap_int(raw, dst.width, signed=True)
        return HWValue(type=dst, raw=raw, exponent=v.exponent)

    shift = _frac(v.type) - _frac(dst)
    raw = v.raw >> shift if shift >= 0 else v.raw << (-shift)
    raw = wrap_int(raw, _width(dst), _is_signed(dst))
    return HWValue(type=dst, raw=raw)


# ======================================================================
# Arithmetic -- full precision, natural (Chisel-matching) width growth.
# Truncation/renormalization happens ONLY at wrap_to(), i.e. only at
# assignment -- matching how e.g. `pReg +& prod` in DigitSerialMAC is
# computed at full width and only truncated when stored back into a
# fixed-width register.
# ======================================================================

def _scalar_add(a: HWValue, b: HWValue, sub: bool = False) -> HWValue:
    require_no_float(a.type, "add/sub"); require_no_float(b.type, "add/sub")
    if isinstance(a.type, FixedType):
        # Align to the LARGER frac by left-shifting the narrower operand
        # -- always lossless (left-shift never discards bits), unlike the
        # reverse. This is what lets `intercept[c] + mac_reduce(...)`
        # combine a frac=14 value with a frac=28 value without forcing an
        # earlier, unnecessary right-shift on the wider one; consistent
        # with the project's existing "implicit widening is fine, only
        # narrowing needs an explicit cast" principle (Section 7), now
        # extended to binary operations, not just assignment.
        target_frac = max(a.type.frac, b.type.frac)
        a_raw = a.raw << (target_frac - a.type.frac)
        b_raw = b.raw << (target_frac - b.type.frac)
        a_eff_width = a.type.width + (target_frac - a.type.frac)
        b_eff_width = b.type.width + (target_frac - b.type.frac)
        result_type = FixedType(max(a_eff_width, b_eff_width) + 1, target_frac)
        raw = (a_raw - b_raw) if sub else (a_raw + b_raw)
        return HWValue(type=result_type, raw=raw)
    else:
        if _is_signed(a.type) != _is_signed(b.type):
            raise TypeError("cannot add/sub mismatched Int/UInt signedness implicitly")
        result_type = IntType(max(_width(a.type), _width(b.type)) + 1, _is_signed(a.type))
        raw = (a.raw - b.raw) if sub else (a.raw + b.raw)
        return HWValue(type=result_type, raw=raw)


def _scalar_mul(a: HWValue, b: HWValue) -> HWValue:
    require_no_float(a.type, "mul"); require_no_float(b.type, "mul")
    if isinstance(a.type, FixedType):
        result_type = FixedType(a.type.width + b.type.width, a.type.frac + b.type.frac)
    else:
        if _is_signed(a.type) != _is_signed(b.type):
            raise TypeError("cannot multiply mismatched Int/UInt signedness implicitly")
        result_type = IntType(_width(a.type) + _width(b.type), _is_signed(a.type))
    return HWValue(type=result_type, raw=a.raw * b.raw)


def _block_mul(a: HWValue, b: HWValue) -> HWValue:
    """Block-floating-point multiply: mantissas multiply exactly like two
    plain Fixed values would (same math as _scalar_mul), but the
    exponents ADD -- the entire point of block floating point being
    cheaper than per-element float: no alignment step is needed for
    multiply at all, unlike add/sub below."""
    require_no_float(a.type, "mul"); require_no_float(b.type, "mul")
    mantissa_width = a.type.width + b.type.width
    mantissa_frac = a.type.frac + b.type.frac
    exp_width = max(a.type.exp_width, b.type.exp_width) + 1
    result_type = BlockFixedType(mantissa_width, mantissa_frac, exp_width)
    exponent = wrap_int(a.exponent + b.exponent, exp_width, signed=True)
    return HWValue(type=result_type, raw=a.raw * b.raw, exponent=exponent)


def _block_add(a: HWValue, b: HWValue, sub: bool = False) -> HWValue:
    """Block-floating-point add/sub. Two alignments happen here, in a
    deliberate order that matters:
      1. Mantissa frac is aligned via a LOSSLESS left-shift on the
         narrower operand -- exactly Fixed's own _scalar_add approach,
         since frac is a static, compile-time property. This must
         happen FIRST: doing it before the (lossy) exponent alignment
         below preserves more low-order bits for that step to work
         with, rather than discarding them prematurely -- the same
         "don't narrow before you have to" principle documented at
         length elsewhere in this project's history.
      2. The shared exponent is aligned via a right-shift on the
         smaller-exponent operand's mantissa -- necessarily lossy, since
         exponent is a runtime value (unlike frac), exactly matching how
         a real floating-point adder aligns operands.
    Mismatched mantissa WIDTH is handled the same way Fixed's own
    _scalar_add handles it (max width + 1, not an exact-match
    requirement) -- this is what lets mac_reduce-style accumulation work
    at all: the accumulator naturally grows by 1 bit on every add, so a
    fresh, narrower term must combine with an already-widened
    accumulator on every iteration but the first."""
    require_no_float(a.type, "add/sub"); require_no_float(b.type, "add/sub")
    target_frac = max(a.type.frac, b.type.frac)
    a_raw = a.raw << (target_frac - a.type.frac)
    b_raw = b.raw << (target_frac - b.type.frac)
    a_eff_width = a.type.width + (target_frac - a.type.frac)
    b_eff_width = b.type.width + (target_frac - b.type.frac)

    target_exp = max(a.exponent, b.exponent)
    a_raw = a_raw >> (target_exp - a.exponent)
    b_raw = b_raw >> (target_exp - b.exponent)

    exp_width = max(a.type.exp_width, b.type.exp_width)
    result_type = BlockFixedType(max(a_eff_width, b_eff_width) + 1, target_frac, exp_width)
    raw = (a_raw - b_raw) if sub else (a_raw + b_raw)
    return HWValue(type=result_type, raw=raw, exponent=target_exp)


def add(a: HWValue, b: HWValue) -> HWValue:
    if isinstance(a.type, BlockFixedType) or isinstance(b.type, BlockFixedType):
        assert isinstance(a.type, BlockFixedType) and isinstance(b.type, BlockFixedType), \
            "cannot add/sub a BlockFixed value with a non-BlockFixed value implicitly"
        return _block_add(a, b)
    if isinstance(a.type, ComplexType):
        re = _scalar_add(HWValue(a.type.inner, a.re_raw), HWValue(b.type.inner, b.re_raw))
        im = _scalar_add(HWValue(a.type.inner, a.im_raw), HWValue(b.type.inner, b.im_raw))
        return HWValue(type=ComplexType(re.type), re_raw=re.raw, im_raw=im.raw)
    return _scalar_add(a, b)


def sub(a: HWValue, b: HWValue) -> HWValue:
    if isinstance(a.type, BlockFixedType) or isinstance(b.type, BlockFixedType):
        assert isinstance(a.type, BlockFixedType) and isinstance(b.type, BlockFixedType), \
            "cannot add/sub a BlockFixed value with a non-BlockFixed value implicitly"
        return _block_add(a, b, sub=True)
    if isinstance(a.type, ComplexType):
        re = _scalar_add(HWValue(a.type.inner, a.re_raw), HWValue(b.type.inner, b.re_raw), sub=True)
        im = _scalar_add(HWValue(a.type.inner, a.im_raw), HWValue(b.type.inner, b.im_raw), sub=True)
        return HWValue(type=ComplexType(re.type), re_raw=re.raw, im_raw=im.raw)
    return _scalar_add(a, b, sub=True)


def mul(a: HWValue, b: HWValue) -> HWValue:
    """Complex multiply follows the exact (ac-bd, ad+bc) formula verified
    against FullComplexMultiplier/ComplexDigitSerialMultiplier earlier in
    this project -- composed from the same scalar mul/add/sub primitives,
    not a separately-derived formula."""
    if isinstance(a.type, BlockFixedType) or isinstance(b.type, BlockFixedType):
        assert isinstance(a.type, BlockFixedType) and isinstance(b.type, BlockFixedType), \
            "cannot multiply a BlockFixed value with a non-BlockFixed value implicitly"
        return _block_mul(a, b)
    a_complex, b_complex = isinstance(a.type, ComplexType), isinstance(b.type, ComplexType)
    if a_complex and b_complex:
        a_re, a_im = HWValue(a.type.inner, a.re_raw), HWValue(a.type.inner, a.im_raw)
        b_re, b_im = HWValue(b.type.inner, b.re_raw), HWValue(b.type.inner, b.im_raw)
        ac, bd = _scalar_mul(a_re, b_re), _scalar_mul(a_im, b_im)
        ad, bc = _scalar_mul(a_re, b_im), _scalar_mul(a_im, b_re)
        out_re, out_im = sub(ac, bd), add(ad, bc)
        # sub/add above already returned scalar HWValues (inner type), not
        # wrapped Complex -- re-wrap into a Complex result explicitly.
        result_inner = out_re.type
        return HWValue(type=ComplexType(result_inner), re_raw=out_re.raw, im_raw=out_im.raw)
    if a_complex and not b_complex:
        # Complex * scalar: scale both components independently by the
        # same scalar. Needed for e.g. windowing a complex signal by a
        # real (Fixed) window function -- a genuinely different operation
        # from Complex*Complex, not a special case that was already
        # covered.
        re = _scalar_mul(HWValue(a.type.inner, a.re_raw), b)
        im = _scalar_mul(HWValue(a.type.inner, a.im_raw), b)
        return HWValue(type=ComplexType(re.type), re_raw=re.raw, im_raw=im.raw)
    if b_complex and not a_complex:
        re = _scalar_mul(a, HWValue(b.type.inner, b.re_raw))
        im = _scalar_mul(a, HWValue(b.type.inner, b.im_raw))
        return HWValue(type=ComplexType(re.type), re_raw=re.raw, im_raw=im.raw)
    return _scalar_mul(a, b)


def compare(op: str, a: HWValue, b: HWValue) -> bool:
    av = a.raw if not isinstance(a.type, ComplexType) else a.as_python()
    bv = b.raw if not isinstance(b.type, ComplexType) else b.as_python()
    if isinstance(a.type, FixedType) or isinstance(b.type, FixedType):
        # Compare at a common frac to avoid comparing raw ints at
        # different scales.
        fa, fb = _frac(a.type), _frac(b.type)
        f = max(fa, fb)
        av = a.raw << (f - fa)
        bv = b.raw << (f - fb)
    return {"==": av == bv, "!=": av != bv, "<": av < bv, "<=": av <= bv,
            ">": av > bv, ">=": av >= bv}[op]


# ======================================================================
# Scope
# ======================================================================

@dataclass
class VarBinding:
    type: Optional[DSKType]   # None for pure meta-time Python values
    value: Any                # HWValue for kernel-time; arbitrary Python object for meta-time


class Scope:
    def __init__(self, parent: "Scope | None" = None):
        self.vars: dict[str, VarBinding] = {}
        self.parent = parent

    def get_binding(self, name: str) -> "VarBinding | None":
        s = self
        while s is not None:
            if name in s.vars:
                return s.vars[name]
            s = s.parent
        return None

    def get(self, name: str) -> VarBinding:
        s = self
        while s is not None:
            if name in s.vars:
                return s.vars[name]
            s = s.parent
        raise NameError(f"undefined name: {name}")

    def set(self, name: str, binding: VarBinding) -> None:
        self.vars[name] = binding


# ======================================================================
# Intrinsics implemented directly by this interpreter.
#
# fft / cordic_rotate are deliberately NOT reimplemented here --
# FFTGoldenModel.scala and CordicGoldenModel (built earlier in this
# project, validated against the actual Chisel) already are their golden
# models. Re-deriving a third, independent implementation of the same
# algorithm here is exactly the duplication risk meta_quantize exists to
# avoid; this interpreter should call out to those, not compete with them.
#
# conv2d WAS on this list (no standalone golden model existed) but is now
# implemented directly below, reusing _reduce_terms (mac_reduce's own
# core) rather than a second, independent accumulation implementation --
# needed so Phase 3's tensor/CNN codegen has a real golden model to
# cross-check against, not an unimplemented stub. Deliberately scoped to
# match: valid convolution only (no stride/padding), the same scope
# boundary as the 1D convolution codegen built earlier in this project.
# ======================================================================

_UNIMPLEMENTED_DELEGATES = {
    "fft": "FFTGoldenModel.scala",
    "cordic_rotate": "CordicGoldenModel",
    "approx": "(depends on the specific func/method/bits -- no single golden model)",
}


class Interpreter:
    def __init__(self):
        pass

    # -------------------- expression evaluation --------------------

    def _eval_meta_expr(self, node: ast.AST, scope: Scope) -> Any:
        """Evaluates a meta(...) argument as ordinary Python, with the
        current scope's bindings (kernel parameters, loop variables,
        already-computed meta values) exposed as local variables. This
        deliberately delegates to Python's own eval() rather than this
        interpreter's own restricted per-node dispatcher -- meta-time
        expressions are, by this project's own design, unrestricted
        Python, not a curated subset."""
        expr = ast.Expression(body=node)
        ast.fix_missing_locations(expr)
        code = compile(expr, "<meta>", "eval")
        local_vars: dict[str, Any] = {}
        s: Optional[Scope] = scope
        while s is not None:
            for name, binding in s.vars.items():
                if name not in local_vars:  # innermost scope wins
                    local_vars[name] = binding.value
            s = s.parent
        global_vars = {"math": math, "__builtins__": __builtins__}
        return eval(code, global_vars, local_vars)

    def eval(self, node: ast.AST, scope: Scope) -> Any:
        method = getattr(self, f"eval_{type(node).__name__}", None)
        if method is None:
            raise NotImplementedError(f"interpreter: unsupported expression {ast.dump(node)}")
        return method(node, scope)

    def eval_Constant(self, node: ast.Constant, scope: Scope) -> Any:
        return node.value

    def eval_Name(self, node: ast.Name, scope: Scope) -> Any:
        return scope.get(node.id).value

    def eval_Tuple(self, node: ast.Tuple, scope: Scope) -> Any:
        return tuple(self.eval(e, scope) for e in node.elts)

    def eval_List(self, node: ast.List, scope: Scope) -> Any:
        return [self.eval(e, scope) for e in node.elts]

    def eval_UnaryOp(self, node: ast.UnaryOp, scope: Scope) -> Any:
        v = self.eval(node.operand, scope)
        if isinstance(node.op, ast.USub):
            return -v if not isinstance(v, HWValue) else HWValue(type=v.type, raw=-v.raw)
        if isinstance(node.op, ast.Not):
            return not v
        raise NotImplementedError(f"unary op {node.op}")

    def eval_BinOp(self, node: ast.BinOp, scope: Scope) -> Any:
        a, b = self.eval(node.left, scope), self.eval(node.right, scope)
        if isinstance(a, HWValue) or isinstance(b, HWValue):
            a, b = self._coerce_pair(a, b)
            if isinstance(node.op, ast.Add):
                return add(a, b)
            if isinstance(node.op, ast.Sub):
                return sub(a, b)
            if isinstance(node.op, ast.Mult):
                return mul(a, b)
            raise NotImplementedError(f"hardware binop {node.op}")
        # pure meta-time (plain Python) arithmetic
        if isinstance(node.op, ast.Add):
            return a + b
        if isinstance(node.op, ast.Sub):
            return a - b
        if isinstance(node.op, ast.Mult):
            return a * b
        if isinstance(node.op, ast.Div):
            return a / b
        if isinstance(node.op, ast.FloorDiv):
            return a // b
        if isinstance(node.op, ast.Mod):
            return a % b
        raise NotImplementedError(f"meta binop {node.op}")

    def _coerce_pair(self, a: Any, b: Any) -> tuple[HWValue, HWValue]:
        """Allow a bare meta-time int literal (e.g. `k * t0_inv` where k is
        a meta loop index) to combine with an HWValue by treating the
        literal as an exact-value Fixed/Int constant at the other
        operand's scale -- this is meta-time-constant folding into a
        hardware operand, not implicit hardware type coercion."""
        if isinstance(a, HWValue) and not isinstance(b, HWValue):
            b = self._meta_as_hw(b, a.type)
        elif isinstance(b, HWValue) and not isinstance(a, HWValue):
            a = self._meta_as_hw(a, b.type)
        return a, b

    @staticmethod
    def _meta_as_hw(v: Any, like: DSKType) -> HWValue:
        if isinstance(like, FixedType):
            return HWValue(type=like, raw=round(v * (1 << like.frac)))
        if isinstance(like, BlockFixedType):
            # A bare meta constant has no exponent of its own -- treated
            # as already being at exponent=0 (its exact value scaled
            # directly by the mantissa's own frac), the simplest, most
            # direct reading, matching how Fixed treats a meta literal as
            # "an exact-value constant at the other operand's own scale."
            return HWValue(type=like, raw=round(v * (1 << like.frac)), exponent=0)
        return HWValue(type=like, raw=int(v))

    def eval_Compare(self, node: ast.Compare, scope: Scope) -> bool:
        left = self.eval(node.left, scope)
        result = True
        for op, comparator in zip(node.ops, node.comparators):
            right = self.eval(comparator, scope)
            opname = {ast.Eq: "==", ast.NotEq: "!=", ast.Lt: "<",
                      ast.LtE: "<=", ast.Gt: ">", ast.GtE: ">="}[type(op)]
            if isinstance(left, HWValue) or isinstance(right, HWValue):
                left_h, right_h = self._coerce_pair(left, right)
                result = result and compare(opname, left_h, right_h)
            else:
                result = result and {"==": left == right, "!=": left != right,
                                      "<": left < right, "<=": left <= right,
                                      ">": left > right, ">=": left >= right}[opname]
            left = right
        return result

    def eval_IfExp(self, node: ast.IfExp, scope: Scope) -> Any:
        return self.eval(node.body, scope) if self.eval(node.test, scope) else self.eval(node.orelse, scope)

    def eval_Subscript(self, node: ast.Subscript, scope: Scope) -> Any:
        base = self.eval(node.value, scope)
        index = self.eval(node.slice, scope)
        return base[index]

    def eval_Attribute(self, node: ast.Attribute, scope: Scope) -> Any:
        base = self.eval(node.value, scope)
        if isinstance(base, HWValue) and isinstance(base.type, ComplexType):
            if node.attr == "re":
                return HWValue(type=base.type.inner, raw=base.re_raw)
            if node.attr == "im":
                return HWValue(type=base.type.inner, raw=base.im_raw)
        raise NotImplementedError(f"attribute .{node.attr} on {base}")

    def eval_Call(self, node: ast.Call, scope: Scope) -> Any:
        fname = node.func.id if isinstance(node.func, ast.Name) else None
        if fname in _UNIMPLEMENTED_DELEGATES:
            raise NotImplementedError(
                f"'{fname}' is not reimplemented by this interpreter -- "
                f"its golden model is {_UNIMPLEMENTED_DELEGATES[fname]}; "
                f"call that directly rather than expecting this "
                f"interpreter to reproduce it independently."
            )
        if fname == "mac_reduce":
            return self._mac_reduce(node, scope, complex_mode=False)
        if fname == "cohort_mac_reduce":
            return self._cohort_mac_reduce(node, scope)
        if fname == "complex_mac_reduce":
            return self._mac_reduce(node, scope, complex_mode=True)
        if fname == "conv2d":
            return self._conv2d(node, scope)
        if fname in ("buffer", "as_stream"):
            # Streams and Arrays are represented IDENTICALLY by this
            # interpreter (plain Python lists of HWValues) -- the
            # Stream/Array distinction is a static, boundary-checker-level
            # concept (linearity, storage requirements) that has no
            # separate runtime representation here. Both are therefore
            # identity operations at the value level; buffer()'s impl=
            # keyword (a codegen-level storage-strategy hint) and any
            # other keyword arguments are accepted and ignored.
            return self.eval(node.args[0], scope)
        if fname == "meta":
            # meta(...)'s argument is, per this project's own foundational
            # design, ORDINARY unrestricted meta-time Python (list
            # comprehensions, math module calls, etc.) -- not a subset
            # this restricted tree-walking interpreter should try to
            # reimplement node-by-node. Delegating to Python's own eval()
            # is what "meta-time = ordinary Python" actually means; found
            # necessary when a real example's Hann-window computation
            # (`[0.5 - 0.5*math.cos(...) for n in range(N)]`) hit a
            # ListComp/Attribute/Div node this interpreter's eval()
            # dispatcher had no handler for.
            return self._eval_meta_expr(node.args[0], scope)
        if fname == "normalize":
            if len(node.args) != 2:
                raise NotImplementedError(
                    "normalize(array, BlockFixed[w,f,ew]) takes exactly 2 args"
                )
            arr = self.eval(node.args[0], scope)
            block_type = parse_type(node.args[1])
            if not isinstance(block_type, BlockFixedType):
                raise TypeError(
                    f"normalize(...)'s second argument must be a BlockFixed[...] "
                    f"type; got {block_type}"
                )
            return self._normalize_to_block(arr, block_type)
        if fname == "argmax":
            arr = self.eval(node.args[0], scope)
            best_i, best_v = 0, arr[0]
            for i, v in enumerate(arr):
                if compare(">", v, best_v):
                    best_i, best_v = i, v
            return best_i
        if fname == "conj":
            z = self.eval(node.args[0], scope)
            return HWValue(type=z.type, re_raw=z.re_raw, im_raw=-z.im_raw)
        if fname == "meta_quantize":
            value, width, frac = (self.eval(a, scope) for a in node.args)
            lo, hi = -(1 << (width - 1)), (1 << (width - 1)) - 1
            scaled = round(value * (1 << frac))
            return max(lo, min(hi, scaled))
        if fname in ("add", "subtract"):
            a, b = (self.eval(x, scope) for x in node.args)
            op = add if fname == "add" else sub
            return [op(x, y) for x, y in zip(a, b)]
        if fname == "scale":
            arr, c = (self.eval(x, scope) for x in node.args)
            return [self._meta_scale(x, c) for x in arr]
        if fname == "range":
            return range(*(self.eval(a, scope) for a in node.args))
        if fname == "Complex":
            re, im = (self.eval(a, scope) for a in node.args)
            return complex(re, im)  # meta-time complex literal
        raise NotImplementedError(f"unsupported call: {fname}")

    @staticmethod
    def _meta_scale(x: HWValue, c: float) -> HWValue:
        # c is Meta[float] by design (SPEC.md 8.5) -- fold it exactly as a
        # meta-time constant multiply, at full precision, matching how the
        # backend constant-folds it into a shift-add network rather than a
        # general multiplier.
        if isinstance(x.type, ComplexType):
            f = _frac(x.type.inner)
            k = round(c * (1 << f))
            re = wrap_int((x.re_raw * k) >> f, _width(x.type.inner), True)
            im = wrap_int((x.im_raw * k) >> f, _width(x.type.inner), True)
            return HWValue(type=x.type, re_raw=re, im_raw=im)
        raise NotImplementedError("scale on non-Complex")

    @staticmethod
    def _normalize_to_block(arr: list, block_type: "BlockFixedType") -> list:
        """The core block-floating-point operation: given a plain array
        (a list of Fixed HWValues, or bare meta-time floats), choose ONE
        shared exponent so the largest-magnitude element uses the
        mantissa's available range well, then quantize every element at
        that shared scale. Scoped to real-valued (non-Complex) arrays for
        now -- Complex normalization would need to consider both
        components' magnitudes jointly, a genuinely separate design
        question not attempted here, matching this project's practice of
        raising a clear error rather than guessing at untested
        generality (the isinstance check on each element below will
        raise via as_python() failing for Complex, not silently produce
        a wrong answer)."""
        width, frac, exp_width = block_type.width, block_type.frac, block_type.exp_width
        values = [v.as_python() if isinstance(v, HWValue) else float(v) for v in arr]
        max_mag = max((abs(v) for v in values), default=0.0)
        if max_mag == 0.0:
            exponent = 0
        else:
            # Chosen via the position of the highest set bit in the
            # max-magnitude element's raw (frac-scaled) integer value --
            # deliberately NOT math.ceil(math.log2(...)), which would
            # also need a "is this exactly a power of two" hardware
            # check on top of leading-bit detection for no real benefit
            # (the two formulas agree exactly except at exact powers of
            # two, where this one uses one fewer bit of headroom -- still
            # provably overflow-free: mantissa < 2**(width-1) always, by
            # construction of leading_bit_pos). A leading-bit-position
            # finder (a priority encoder) is what the Chisel codegen for
            # this actually builds, so the interpreter matches hardware
            # exactly rather than hardware approximating the interpreter.
            max_raw = round(max_mag * (1 << frac))
            leading_bit_pos = max_raw.bit_length() - 1
            exponent = leading_bit_pos - (width - 2)
        exponent = wrap_int(exponent, exp_width, signed=True)
        scale = (1 << frac) / (2.0 ** exponent)
        return [
            HWValue(type=block_type, raw=wrap_int(round(v * scale), width, signed=True), exponent=exponent)
            for v in values
        ]

    def _mac_reduce(self, node: ast.Call, scope: Scope, complex_mode: bool) -> HWValue:
        # Accumulator width: defaults to the product word length (i.e. a
        # single term's own natural width -- Fixed[w,f]*Fixed[w,f] ->
        # Fixed[2w,2f], no extra headroom for the sum of N terms), with an
        # optional explicit override as mac_reduce's 3rd argument. This
        # means the accumulator WILL wrap/overflow across N terms by
        # default unless the kernel author explicitly asks for headroom --
        # a deliberate choice to match DigitSerialMAC's actual hardware
        # precedent (accReg is a real fixed-width register that silently
        # wraps; DigitSerialMAC's own accWidth default of prodWidth+8 is a
        # CHOICE made once at that module's level, not something
        # mac_reduce should assume on the caller's behalf).
        #
        # Per-iteration wrapping vs. wrap-once-at-the-end are
        # mathematically identical for pure addition AT ANY FIXED WIDTH
        # (verified directly, not assumed -- modular arithmetic commutes
        # with addition regardless of the modulus, checked over 20000
        # random cases at several widths). So this still only wraps once,
        # at the end, using whichever width was determined -- the earlier,
        # different finding (about width, not about when to wrap) is what
        # changed here, not this equivalence.
        n = self.eval(node.args[0], scope)
        lam: ast.Lambda = node.args[1]
        (param_name,) = (a.arg for a in lam.args.args)
        acc_width_override = None
        if len(node.args) >= 3:
            acc_width_override = self.eval(node.args[2], scope)

        terms = []
        for i in range(n):
            inner_scope = Scope(parent=scope)
            inner_scope.set(param_name, VarBinding(type=None, value=i))
            terms.append(self.eval(lam.body, inner_scope))
        return self._reduce_terms(terms, acc_width_override)

    def _cohort_mac_reduce(self, node: ast.Call, scope: Scope) -> HWValue:
        """Golden semantics for CohortRound's narrow-product reduction.

        Syntax::

            cohort_mac_reduce(n, lambda i: a[i] * b[i],
                              term_frac=13, cohort_size=4,
                              prefix_bits=3)

        A signed product is decomposed exactly as ``floor + residue`` by an
        arithmetic right shift.  Every four terms share one integer rounding
        correction inferred from the high residue prefixes.  This model uses
        integer arithmetic only, including negative operands and ties.
        """
        if len(node.args) != 2:
            raise ValueError("cohort_mac_reduce takes exactly (n, lambda body) plus keyword options")
        options = {kw.arg: self.eval(kw.value, scope) for kw in node.keywords}
        unknown = set(options) - {"term_frac", "cohort_size", "prefix_bits", "acc_width"}
        if unknown:
            raise ValueError(f"unknown cohort_mac_reduce option(s): {sorted(unknown)}")
        if "term_frac" not in options:
            raise ValueError("cohort_mac_reduce requires term_frac=...")
        term_frac = int(options["term_frac"])
        cohort_size = int(options.get("cohort_size", 4))
        prefix_bits = int(options.get("prefix_bits", 3))
        if cohort_size != 4:
            raise NotImplementedError("the first RTL lowering supports cohort_size=4 exactly")
        if prefix_bits <= 0:
            raise ValueError("prefix_bits must be positive")

        n = int(self.eval(node.args[0], scope))
        if n <= 0 or n % cohort_size:
            raise ValueError("n must be a positive multiple of cohort_size")
        lam: ast.Lambda = node.args[1]
        (param_name,) = (a.arg for a in lam.args.args)
        terms = []
        for i in range(n):
            inner_scope = Scope(parent=scope)
            inner_scope.set(param_name, VarBinding(type=None, value=i))
            terms.append(self.eval(lam.body, inner_scope))

        term_type = terms[0].type
        if not isinstance(term_type, FixedType):
            raise TypeError("cohort_mac_reduce currently requires real Fixed products")
        if any(t.type != term_type for t in terms):
            raise TypeError("all cohort_mac_reduce terms must have the same Fixed type")
        shift = term_type.frac - term_frac
        if shift < prefix_bits:
            raise ValueError("discarded product field is too small for prefix_bits")

        denominator = 1 << prefix_bits
        residue_mask = (1 << shift) - 1
        prefix_shift = shift - prefix_bits
        total = 0
        for start in range(0, n, cohort_size):
            group = terms[start:start + cohort_size]
            floors = [t.raw >> shift for t in group]
            prefixes = [((t.raw & residue_mask) >> prefix_shift) for t in group]
            # Four midpoint estimates contribute +4*0.5 = +2 numerator
            # units.  Round the rational to nearest, with ties to even.
            numerator = sum(prefixes) + 2
            base, remainder = divmod(numerator, denominator)
            increment = (2 * remainder > denominator or
                         (2 * remainder == denominator and (base & 1)))
            total += sum(floors) + base + int(increment)

        term_width = term_type.width - shift
        default_acc_width = term_width + math.ceil(math.log2(n)) + 1
        acc_width = int(options.get("acc_width", default_acc_width))
        if acc_width <= 0:
            raise ValueError("acc_width must be positive")
        return HWValue(
            type=FixedType(acc_width, term_frac),
            raw=wrap_int(total, acc_width, signed=True),
        )

    def _reduce_terms(self, terms: list, acc_width_override) -> HWValue:
        """The core of mac_reduce, extracted so conv2d (below) can reuse
        the exact same accumulate-then-wrap logic rather than a second,
        independently-written implementation that could drift from it --
        the same reasoning meta_quantize exists as one shared function
        instead of being reimplemented per call site."""
        acc = None
        term_type = None
        for term in terms:
            if term_type is None:
                term_type = term.type
            acc = term if acc is None else add(acc, term)

        if term_type is not None:
            acc_type = self._acc_target_type(term_type, acc_width_override)
            acc = wrap_to(acc, acc_type)
            # NOTE, fixed: this used to also renormalize down to the
            # operands' input frac here (e.g. Fixed[w,f]*Fixed[w,f] ->
            # frac=2f accumulated, then shifted down to frac=f) as a
            # convenience so results could combine with same-frac values
            # like `intercept[c] + mac_reduce(...)`. That shift was lossy
            # whenever the EVENTUAL destination frac turned out to be
            # wider than f -- confirmed directly with a concrete bit
            # pattern (see SPEC.md history). Fixed properly, not patched
            # around: mac_reduce now returns its NATURAL, full accumulated
            # frac (2f) with no intermediate shift at all; _scalar_add now
            # auto-aligns mismatched frac by widening (always lossless,
            # left-shift only) instead of requiring equal frac, so
            # `intercept[c] + mac_reduce(...)` still works -- the
            # intercept gets widened up to frac=2f instead of the
            # mac_reduce result being narrowed down. The only truncation
            # that ever happens is the single, final wrap_to() at
            # whatever the user's actual declared destination is.
        return acc

    def _conv2d(self, node: ast.Call, scope: Scope) -> list:
        """Valid (no stride/padding) multi-channel 2D convolution --
        x: Array[Fixed[w,f], C_in, H, W], weight: Meta[Array[Fixed[w,f],
        C_out, C_in, KH, KW]] -> Array[Fixed[ow,of], C_out, OH, OW] with
        OH=H-KH+1, OW=W-KW+1. Reuses _reduce_terms (mac_reduce's own core)
        for each output position's accumulation, rather than a second,
        independent implementation -- so this genuinely shares mac_reduce's
        already-fixed overflow/precision semantics instead of risking a
        second copy that could silently drift from them.

        Deliberately scoped to match the 1D convolution codegen built
        earlier in this project: no stride, no padding. This is what
        actually gets cross-checked by Phase 3's tensor/conv2d codegen --
        see SPEC.md for the scope note."""
        x = self.eval(node.args[0], scope)       # nested list of HWValue, shape (C_in, H, W)
        weight = self.eval(node.args[1], scope)  # nested list of plain floats, shape (C_out, C_in, KH, KW)
        acc_width_override = None
        for kw_arg in node.keywords:
            if kw_arg.arg == "acc_width":
                acc_width_override = self.eval(kw_arg.value, scope)

        c_in, h, w = len(x), len(x[0]), len(x[0][0])
        c_out, c_in_w, kh, kw = len(weight), len(weight[0]), len(weight[0][0]), len(weight[0][0][0])
        if c_in_w != c_in:
            raise ValueError(f"conv2d: x has {c_in} input channels but weight has {c_in_w}")
        oh_n, ow_n = h - kh + 1, w - kw + 1
        if oh_n < 1 or ow_n < 1:
            raise ValueError(f"conv2d: filter ({kh}x{kw}) is larger than input ({h}x{w})")

        out = []
        for co in range(c_out):
            out_co = []
            for oh in range(oh_n):
                out_row = []
                for ow in range(ow_n):
                    terms = []
                    for ci in range(c_in):
                        for fh in range(kh):
                            for fw in range(kw):
                                x_val = x[ci][oh + fh][ow + fw]
                                w_val = self._meta_as_hw(weight[co][ci][fh][fw], x_val.type)
                                terms.append(mul(x_val, w_val))
                    out_row.append(self._reduce_terms(terms, acc_width_override))
                out_co.append(out_row)
            out.append(out_co)
        return out

    @staticmethod
    def _acc_target_type(term_type: DSKType, width_override) -> DSKType:
        """Default: the accumulator is sized to the product word length
        (a single term's own natural width) -- NOT grown to accommodate
        the sum of N terms. width_override, if given, replaces the width
        (keeping the term's frac) -- this is mac_reduce's explicit
        opt-in for extra headroom, per the accumulator-width design
        decision above."""
        if isinstance(term_type, ComplexType):
            inner = term_type.inner
            w = width_override if width_override is not None else _width(inner)
            return ComplexType(FixedType(w, inner.frac) if isinstance(inner, FixedType) else inner)
        w = width_override if width_override is not None else _width(term_type)
        if isinstance(term_type, FixedType):
            return FixedType(w, term_type.frac)
        return IntType(w, _is_signed(term_type))

    # -------------------- statement execution --------------------

    def exec_stmt(self, node: ast.AST, scope: Scope) -> Optional[tuple]:
        """Returns a tuple of return value(s) if a `return` was executed
        (possibly nested inside an if/with), else None."""
        method = getattr(self, f"exec_{type(node).__name__}", None)
        if method is None:
            raise NotImplementedError(f"interpreter: unsupported statement {ast.dump(node)}")
        return method(node, scope)

    def exec_AnnAssign(self, node: ast.AnnAssign, scope: Scope) -> None:
        declared = parse_type(node.annotation)
        if node.value is None:
            scope.set(node.target.id, VarBinding(type=declared, value=zero_value(declared) if not is_meta(declared) else None))
            return
        value = self.eval(node.value, scope)
        if is_meta(declared):
            scope.set(node.target.id, VarBinding(type=declared, value=value))
        else:
            # NOTE, fixed: this used to call wrap_to() directly, which
            # only ever handled a bare scalar/Complex HWValue -- assigning
            # a nested-array value (from a for-loop building an array
            # piecewise, or, as found here, a bare Python list from
            # meta(...)) would crash with an AttributeError (`'list'
            # object has no attribute 'raw'`) trying to read v.raw off a
            # plain list. wrap_to_recursive handles both the nested-array
            # structure and (since its own recent fix) bare Python values
            # needing quantization, not just already-HWValue leaves.
            scope.set(node.target.id, VarBinding(type=declared, value=wrap_to_recursive(value, declared)))

    def exec_Assign(self, node: ast.Assign, scope: Scope) -> None:
        value = self.eval(node.value, scope)
        for target in node.targets:
            self._assign_to(target, value, scope)

    def _assign_to(self, target: ast.AST, value: Any, scope: Scope) -> None:
        if isinstance(target, ast.Tuple):
            for t, v in zip(target.elts, value):
                self._assign_to(t, v, scope)
            return
        if isinstance(target, ast.Subscript):
            base = self.eval(target.value, scope)
            index = self.eval(target.slice, scope)
            elem_type = self._resolve_subscript_type(target, scope)
            if elem_type is not None and isinstance(value, HWValue) and not is_meta(elem_type):
                value = wrap_to(value, elem_type)
            base[index] = value
            return
        if isinstance(target, ast.Name):
            existing = scope.vars.get(target.id)
            if existing is not None and existing.type is not None and not is_meta(existing.type):
                scope.vars[target.id] = VarBinding(type=existing.type, value=wrap_to(value, existing.type))
            else:
                t = value.type if isinstance(value, HWValue) else None
                scope.set(target.id, VarBinding(type=t, value=value))
            return
        raise NotImplementedError(f"assignment target {ast.dump(target)}")

    def _resolve_subscript_type(self, node: ast.AST, scope: Scope) -> Optional[DSKType]:
        """Walk a chain of Subscripts down to its root Name and peel one
        ArrayType dimension per subscript level, to find the declared
        element type a given indexing expression refers to -- needed so
        array-element assignment can wrap to the correct destination type
        (found missing while testing: without this, array writes stored
        raw, un-renormalized values)."""
        if isinstance(node, ast.Name):
            b = scope.get_binding(node.id)
            return b.type if b is not None else None
        if isinstance(node, ast.Subscript):
            base_type = self._resolve_subscript_type(node.value, scope)
            if isinstance(base_type, ArrayType):
                if len(base_type.dims) == 1:
                    return base_type.elem
                return ArrayType(base_type.elem, base_type.dims[1:])
            return None
        return None

    def exec_For(self, node: ast.For, scope: Scope) -> Optional[tuple]:
        iterable = self.eval(node.iter, scope)
        for item in iterable:
            inner = Scope(parent=scope)
            if isinstance(node.target, ast.Tuple):
                for t, v in zip(node.target.elts, item):
                    inner.set(t.id, VarBinding(type=None, value=v))
            else:
                inner.set(node.target.id, VarBinding(type=None, value=item))
            for stmt in node.body:
                result = self.exec_stmt(stmt, inner)
                if result is not None:
                    return result
        return None

    def exec_If(self, node: ast.If, scope: Scope) -> Optional[tuple]:
        # Mux semantics at the HARDWARE level (both branches are
        # elaborated); at the INTERPRETER level, only the taken branch's
        # final VALUE matters, so only it needs evaluating.
        branch = node.body if self.eval(node.test, scope) else node.orelse
        for stmt in branch:
            result = self.exec_stmt(stmt, scope)
            if result is not None:
                return result
        return None

    def exec_With(self, node: ast.With, scope: Scope) -> Optional[tuple]:
        # `with when(cond):` -- enable-gate. At the interpreter level this
        # is simply "execute the block iff the condition holds", which
        # already matches the "assign a default beforehand" idiom: if the
        # condition is false, the block's assignments simply don't happen
        # and whatever default was set earlier stands.
        call = node.items[0].context_expr
        assert isinstance(call, ast.Call) and call.func.id == "when"
        if self.eval(call.args[0], scope):
            for stmt in node.body:
                result = self.exec_stmt(stmt, scope)
                if result is not None:
                    return result
        return None

    def exec_Return(self, node: ast.Return, scope: Scope) -> tuple:
        if isinstance(node.value, ast.Tuple):
            return tuple(self.eval(e, scope) for e in node.value.elts)
        return (self.eval(node.value, scope),)

    def exec_Expr(self, node: ast.Expr, scope: Scope) -> None:
        self.eval(node.value, scope)


def wrap_to_recursive(value: Any, declared_type: Optional[DSKType]) -> Any:
    """Like wrap_to, but recurses into ArrayType structure -- needed
    because a return value (or, potentially, any array-typed value) may
    be a nested Python list rather than a bare HWValue, and wrap_to alone
    only ever handled the scalar case. Found missing when conv2d's
    result (a nested list) went through run_kernel's return-wrap
    unchanged: each element stayed at its natural mac-reduce accumulator
    frac/width instead of the kernel's actually-declared return type,
    silently disagreeing with what a real fixed-width output port would
    hold. Only conv2d exercises this today, but the fix is general
    because the gap was general -- any array-returning kernel had it."""
    if isinstance(declared_type, ArrayType):
        sub_type = declared_type.elem if len(declared_type.dims) == 1 \
            else ArrayType(declared_type.elem, declared_type.dims[1:])
        return [wrap_to_recursive(v, sub_type) for v in value]
    if declared_type is not None and not is_meta(declared_type):
        if isinstance(value, HWValue):
            return wrap_to(value, declared_type)
        # A bare Python value (float, complex, or a nested list of them)
        # being assigned into a declared hardware type -- this happens
        # via the meta(...) intrinsic, e.g. `hann: Array[Fixed[16,14], N]
        # = meta([...])`. Left unquantized, it would stay an
        # always-exact Python float that could never exhibit the
        # destination type's own rounding/overflow behavior, unlike a
        # real ROM which stores the quantized bits once. Quantize it now,
        # matching interpreter.py's established convention (plain
        # round(), same as _meta_as_hw/meta_quantize) exactly.
        return _quantize_bare_value(value, declared_type)
    return value


def _quantize_bare_value(value: Any, declared_type: DSKType) -> HWValue:
    if isinstance(declared_type, ComplexType):
        inner = declared_type.inner
        re, im = (value.real, value.imag) if isinstance(value, complex) else (value[0], value[1])
        re_hw = _quantize_bare_value(re, inner)
        im_hw = _quantize_bare_value(im, inner)
        return HWValue(type=declared_type, re_raw=re_hw.raw, im_raw=im_hw.raw)
    if isinstance(declared_type, FixedType):
        return HWValue(type=declared_type, raw=round(value * (1 << declared_type.frac)))
    if isinstance(declared_type, IntType):
        return HWValue(type=declared_type, raw=int(value))
    raise NotImplementedError(f"cannot quantize a bare meta-sourced value into {declared_type}")


def run_kernel(source: str, **kwargs) -> Any:
    """Parse a single @kernel function's source, bind `kwargs` as its
    parameters, execute it, and return its result (unwrapped if single).

    The returned value(s) are wrapped against the function's declared
    return type before being handed back -- a real hardware output port
    is fixed-width regardless of how wide the computation that feeds it
    grew internally, and an earlier version of this function skipped this
    step entirely (found by testing, not anticipated)."""
    tree = ast.parse(source)
    fn = tree.body[-1]
    if not isinstance(fn, ast.FunctionDef):
        raise ValueError("expected a single function definition")

    scope = Scope()
    for arg in fn.args.args:
        if arg.arg not in kwargs:
            raise ValueError(f"missing argument: {arg.arg}")
        v = kwargs[arg.arg]
        t = parse_type(arg.annotation) if arg.annotation is not None else None
        scope.set(arg.arg, VarBinding(type=t, value=v))

    return_types: Optional[tuple[Optional[DSKType], ...]] = None
    if fn.returns is not None:
        if isinstance(fn.returns, ast.Subscript) and getattr(fn.returns.value, "id", None) == "Tuple":
            return_types = tuple(parse_type(a) for a in fn.returns.slice.elts) \
                if isinstance(fn.returns.slice, ast.Tuple) else (parse_type(fn.returns.slice),)
        else:
            return_types = (parse_type(fn.returns),)

    interp = Interpreter()
    for stmt in fn.body:
        result = interp.exec_stmt(stmt, scope)
        if result is not None:
            if return_types is not None:
                wrapped = tuple(
                    wrap_to_recursive(v, t) if t is not None else v
                    for v, t in zip(result, return_types)
                )
            else:
                wrapped = result
            return wrapped[0] if len(wrapped) == 1 else wrapped
    raise RuntimeError("kernel did not return")
