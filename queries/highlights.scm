(comment) @comment

;; Types ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(type
  name: (ident) @type)

((ident) @type
  (#match? @type "^[A-Z]"))

;; Functions ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(call
  fn: (ident) @function.builtin
  (#match? @function.builtin "^(convert|decl|extern|extractor|pragma|rule|type)$"))

(call
  fn: (ident) @function)

;; Literals ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(int) @number

[
  (true)
  (false)
] @boolean

[
  (true)
  (false)
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

(type
  modifiers: (ident) @keyword.modifier
  (#match? @keyword.modifier "^(nodebug|extern)$"))

;; TODO `decl` modifiers
;; TODO `extern extractor` modifiers

;; catch-all
;; they are technically not keywords
;; TODO use more specific patterns
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
  "infallible"
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
