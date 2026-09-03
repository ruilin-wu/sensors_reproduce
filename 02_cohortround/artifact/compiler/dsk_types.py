"""
dsk_types.py -- type representation and annotation-AST parser for DSK.

This module turns a Python type-annotation AST (e.g. the parsed form of
`Array[Fixed[16,14], 20, 11, 15]`) into a structured DSKType. It does not
validate legality (that's the boundary checker's job) -- it only parses
shape.
"""

from __future__ import annotations
import ast
from dataclasses import dataclass
from typing import Tuple as PyTuple, Union


class DSKType:
    """Base class for all DSK types."""


@dataclass(frozen=True)
class FixedType(DSKType):
    width: int
    frac: int


@dataclass(frozen=True)
class ComplexType(DSKType):
    inner: DSKType  # FixedType or FloatType -- the (re, im) component type


@dataclass(frozen=True)
class FloatType(DSKType):
    exp: int
    sig: int


@dataclass(frozen=True)
class BlockFixedType(DSKType):
    """Block floating point: a shared-exponent fixed-point representation.
    An Array[BlockFixed[width,frac,exp_width], N] is NOT a change to
    ArrayType itself (still an ordinary array of N elements, same as
    Array[Fixed[w,f], N] or Array[Complex[w,f], N] always were) -- it is
    recognized, at the interpreter/hardware level, by its ELEMENT type
    being BlockFixedType, exactly how Array[Complex[w,f], N] already gets
    complex-specific arithmetic today without ArrayType itself knowing
    anything about complex numbers. Every element in such an array shares
    ONE exponent (see HWValue.exponent in interpreter.py); each element's
    own value is mantissa_raw / 2**frac * 2**exponent.

    exp_width (the shared exponent's own bit width) is REQUIRED, not
    defaulted -- deliberately, matching this project's own "explicit over
    implicit" convention (Fixed[width,frac] has never defaulted either
    parameter). The right exponent range is application-specific: the
    2_cyclic_cumulants.py precision analysis found required dynamic range
    spanning roughly 2 to 2**21 depending on SNR alone -- a default here
    would silently repeat that file's own original mistake (choosing a
    single static width without considering the range the application
    actually needs) at the exponent level instead of the mantissa level.
    """
    width: int      # mantissa width (signed, same convention as FixedType)
    frac: int       # mantissa frac (same convention as FixedType)
    exp_width: int  # shared exponent width (signed)


@dataclass(frozen=True)
class IntType(DSKType):
    width: int
    signed: bool  # True -> Int[w], False -> UInt[w]


@dataclass(frozen=True)
class BoolType(DSKType):
    pass


# A dimension is either a literal int (known at parse time) or a name that
# must resolve, via the boundary checker's symbol table, to a meta-time int.
Dim = Union[int, str]


@dataclass(frozen=True)
class StreamType(DSKType):
    elem: DSKType
    n: Dim


@dataclass(frozen=True)
class ArrayType(DSKType):
    elem: DSKType
    dims: PyTuple[Dim, ...]


@dataclass(frozen=True)
class MetaType(DSKType):
    inner: DSKType


@dataclass(frozen=True)
class TupleType(DSKType):
    elems: PyTuple[DSKType, ...]


@dataclass(frozen=True)
class ListType(DSKType):
    elem: DSKType


@dataclass(frozen=True)
class StructType(DSKType):
    name: str


class TypeParseError(Exception):
    pass


def _dim_from_node(node: ast.AST) -> Dim:
    if isinstance(node, ast.Constant) and isinstance(node.value, int):
        return node.value
    if isinstance(node, ast.Name):
        return node.id
    raise TypeParseError(f"invalid dimension expression: {ast.dump(node)}")


def _subscript_args(node: ast.Subscript) -> list[ast.AST]:
    """Returns the list of comma-separated items inside Foo[a, b, c]."""
    sl = node.slice
    if isinstance(sl, ast.Tuple):
        return list(sl.elts)
    return [sl]


def parse_type(node: ast.AST) -> DSKType:
    """Parse a type-annotation AST node into a DSKType."""

    if isinstance(node, ast.Name):
        if node.id == "Bool":
            return BoolType()
        if node.id == "Float16":
            return FloatType(5, 11)
        if node.id == "Float32":
            return FloatType(8, 24)
        if node.id == "Float64":
            return FloatType(11, 53)
        # Any other bare name is assumed to be a previously-declared
        # @meta_struct type. The boundary checker validates this against
        # its struct registry; the type parser itself just records intent.
        return StructType(node.id)

    if isinstance(node, ast.Subscript):
        base = node.value
        if not isinstance(base, ast.Name):
            raise TypeParseError(f"unsupported type base: {ast.dump(base)}")
        head = base.id
        args = _subscript_args(node)

        if head == "Fixed":
            if len(args) != 2:
                raise TypeParseError("Fixed[width, frac] takes exactly 2 args")
            w, f = (a.value for a in args)  # type: ignore[attr-defined]
            return FixedType(w, f)

        if head == "BlockFixed":
            if len(args) != 3:
                raise TypeParseError(
                    "BlockFixed[width, frac, exp_width] takes exactly 3 args "
                    "-- exp_width is required, not defaulted (see BlockFixedType's "
                    "own docstring for why)"
                )
            w, f, ew = (a.value for a in args)  # type: ignore[attr-defined]
            return BlockFixedType(w, f, ew)

        if head == "Complex":
            if len(args) == 2:
                w, f = (a.value for a in args)  # type: ignore[attr-defined]
                return ComplexType(FixedType(w, f))
            if len(args) == 1:
                inner = parse_type(args[0])
                if isinstance(inner, (FixedType, FloatType)):
                    return ComplexType(inner)
                raise TypeParseError("Complex[T] requires T to be a Fixed or Float type")
            raise TypeParseError("Complex[...] takes 1 or 2 args")

        if head == "Float":
            e, s = (a.value for a in args)  # type: ignore[attr-defined]
            return FloatType(e, s)

        if head == "Int":
            (w,) = args
            return IntType(w.value, signed=True)  # type: ignore[attr-defined]

        if head == "UInt":
            (w,) = args
            return IntType(w.value, signed=False)  # type: ignore[attr-defined]

        if head == "Stream":
            if len(args) != 2:
                raise TypeParseError("Stream[T, N] takes exactly 2 args")
            elem = parse_type(args[0])
            n = _dim_from_node(args[1])
            return StreamType(elem, n)

        if head == "Array":
            if len(args) < 2:
                raise TypeParseError("Array[T, dim, ...] needs a type and >=1 dims")
            elem = parse_type(args[0])
            dims = tuple(_dim_from_node(a) for a in args[1:])
            return ArrayType(elem, dims)

        if head == "Meta":
            (inner,) = args
            return MetaType(parse_type(inner))

        if head == "Tuple":
            return TupleType(tuple(parse_type(a) for a in args))

        if head == "List":
            (inner,) = args
            return ListType(parse_type(inner))

        raise TypeParseError(f"unknown parametric type: {head}")

    raise TypeParseError(f"unsupported type annotation: {ast.dump(node)}")


def is_meta(t: DSKType) -> bool:
    """True if a value of this type is resolved entirely at compile time."""
    return isinstance(t, MetaType)


def strip_meta(t: DSKType) -> DSKType:
    return t.inner if isinstance(t, MetaType) else t


def signedness(t: DSKType) -> "bool | None":
    """True=signed, False=unsigned, None=not an int-like type."""
    if isinstance(t, IntType):
        return t.signed
    if isinstance(t, (FixedType, BlockFixedType)):
        return True  # Fixed and BlockFixed mantissas are always signed in this project
    return None


def bit_width(t: DSKType) -> "int | None":
    if isinstance(t, IntType):
        return t.width
    if isinstance(t, (FixedType, BlockFixedType)):
        return t.width
    return None


def can_implicitly_widen(src: DSKType, dst: DSKType) -> bool:
    """
    Per SPEC.md Section 7: implicit conversion is legal only for widening
    within the same signed/unsigned representation. Any other conversion
    (narrowing, sign change, cross-family) requires an explicit cast.
    """
    if type(src) is not type(dst):
        return False
    if not isinstance(src, (IntType, FixedType)):
        return False  # only Int/UInt/Fixed participate in implicit widening
    if isinstance(src, FixedType):
        # frac must match exactly; only width may grow.
        return src.frac == dst.frac and dst.width >= src.width
    # IntType
    return src.signed == dst.signed and dst.width >= src.width
