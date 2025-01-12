# tree-sitter-isle

[Tree-sitter](https://tree-sitter.github.io/tree-sitter/) based parser for the [ISLE language](https://github.com/bytecodealliance/wasmtime/tree/main/cranelift/isle).

## ISLE Language Syntax

### verification extension

```bnf
<unit> ::= "(" ")"
<enum_variant> ::= "(" <ident> "." <ident> ")"
<bv_ty> ::= "(" "bv" <int>? ")"
<bv_const> ::= "#b" ("+" | "-")? [0-1]+
             | "#x" ("+" | "-")? ([0-9] | [A-F] | [a-f])+

<sig> ::= "(" <sig_args> <sig_ret> <sig_canon> ")"
<sig_args> ::= "(" "args" <model_ty>* ")"
<sig_ret> ::= "(" "ret" <model_ty>* ")"
<sig_canon> ::= "(" "canon" <model_ty>* ")"

<def> ::= "(" "model" <model> ")"
        | "(" "form" <form> ")"
        | "(" "spec" <spec> ")"
        | "(" "instantiate" <instantiate> ")"

<model> ::= <ty> (<model_type> | <model_enum>)
<model_type> ::= "(" "type" (<model_ty> | <bv_ty>) ")"
<model_ty> ::= "Bool" | "Int" | "Unit"
<model_enum> ::= "(" "enum" <model_enum_variant>* ")"
<model_enum_variant> ::= "(" <ident> <spec_expr>? ")"

<form> ::= <ident> <sig>*

<spec> ::= "(" <ident> <ident>* ")" <provide> <require>?
<provide> ::= "(" "provide" <spec_expr>* ")"
<require> ::= "(" "require" <spec_expr>* ")"
<spec_expr> ::= <int>
              | <bv_const>
              | "false" | "true"
              | <ident>
              | "(" "switch" <spec_expr> <spec_pair>* ")"
              | "(" <spec_op> <spec_expr>* ")"
              | <enum_variant>
              | <unit>
<spec_pair> ::= "(" <spec_expr> <spec_expr> ")"
<spec_op> ::= "=>"
            | "<=" | ">=" | "<" | ">" | "="
            | "and" | "not" | "or"
            | "bvand" | "bvnot" | "bvor" | "bvxor"
            | "bvadd" | "bvsub" | "bvmul" | "bvneg"
            | "bvudiv" | "bvurem" | "bvsdiv" | "bvsrem"
            | "bvuaddo" | "bvsaddo" | "bvusubo" | "bvssubo"
            | "bvshl" | "bvlshr" | "bvashr"
            | "bvule" | "bvult" | "bvugt" | "bvuge"
            | "bvslt" | "bvsle" | "bvsgt" | "bvsge"
            | "rotl" | "rotr"
            | "extract" | "concat" | "conv_to" | "int2bv" | "bv2int"
            | "zero_ext" | "sign_ext"
            | "widthof"
            | "if"
            | "subs" | "popcnt" | "rev" | "cls" | "clz"
            | "load_effect" | "store_effect"

<instantiate> ::= <ident> <ident>
                | <ident> <sig>*
```
