/**
 * @file Tree sitter for ISLE
 * @author eagr <eagr@tutanota.com>
 * @license Apache-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "isle",

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2028\u2029\u2060\u200B]/,
  ],

  inline: $ => [
    // TODO populate when we know better
  ],

  conflicts: $ => [
    [$._pattern, $._rule_priority],
  ],

  word: $ => $.ident,

  rules: {
    source_file: $ => repeat($._def),

    _def: $ => choice(
      $.pragma,
      $.type,
      $.decl,
      $.rule,
      $.extractor,
      $.extern,
      $.convert,
    ),

    ty: $ => alias($.ident, $.ty),
    ident: $ => /[^\s\(\);0-9-][^\s\(\);@]*/,
    const_ident: $ => /\$[^\s\(\);@]*/,

    int: $ => choice(
      /-?[0-9_]+/,
      /-?0[xX][0-9A-Fa-f_]+/,
      /-?0[oO][0-7_]+/,
      /-?0[bB][01_]+/,
    ),

    bool: $ => choice('true', 'false'),

    wildcard: $ => '_',

    _pattern: $ => choice(
      $.int,
      $.bool,
      $.const_ident,
      $.wildcard,
      seq($.ident, '@', $._pattern),
      seq('(', 'and', repeat($._pattern), ')'),
      seq('(', $.ident, repeat($._pattern), ')'),
    ),

    // ;;;; pragma ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    pragma: $ => seq(
      '(',
      'pragma',
      $.ident,
      ')',
    ),

    // ;;;; type ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    type: $ => seq(
      '(',
      'type',
      $.ident,
      optional($._type_opt),
      $._type_body,
      ')',
    ),

    _type_opt: $ => choice(
      'extern',
      'nodebug',
    ),

    _type_body: $ => choice(
      $._type_body_primitive,
      $._type_body_enum,
    ),

    _type_body_primitive: $ => seq('(', 'primitive', $.ident, ')'),

    _type_body_enum: $ => seq(
      '(',
      'enum',
      choice(
        $.ident,
        seq('(', $.ident, repeat($._enum_variant), ')'),
      ),
      ')',
    ),
    _enum_variant: $ => seq('(', $.ident, $.ty, ')'),

    // ;;;; decl ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    decl: $ => seq(
      '(',
      'decl',
      optional($._decl_opt),
      optional($._decl_opt),
      optional($._decl_opt),
      $.ident,
      '(', repeat($.ty), ')',
      $.ty,
      ')',
    ),

    _decl_opt: $ => choice(
      'pure',
      'multi',
      'partial'
    ),

    // ;;;; rule ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    rule: $ => seq(
      '(',
      'rule',
      choice(
        seq($._rule_name, $._rule_priority, $._pattern),
        seq($._rule_name, $._pattern),
        seq($._rule_priority, $._pattern),
        $._pattern,
      ),
      repeat($._stmt),
      $._expr,
      ')',
    ),

    _rule_name: $ => alias($.ident, '_rule_name'),
    _rule_priority: $ => alias($.int, '_rule_priority'),

    _stmt: $ => choice(
      $.if_let,
      $.if,
    ),
    if_let: $ => seq('(', 'if-let', $._pattern, $._expr, ')'),
    if: $ => seq('(', 'if', $._expr, ')'),

    _expr: $ => choice(
      $.int,
      $.bool,
      $.const_ident,
      $.ident,
      $.let,
      seq('(', $.ident, repeat($._expr), ')'),
    ),

    let: $ => seq(
      '(',
      'let',
      '(', repeat($._let_binding), ')',
      $._expr,
      ')',
    ),
    _let_binding: $ => seq('(', $.ident, $.ty, $._expr, ')'),

    // ;;;; extractor ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    extractor: $ => seq(
      '(',
      alias($.ident, $._extractor_name),
      repeat($.ident),
      $._pattern,
      ')',
    ),

    // ;;;; extern ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    extern: $ => seq(
      '(',
      'extern',
      choice(
        seq('constructor', $.ident, $.ident),
        seq('extractor', optional('infallible'), $.ident, $.ident),
        seq('const', $.const_ident, $.ident, $.ty),
      ),
      ')',
    ),

    // ;;;; convert ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    convert: $ => seq(
      '(',
      'convert',
      $.ty,
      $.ty,
      $.ident,
      ')',
    ),

    // ;;;; comment ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    comment: _ => token(choice(
      seq(';', /[^\r\n]*/),
      seq(
        '(;',
        /[^;]*;+([^\(;][^;]*;+)*/,
        ')',
      ),
    )),
  }
});
