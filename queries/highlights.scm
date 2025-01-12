(comment) @comment

(ident) @variable
(ty) @type
((ident) @type
  (#match? @type "^[A-Z]"))

(const_ident) @constant

(int) @number

[
  "true"
  "false"
] @boolean

[
  "@"
] @operator

(wildcard) @keyword

[
  "("
  ")"
] @punctuation.bracket

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
      term: (ident) @function
      ret: (ty) @type)
(decl modifier_pure: "pure" @keyword)
(decl modifier_multi: "multi" @keyword)
(decl modifier_partial: "partial" @keyword)
(decl_params (ty) @type)

(rule op: "rule" @keyword)
(if_let op: "if-let" @keyword)
(if op: "if" @keyword)
(let op: "let" @keyword)

(extractor op: "extractor" @keyword)
(pattern_and op: "and" @keyword)

(extern_const op: "extern" @keyword
              kind: "const" @keyword
              ty: (ty) @type)
(extern_constructor op: "extern" @keyword
                    kind: "constructor" @keyword
                    term: (ident) @function
                    fn: (ident) @function)
(extern_extractor op: "extern" @keyword
                  kind: "extractor" @keyword
                  term: (ident) @function
                  fn: (ident) @function)
(extern_extractor modifier: "infallible" @keyword)

(convert  op: "convert" @keyword
          inner: (ty) @type
          outer: (ty) @type
          term: (ident) @function)
