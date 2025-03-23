#!/usr/bin/env python3 # noqa T499
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
"""
Provides functionality to translate the python ast to the AIR.
"""
import ast
import inspect
from typing import Any, Callable
from typing import Dict
from typing import Optional
import numpy as np  # noqa T484
from air_dsl import *  # noqa T484

from pydsl.protocols import handle_compile_time_callable  # noqa T484
from pydsl.scope import ScopeStack  # noqa T484


class FunctionScopeManager:
    """
    Preserves the function scope information.
    """

    def __init__(self, function_scope=None, node_operator=None, exprs=None, output_var=None):
        self._fs = function_scope
        self._node_operator = node_operator
        self._exprs = exprs if exprs is not None else []
        self._output_var = output_var

    @property
    def fs(self):
        """Getter for fs."""
        return self._fs

    @fs.setter
    def fs(self, value):
        """Setter for fs."""
        self._fs = value

    @property
    def node_operator(self):
        """Getter for node_operator."""
        return self._node_operator

    @node_operator.setter
    def node_operator(self, value):
        """Setter for node_operator."""
        self._node_operator = value

    @property
    def exprs(self):
        """Getter for exprs."""
        return self._exprs

    @exprs.setter
    def exprs(self, value):
        """Setter for exprs. Replaces the entire list of expressions."""
        if isinstance(value, list):
            self._exprs = value
        else:
            raise ValueError("exprs must be a list")

    def add_expr(self, expr):
        """Adds a single expression to the exprs list."""
        self._exprs.append(expr)

    def add_exprs(self, exprs_list):
        """Adds multiple expressions to the exprs list."""
        if isinstance(exprs_list, list):
            self._exprs.extend(exprs_list)
        else:
            raise ValueError("exprs_list must be a list")

    @property
    def output_var(self):
        """Getter for output_var."""
        return self._output_var

    @output_var.setter
    def output_var(self, value):
        """Setter for output_var."""
        self._output_var = value

    @property
    def ctx(self):
        """Getter for ctx."""
        return self._ctx

    @ctx.setter
    def ctx(self, value):
        """Setter for ctx."""
        self._ctx = value

    def clear(self):
        """Method to reset or clear all stored values."""
        self._fs = None
        self._node_operator = None
        self._exprs = []
        self._output_var = None
        self._ctx = None


def prettify(ast_tree_str, indent=4):
    """
    Pretty print for python AST.
    """
    ret = []
    stack = []
    in_string = False
    curr_indent = 0

    ast_len = len(ast_tree_str)
    for i in range(ast_len):
        char = ast_tree_str[i]
        if in_string and char != '\'' and char != '"':
            ret.append(char)
        elif char in ('(', '['):
            ret.append(char)

            if i < len(ast_tree_str) - 1:
                next_char = ast_tree_str[i + 1]
                if next_char in (')', ']'):
                    curr_indent += indent
                    stack.append(char)
                    continue

            print(''.join(ret))
            ret.clear()

            curr_indent += indent
            ret.append(' ' * curr_indent)
            stack.append(char)
        elif char == ',':
            ret.append(char)

            print(''.join(ret))
            ret.clear()
            ret.append(' ' * curr_indent)
        elif char in (')', ']'):
            ret.append(char)
            curr_indent -= indent
            stack.pop()
        elif char in ('\'', '"'):
            if (len(ret) > 0 and ret[-1] == '\\') or (in_string and stack[-1] != char):
                ret.append(char)
                continue

            if len(stack) > 0 and stack[-1] == char:
                ret.append(char)
                in_string = False
                stack.pop()
                continue

            in_string = True
            ret.append(char)
            stack.append(char)
        elif char == ' ':
            pass
        else:
            ret.append(char)

    print(''.join(ret))


def generate_parent(root):
    """
    Sets the parent pointer for node.
    """
    for node in ast.walk(root):
        for child in ast.iter_child_nodes(node):
            child.parent = node


def generate_next_line(root):
    """
    Sets the lexical link for nodes in the body.
    """
    for node in ast.walk(root):
        if hasattr(node, 'body'):
            for i, child in enumerate(node.body):
                child.next_line = node.body[i + 1] if (i + 1) < len(node.body) else None


class ToAIR(ast.NodeVisitor):
    """
    Visits the Python AST and translates it into the AIR.
    """

    _air = None
    _scope_stack: ScopeStack = None

    def visit(self, node):
        return super().visit(node)

    def __init__(self, f_locals, f_globals, scope_manager) -> None:
        super(ToAIR, self).__init__()
        self._f_locals = f_locals
        self._f_globals = f_globals
        self._scope_manager = scope_manager

    def visit_List(self, node: ast.Tuple) -> Any:  # noqa T484
        """
        Handles the Tuple.
        """
        return tuple(self.visit(entry) for entry in node.elts)

    def visit_Constant(self, node: ast.Constant) -> Any:  # noqa N802
        """
        Handles the constant.
        """
        return node.value

    def on_for(self, node: ast.For) -> Any:
        """
        Handles the implementation of for loop.
        """
        dsl = self._air
        spos = self._scope_manager.exprs[0].Spos()
        iterator = node.iter

        start = 0
        step = 1
        args = [self.visit(a) for a in iterator.args]  # noqa T484

        if len(args) == 1:
            stop, = args
        elif len(args) == 2:
            start, stop = args
        elif len(args) == 3:
            start, stop, step = args
        else:
            raise ValueError(f"range expects up to 3 arguments, got {len(args)}")

        int32_ty = dsl.get_prim_type(PrimTypeEnum.INT_S32)  # noqa T484
        iv = dsl.new_var(node.target.id, int32_ty, spos)  # noqa T484
        self._scope_stack.assign_name(node.target.id, dsl.ld(iv, spos))  # noqa T484
        init = dsl.intconst(PrimTypeEnum.INT_S32, start, spos)  # noqa T484
        int_tmp = dsl.intconst(PrimTypeEnum.INT_S32, stop, spos)  # noqa T484
        comp = dsl.lt(dsl.ld(iv, spos), int_tmp, int32_ty, spos)  # noqa T484
        incr = dsl.add(dsl.ld(iv, spos), dsl.intconst(PrimTypeEnum.INT_S32, step, spos), spos)  # noqa T484
        block = dsl.block(spos)  # noqa T484
        for n in node.body:
            st = self.visit(n)
            dsl.block_append(block, st)  # noqa T484
        loop = dsl.do_loop(iv, init, comp, incr, block, spos)  # noqa T484
        return loop

    def visit_For(self, node: ast.For) -> Any:  # noqa N802
        """
        Handles the for loop.
        """
        return self.on_for(node)

    def visit_Call(self, node: ast.Call) -> Any:  # noqa N802
        """
        Handles the call.
        """
        return handle_compile_time_callable(self, node)

    def visit_UnaryOp(self, node: ast.UnaryOp) -> Any:  # noqa N802
        """
        Handles the UnaryOp.
        """
        arg = self.visit(node.operand)
        if isinstance(node.op, ast.USub):
            if isinstance(arg, int):
                return -1 * arg
        return None

    # for now, assume all operands are floating point numbers
    def visit_BinOp(self, node: ast.BinOp) -> Any:  # noqa N802
        """
        Handles the BinOp.
        """
        left = self.visit(node.left)
        right = self.visit(node.right)

        spos = self._scope_manager.exprs[0].Spos()
        dsl = self._air
        vec = VectorAPI(dsl)  # noqa T484
        if isinstance(node.op, ast.Add):
            if isinstance(left, int) and isinstance(right, int):
                return left + right
            node_a = dsl.clone_exp(left)  # noqa T484
            node_b = dsl.clone_exp(right)  # noqa T484
            input_ty = dsl.get_rtype(node_a)  # noqa T484
            if isinstance(input_ty, ArrayType):  # noqa T484
                node_add = vec.add(node_a, node_b, spos)
            else:
                node_add = dsl.add(node_a, node_b, spos)  # noqa T484
            return node_add
        if isinstance(node.op, ast.Mult):
            if isinstance(left, int) and isinstance(right, int):
                return left * right
            node_a = dsl.clone_exp(left)  # noqa T484
            if isinstance(right, int):
                offset = dsl.intconst(PrimTypeEnum.INT_S32, np.uint64(right), spos)  # noqa T484
            else:
                offset = dsl.clone_exp(right)  # noqa T484
            input_ty = dsl.get_rtype(node_a)  # noqa T484
            if isinstance(input_ty, ArrayType):  # noqa T484
                node_mul = vec.mul(node_a, offset, spos)
            else:
                node_mul = dsl.mul(node_a, offset, spos)  # noqa T484

            return node_mul

        raise ValueError(f"Ln {node.lineno}: {type(node.op)}\
        is currently not supported as a binary operator")

    def visit_Name(self, node: ast.Name) -> Any:  # noqa N802
        """
        Handles the Name.
        """
        return self._scope_stack.resolve_name(node.id)

    def visit_Return(self, node: ast.Return) -> Any:  # noqa N802
        """
        Handles the Return.
        """
        return_exp = self.visit(node.value)
        spos = self._scope_manager.exprs[0].Spos()
        dsl = self._air
        st = dsl.st(dsl.clone_exp(return_exp), self._scope_manager.output_var, spos)  # noqa T484
        return st

    def visit_Index(self, node: ast.Index) -> Any:  # noqa N802
        """
        Handles the Index
        """
        return self.visit(node.value)

    def visit_Subscript(self, node: ast.Subscript) -> Any:  # noqa N802
        """
        Handles the Subscript
        """
        value = self.visit(node.value)
        slice_val = self.visit(node.slice)
        spos = self._scope_manager.exprs[0].Spos()
        dsl = self._air
        if isinstance(slice_val, NodePtr):  # noqa T484
            ra_const = dsl.new_array(value, dsl.clone_exp(slice_val), spos)  # noqa T484
            return dsl.new_ild(ra_const, spos)  # noqa T484
        return value[slice_val]

    def visit_Assign(self, node: ast.Assign) -> Any:  # noqa N802
        """
        Handles the Assign.
        """
        rhs = self.visit(node.value)
        if isinstance(rhs, (TypePtr, tuple, int)):  # noqa T484
            self._scope_stack.assign_name(node.targets[0].id, rhs)  # noqa T484
            return None
        spos = self._scope_manager.exprs[0].Spos()
        dsl = self._air
        annotation_type = dsl.get_rtype(rhs)
        var_c = dsl.new_var(node.targets[0].id, annotation_type, spos)
        st = dsl.st(rhs, var_c, spos)
        self._scope_stack.assign_name(node.targets[0].id, dsl.ld(var_c, spos))
        return st

    def emit_air_expr(self, f_sig_ty, index, py_expr, py_expr_name):
        dsl = self._air
        spos = SPOS(0, 1, 1, 0)
        if isinstance(py_expr[0], float):
            f32_ty = dsl.get_prim_type(PrimTypeEnum.FLOAT_32)
        else:
            raise ValueError("only support f32 type")
        expr_len = len(py_expr)
        f32_arr_ty = dsl.get_array_type("f32_arr", f32_ty, [expr_len], spos)
        dsl.add_parm(py_expr_name, f32_arr_ty, f_sig_ty, spos)
        if index == 0:
            dsl.add_ret(f32_arr_ty, f_sig_ty, spos)

    def visit_FunctionDef(self, node: ast.FunctionDef) -> Any:  # noqa N802
        """
        Handles the FunctionDef.
        """
        if node.name == 'kernel_impl':
            for py_nd in node.body:
                self.visit(py_nd)
            return None
        arg_names = []
        for arg in node.args.args:
            arg_name = arg.arg
            arg_names.append(arg_name)

        dsl = self._air
        if self._scope_manager.fs is None:
            spos = SPOS(0, 1, 1, 0)  # noqa T484
            f = dsl.new_func(node.name, spos)  # noqa T484
            f_sig_ty = dsl.new_sig_type()  # noqa T484
            for i, name in enumerate(arg_names):
                inp_expr = self._scope_manager.exprs[i]
                if isinstance(inp_expr, list):
                    self.emit_air_expr(f_sig_ty, i, inp_expr, name)
            dsl.set_sig_complete(f_sig_ty)  # noqa T484
            dsl.new_entry_point(f_sig_ty, f, spos)  # noqa T484
            air_exprs = []
            j = 0
            for i, _ in enumerate(arg_names):
                inp_expr = self._scope_manager.exprs[i]
                if isinstance(inp_expr, list):
                    f_arg = dsl.formal(j)  # noqa T484
                    air_exprs.append(dsl.ld(f_arg, spos))  # noqa T484
                    j = j + 1
                else:
                    air_exprs.append(inp_expr)
            self._scope_manager.exprs = air_exprs
            # self._scope_manager.fs = dsl.get_cur_func_scope()  # noqa T484
            self._scope_manager.output_var = dsl.formal(0)  # noqa T484
            self._scope_manager.ctx = dsl.block(spos)  # noqa T484
            dsl.set_blk_ctx(self._scope_manager.ctx)  # noqa T484

        self._scope_stack.new_func_scope(node, self._f_locals)

        for i, name in enumerate(arg_names):
            inp_expr = self._scope_manager.exprs[i]
            self._scope_stack.assign_name(name, inp_expr)
        for child_node in node.body:
            s = self.visit(child_node)
            if isinstance(s, StmtPtr):  # noqa T484
                dsl.append(s)  # noqa T484
        if self._scope_manager.fs is None:
            ret_stmt = dsl.retv(dsl.ld(self._scope_manager.output_var, spos), spos)  # noqa T484
            dsl.append(ret_stmt)  # noqa T484
            dsl.append_block(self._scope_manager.ctx)  # noqa T484
        # dsl.print_glob()
        return Any

    def compile_air(self, node):
        """
        Compiles the Python AST into the AIR.
        """
        # create additional properties in AST nodes that we will need during compilation
        generate_parent(node)
        generate_next_line(node)
        self._scope_stack = ScopeStack(self._f_globals)
        if self._scope_manager.fs is None:
            self._air = DSL()
        else:
            self._air = DSL(self._scope_manager.fs, self._scope_manager.ctx)

        self.visit(node)


class CompiledFunction:
    """
    Compiles the Python AST in a function into the AIR.
    """

    def __init__(
            self,
            f: Callable,
            f_locals: Dict[str, Any],
            f_globals: Dict[str, Any],
            scope_manager: FunctionScopeManager,
            transform_seq: Callable[[Any], None],
    ) -> None:
        self._f = f
        self._locals = f_locals
        self._globals = f_globals
        self._scope_manager = scope_manager
        self._transform_seq = transform_seq

        self._so = None
        self._loaded_so = None
        self._so_f = None

    def emit_air(self):
        """
        Emits the AIR dump after the AIR is generated.
        """
        f_ast = ast.parse(inspect.getsource(self._f))
        # prettify(ast.dump(f_ast))

        to_air = ToAIR(self._locals, self._globals, self._scope_manager)
        to_air.compile_air(f_ast)

    def dump_air(self) -> None:
        """
        Emits the AIR from Python AST.
        """
        self.emit_air()

    def __call__(self, *args):
        return


def py_compile(
        f_locals: Dict[str, Any],
        f_globals: Dict[str, Any],
        scope_manager: FunctionScopeManager,
        transform_seq: Optional[Callable[[Any], None]] = None,
        dump_air: bool = False,
) -> Callable[..., CompiledFunction]:
    """
    Driver to compile Python AST.
    """

    def compile_payload(py_f: Callable) -> CompiledFunction:
        air_f = CompiledFunction(py_f,
                                 f_locals,
                                 f_globals,
                                 scope_manager,
                                 transform_seq=transform_seq)  # noqa T484
        if dump_air:
            air_f.dump_air()
        return air_f

    return compile_payload


def py_script(
        compiling_func,
        f_locals: Dict[str, Any],
        f_globals: Dict[str, Any],
        args):

    scope_manager = FunctionScopeManager()
    scope_manager.add_exprs(args)
    air_f = CompiledFunction(compiling_func,
                             f_locals,
                             f_globals,
                             scope_manager,
                             None)  # noqa T484
    air_f.dump_air()
    return air_f
