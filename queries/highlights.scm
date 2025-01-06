(comment) @comment
(int) @number
(const_ident) @constant

(ident) @variable
((ident) @type (#match? @type "^[A-Z]"))

[
  "@"
] @operator

[
  "("
  ")"
] @punctuation.bracket

[
  "true"
  "false"
] @constant.builtin

(pragma op: "pragma" @function.builtin)

(type op: "type" @function.builtin)
(type modifier: "extern" @keyword)
(type modifier: "nodebug" @keyword)
(type_enum op: "enum" @function.builtin)
(type_primitive op: "primitive" @function.builtin)
(variant_field name: (ident) @variable.member)
(variant_field type: (ty) @type)

(decl op: "decl" @function.builtin
      term: (ident) @function
      ret_type: (ty) @type)
(decl modifier_pure: "pure" @keyword)
(decl modifier_multi: "multi" @keyword)
(decl modifier_partial: "partial" @keyword)
(param_types (ty) @type)

(rule op: "rule" @function.builtin)
(if_let op: "if-let" @function.builtin)
(if op: "if" @function.builtin)
(let op: "let" @function.builtin)

(extractor op: "extractor" @function.builtin)
(pattern_and op: "and" @function.builtin)

(extern_const op: "extern" @function.builtin
              kind: "const" @keyword
              type: (ty) @type)
(extern_constructor op: "extern" @function.builtin
                    kind: "constructor" @keyword
                    term: (ident) @function
                    fn: (ident) @function)
(extern_extractor op: "extern" @function.builtin
                  kind: "extractor" @keyword
                  term: (ident) @function
                  fn: (ident) @function)
(extern_extractor modifier: "infallible" @keyword)

(convert  op: "convert" @function.builtin
          inner: (ty) @type
          outer: (ty) @type
          term: (ident) @function)
