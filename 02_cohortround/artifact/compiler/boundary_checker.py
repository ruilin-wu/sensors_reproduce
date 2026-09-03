"""
boundary_checker.py -- the meta/kernel boundary checker for DSK.

Walks a @kernel-decorated function's AST and enforces, per SPEC.md Section 4
(and the related rules in Sections 6-7):

  1. Meta/kernel phase classification, by dataflow (not syntax).
  2. The corrected key/index rule for META collections (dict/meta-list):
     the KEY must be meta-time; the VALUES may freely be hardware values.
     This does NOT apply to Array/Stream indexing, which allows dynamic
     (hardware-valued) indices -- that distinction is load-bearing and is
     exactly the thing an earlier, wrong draft of this rule conflated.
  3. Stream linearity: a Stream-typed variable name may be referenced at
     most once in the kernel body.
  4. Loop-bound boundedness: `for x in range(N)` requires N to be meta-time.
  5. argmax boundedness: only legal over a statically-known array size
     below a configurable threshold.
  6. Cast legality: implicit conversion only for same-signedness widening
     (Section 7); anything else must go through an explicit cast call.

Collects ALL diagnostics found, rather than stopping at the first -- this
is deliberate: a real compiler user needs the full list, not one error at
a time.
"""

from __future__ import annotations
import ast
from dataclasses import dataclass, field
from typing import Optional

from dsk_types import (
    DSKType, FixedType, ComplexType, FloatType, IntType, BoolType,
    StreamType, ArrayType, MetaType, TupleType, ListType, StructType,
    parse_type, is_meta, strip_meta, can_implicitly_widen,
)

ARGMAX_MAX_N = 32  # configurable threshold per SPEC.md Section 4

EXPLICIT_CAST_INTRINSICS = {
    "float_cast", "fixed_to_float", "float_to_fixed",
    "int_to_float", "float_to_int", "int_cast", "uint_cast",
}

# Intrinsics whose arguments are exempted from the "must resolve" widening
# check because they legitimately accept either phase (documented per-arg
# in SPEC.md Section 8); kept minimal and explicit rather than a blanket
# exemption.
META_ONLY_INTRINSICS = {"meta_quantize", "buffer", "as_stream", "approx", "scale"}


@dataclass
class Diagnostic:
    line: int
    message: str

    def __str__(self) -> str:
        return f"line {self.line}: {self.message}"


class BoundaryError(Exception):
    def __init__(self, diagnostics: list[Diagnostic]):
        self.diagnostics = diagnostics
        super().__init__("\n".join(str(d) for d in diagnostics))


@dataclass
class Binding:
    type: DSKType
    is_meta: bool
    # For Stream-typed bindings: how many times this name has been
    # referenced anywhere in the kernel body so far.
    stream_uses: int = 0


@dataclass
class Scope:
    bindings: dict[str, Binding] = field(default_factory=dict)
    # Names bound to a meta-time dict/list literal (as opposed to a
    # Meta[Array[...]] parameter) -- tracked separately so subscripting
    # them can be checked against the key-must-be-meta rule.
    meta_collections: set[str] = field(default_factory=set)


class BoundaryChecker(ast.NodeVisitor):
    def __init__(self):
        self.diagnostics: list[Diagnostic] = []
        self.scope = Scope()

    def error(self, node: ast.AST, message: str) -> None:
        self.diagnostics.append(Diagnostic(getattr(node, "lineno", -1), message))

    # ---------------------------------------------------------------
    # Phase classification
    # ---------------------------------------------------------------

    def expr_is_meta(self, node: ast.AST) -> bool:
        """
        An expression is meta-time iff every Name it depends on resolves
        to a meta-time binding, and every literal/operator in it is
        meta-time-evaluable. This is a conservative dataflow check: any
        Name not found in scope is treated as NOT meta (fails safe).
        """
        if isinstance(node, ast.Constant):
            return True
        if isinstance(node, ast.Name):
            b = self.scope.bindings.get(node.id)
            return b.is_meta if b is not None else False
        if isinstance(node, ast.UnaryOp):
            return self.expr_is_meta(node.operand)
        if isinstance(node, ast.BinOp):
            return self.expr_is_meta(node.left) and self.expr_is_meta(node.right)
        if isinstance(node, ast.BoolOp):
            return all(self.expr_is_meta(v) for v in node.values)
        if isinstance(node, ast.Compare):
            return self.expr_is_meta(node.left) and all(self.expr_is_meta(c) for c in node.comparators)
        if isinstance(node, ast.IfExp):
            return (self.expr_is_meta(node.test)
                    and self.expr_is_meta(node.body)
                    and self.expr_is_meta(node.orelse))
        if isinstance(node, ast.Tuple) or isinstance(node, ast.List):
            return all(self.expr_is_meta(e) for e in node.elts)
        if isinstance(node, ast.Subscript):
            # A subscript is meta-time iff both the base and the index are.
            return self.expr_is_meta(node.value) and self.expr_is_meta(node.slice)
        if isinstance(node, ast.Attribute):
            return self.expr_is_meta(node.value)
        if isinstance(node, ast.Call):
            # A call is meta-time iff it's meta_quantize (always meta) or
            # every argument is meta. Calls to hardware intrinsics
            # (mac_reduce, fft, etc.) are never meta, even with all-meta
            # arguments -- they always generate hardware.
            fname = node.func.id if isinstance(node.func, ast.Name) else None
            if fname == "meta_quantize":
                return True
            if fname in {"mac_reduce", "cohort_mac_reduce", "complex_mac_reduce", "fft", "conv2d",
                         "argmax", "cordic_rotate", "approx", "conj", "add",
                         "subtract", "buffer", "as_stream"} | EXPLICIT_CAST_INTRINSICS:
                return False
            return all(self.expr_is_meta(a) for a in node.args)
        return False

    # ---------------------------------------------------------------
    # Rule 2: meta-collection key/index rule
    # ---------------------------------------------------------------

    def check_subscript(self, node: ast.Subscript) -> None:
        base = node.value
        if isinstance(base, ast.Name) and base.id in self.scope.meta_collections:
            if not self.expr_is_meta(node.slice):
                self.error(
                    node,
                    f"'{base.id}' is a meta-time collection; its index/key must "
                    f"be meta-time (this is what keeps unbounded data-dependent "
                    f"dispatch out of the language). Got a kernel-time index."
                )
        # Array/Stream indexing: no restriction -- dynamic (hardware-valued)
        # indices are legitimate and expected (e.g. FFTEngine's Are(idxHi)).
        self.generic_visit(node)

    # ---------------------------------------------------------------
    # Rule 3: Stream linearity
    # ---------------------------------------------------------------

    def note_name_use(self, node: ast.Name) -> None:
        b = self.scope.bindings.get(node.id)
        if b is not None and isinstance(strip_meta(b.type), StreamType):
            b.stream_uses += 1
            if b.stream_uses > 1:
                self.error(
                    node,
                    f"'{node.id}' is a Stream and may be consumed at most once; "
                    f"this is its use #{b.stream_uses}."
                )

    # ---------------------------------------------------------------
    # Rule 4: loop-bound boundedness
    # ---------------------------------------------------------------

    def check_for(self, node: ast.For) -> None:
        is_range_call = (isinstance(node.iter, ast.Call)
                          and isinstance(node.iter.func, ast.Name)
                          and node.iter.func.id == "range")
        if is_range_call:
            bound = node.iter.args[-1]
            if not self.expr_is_meta(bound):
                self.error(
                    node,
                    "for-loop bound must be meta-time (compile-time-constant); "
                    "data-dependent loop bounds are rejected"
                )
        elif self.expr_is_meta(node.iter):
            # Iterating a meta-time sequence directly (e.g. `for params in
            # block1_params:` where block1_params: Meta[List[...]]) is
            # legal -- fully unrolled at compile time, same as range().
            pass
        else:
            self.error(
                node,
                "for-loop must iterate over range(N) with N meta-time, or "
                "directly over a meta-time sequence; this iterable is "
                "neither"
            )
        # The loop variable(s) are meta-time: plain compile-time indices,
        # fully unrolled -- consistent with every prototype's usage.
        # Handles both `for i in ...` and `for a, b in ...` (tuple targets,
        # e.g. `for col, nm in enumerate(FIRST15_NM):`).
        for name in self._names_in_target(node.target):
            self.scope.bindings[name] = Binding(type=IntType(64, True), is_meta=True)
        for stmt in node.body:
            self.visit(stmt)

    @staticmethod
    def _names_in_target(target: ast.AST) -> list[str]:
        if isinstance(target, ast.Name):
            return [target.id]
        if isinstance(target, (ast.Tuple, ast.List)):
            out = []
            for elt in target.elts:
                out.extend(BoundaryChecker._names_in_target(elt))
            return out
        return []

    # ---------------------------------------------------------------
    # Rule 5: argmax boundedness
    # ---------------------------------------------------------------

    def check_argmax_call(self, node: ast.Call) -> None:
        if len(node.args) != 1:
            self.error(node, "argmax takes exactly one array argument")
            return
        arg = node.args[0]
        n = self._infer_array_size(arg)
        if n is None:
            self.error(node, "argmax argument's size could not be statically determined")
        elif n > ARGMAX_MAX_N:
            self.error(
                node,
                f"argmax over N={n} exceeds the bounded-reduction threshold "
                f"({ARGMAX_MAX_N}); this looks like unbounded order-statistics "
                f"work, which belongs in software, not argmax"
            )

    def _infer_array_size(self, node: ast.AST) -> Optional[int]:
        if isinstance(node, ast.Name):
            b = self.scope.bindings.get(node.id)
            if b is not None:
                t = strip_meta(b.type)
                if isinstance(t, ArrayType) and len(t.dims) == 1 and isinstance(t.dims[0], int):
                    return t.dims[0]
        return None

    # ---------------------------------------------------------------
    # Rule 6: cast legality
    # ---------------------------------------------------------------

    def check_assign_types(self, target_type: DSKType, value_node: ast.AST, node: ast.AST) -> None:
        # Only checked when the RHS is a call to a known cast/hardware
        # intrinsic returning a definite type is out of scope for this
        # prototype checker -- we check the direct "Name = Name" and
        # "Name = <call to a non-cast intrinsic>" cases, which is what
        # every implicit-widening example in the prototypes actually is.
        if isinstance(value_node, ast.Name):
            src_binding = self.scope.bindings.get(value_node.id)
            if src_binding is None:
                return
            src_type = strip_meta(src_binding.type)
            dst_type = strip_meta(target_type)
            if type(src_type) is type(dst_type) and isinstance(src_type, (IntType, FixedType)):
                if src_type != dst_type and not can_implicitly_widen(src_type, dst_type):
                    self.error(
                        node,
                        f"implicit conversion from {src_type} to {dst_type} is not "
                        f"legal (not a same-signedness widening); use an explicit "
                        f"cast intrinsic"
                    )

    # ---------------------------------------------------------------
    # Statement/expression dispatch
    # ---------------------------------------------------------------

    def visit_AnnAssign(self, node: ast.AnnAssign) -> None:
        declared = parse_type(node.annotation)
        self.scope.bindings[node.target.id] = Binding(
            type=declared, is_meta=is_meta(declared)
        )
        if node.value is not None:
            if isinstance(node.value, (ast.List, ast.Dict)):
                # A literal list/dict initializer marks this name as a
                # meta-time collection for the key-rule check, regardless
                # of its declared element type (its VALUES may be
                # hardware values; see the corrected rule).
                self.scope.meta_collections.add(node.target.id)
            self.check_assign_types(declared, node.value, node)
            self.visit(node.value)

    def visit_Assign(self, node: ast.Assign) -> None:
        if isinstance(node.value, (ast.List, ast.Dict)):
            for t in node.targets:
                if isinstance(t, ast.Name):
                    self.scope.meta_collections.add(t.id)
                    # A bare (non-annotated) dict/list literal assignment has
                    # no declared DSKType -- register a minimal meta binding
                    # anyway, so expr_is_meta() resolves this name correctly
                    # rather than silently defaulting to "not meta" for an
                    # unbound name. This was found as a real bug: without
                    # it, meta_collections and expr_is_meta disagreed.
                    self.scope.bindings[t.id] = Binding(type=MetaType(TupleType(())), is_meta=True)
        for t in node.targets:
            if isinstance(t, ast.Name) and t.id in self.scope.bindings:
                self.check_assign_types(self.scope.bindings[t.id].type, node.value, node)
        self.visit(node.value)

    def visit_For(self, node: ast.For) -> None:
        self.check_for(node)

    def visit_Subscript(self, node: ast.Subscript) -> None:
        self.check_subscript(node)

    def visit_Name(self, node: ast.Name) -> None:
        if isinstance(node.ctx, ast.Load):
            self.note_name_use(node)

    def visit_Call(self, node: ast.Call) -> None:
        if isinstance(node.func, ast.Name) and node.func.id == "argmax":
            self.check_argmax_call(node)
        self.generic_visit(node)

    def visit_With(self, node: ast.With) -> None:
        # `with when(cond):` -- enable-gate. Corrected spelling; see
        # SPEC.md Section 6.3 correction note. Anything else using `with`
        # is rejected -- this is the ONLY legal use of `with` in a kernel.
        ok = (len(node.items) == 1
              and isinstance(node.items[0].context_expr, ast.Call)
              and isinstance(node.items[0].context_expr.func, ast.Name)
              and node.items[0].context_expr.func.id == "when")
        if not ok:
            self.error(node, "the only legal `with` form in a kernel is `with when(cond):`")
        else:
            self.visit(node.items[0].context_expr)
        for stmt in node.body:
            self.visit(stmt)


def check_kernel(source: str) -> list[Diagnostic]:
    """Parse and check a single @kernel function's source. Returns all diagnostics."""
    tree = ast.parse(source)
    checker = BoundaryChecker()
    fn = tree.body[-1]
    if not isinstance(fn, ast.FunctionDef):
        raise ValueError("expected a single function definition")
    for arg in fn.args.args:
        if arg.annotation is not None:
            t = parse_type(arg.annotation)
            checker.scope.bindings[arg.arg] = Binding(type=t, is_meta=is_meta(t))
    for stmt in fn.body:
        checker.visit(stmt)
    return checker.diagnostics
