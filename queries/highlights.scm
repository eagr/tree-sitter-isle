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
  "nodebug"
  "pragma"
  "primitive"
  "rule"
  "type"
] @keyword
