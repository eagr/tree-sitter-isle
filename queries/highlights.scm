(comment) @comment

;; Types ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(type
  name: (ident) @type)

((ident) @type
  (#match? @type "^[A-Z]"))

;; Literals ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(int) @number

[
  "true"
  "false"
] @constant.builtin

(const_ident) @constant

;; Tokens ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

[
  "@"
] @operator

[
  "("
  ")"
] @punctuation.bracket

; they only get into AST as a part of bigger pattern
[
  (type_modifier)
  (decl_modifier)
  (extern_extractor_decl_modifier)
] @keyword.modifier

; catch-all query
; (they are technically not keywords)
; TODO use more specific patterns
[
  "and"
  "const"
  "constructor"
  "convert"
  "decl"
  "enum"
  "extern"
  "extractor"
  "if"
  "if-let"
  "let"
  "multi"
  "nodebug"
  "partial"
  "pragma"
  "primitive"
  "pure"
  "rule"
  "type"
] @keyword
