["(" ")"] @punctuation.bracket

(comment) @comment

(ident) @variable
((ident) @type
  (#match? @type "^[A-Z]"))
((ident) @constant
  (#match? @constant "^[A-Z].*\."))

[
  (ty)
  (model_ty)
] @type

[
  (const_ident)
  (bv_const)
] @constant

(int) @number
(bool) @boolean
(wildcard) @keyword

(pragma op: "pragma" @keyword)

(type op: "type" @keyword)
(type modifier: "extern" @keyword)
(type modifier: "nodebug" @keyword)
(type_enum op: "enum" @keyword)
(type_primitive op: "primitive" @keyword)
(type_enum_variant name: (ident) @constant)
(type_enum_variant_field name: (ident) @property)
(type_enum_variant_field ty: (ty) @type)

(decl op: "decl" @keyword
      name: (ident) @function
      ret: (ty) @type)
(decl modifier_pure: "pure" @keyword)
(decl modifier_multi: "multi" @keyword)
(decl modifier_partial: "partial" @keyword)
(decl_params (ty) @type)

(rule op: "rule" @keyword)
(if_let op: "if-let" @keyword)
(if op: "if" @keyword)
(let op: "let" @keyword)
(pattern_and op: "and" @keyword)

(extractor
  op: "extractor" @keyword
  term: (ident) @function)

(extern_const op: "extern" @keyword
              kind: "const" @keyword
              ty: (ty) @type)
(extern_constructor op: "extern" @keyword
                    kind: "constructor" @keyword
                    name: (ident) @function
                    fn: (ident) @function)
(extern_extractor op: "extern" @keyword
                  kind: "extractor" @keyword
                  name: (ident) @function
                  fn: (ident) @function)
(extern_extractor modifier: "infallible" @keyword)

(convert  op: "convert" @keyword
          inner: (ty) @type
          outer: (ty) @type
          name: (ident) @function)

(bv_ty op: "bv" @keyword)

(sig_args op: "args" @keyword)
(sig_ret op: "ret" @keyword)
(sig_canon op: "canon" @keyword)

(model
  op: "model" @keyword
  name: (ty) @type)
(model_type kind: "type" @keyword)
(model_enum kind: "enum" @keyword)
(model_enum_variant name: (ident) @constant)

(form
  op: "form" @keyword
  name: (ident) @function)

(spec op: "spec" @keyword)
(spec_term name: (ident) @function)
(provide op: "provide" @keyword)
(require op: "require" @keyword)
(switch op: "switch" @function)
(spec_operation op: _ @function)

(instantiate
  op: "instantiate" @keyword
  term: (ident) @function)

[
  "@"
  "=>"
  "<="
  ">="
  "<"
  ">"
  "="
] @operator
