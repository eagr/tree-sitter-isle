/**
 * @file Tree-sitter for ISLE
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
  ],

  word: $ => $.ident,

  rules: {
    source: $ => repeat($._def),

    _def: $ => choice(
      $.pragma,
      $.type,
      $.decl,
      $.rule,
      $.extractor,
      $._extern,
      $.convert,
    ),

    // ;;;; base ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    bool: $ => choice('true', 'false'),

    int: $ => choice(
      /-?[0-9][0-9_]*/,
      /-?0[xX][0-9A-Fa-f_]+/,
      /-?0[oO][0-7_]+/,
      /-?0[bB][01_]+/,
    ),

    wildcard: $ => '_',

    ident: $ => /[^\s\(\);\$0-9-][^\s\(\);@]*/,
    ty: $ => alias($.ident, 'ty'),
    const_ident: $ => /\$[^\s\(\);@]*/,

    if_let: $ => seq(
      '(',
      field('op', 'if-let'),
      $._pattern,
      $._expr,
      ')',
    ),

    if: $ => seq(
      '(',
      field('op', 'if'),
      $._expr,
      ')',
    ),

    let: $ => seq(
      '(',
      field('op', 'let'),
      field('bindings', seq(
        '(',
        repeat($.let_binding),
        ')',
      )),
      field('body', $._expr),
      ')',
    ),

    let_binding: $ => seq('(', $.ident, $.ty, $._expr, ')'),

    _pattern: $ => choice(
      $.int,
      $.bool,
      $.const_ident,
      $.wildcard,
      $.ident,
      $.pattern_bind,
      $.pattern_and,
      $.pattern_term,
    ),

    pattern_bind: $ => seq(
      $.ident,
      '@',
      $._pattern,
    ),

    pattern_and: $ => seq(
      '(',
      field('op', 'and'),
      repeat($._pattern),
      ')',
    ),

    pattern_term: $ => seq(
      '(',
      $.ident,
      repeat($._pattern),
      ')',
    ),

    _expr: $ => choice(
      $.int,
      $.bool,
      $.const_ident,
      $.ident,
      $.let,
      $.expr_term,
    ),

    expr_term: $ => seq(
      '(',
      $.ident,
      repeat($._expr),
      ')',
    ),

    // ;;;; pragma ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    pragma: $ => seq(
      '(',
      field('op', 'pragma'),
      $.ident,
      ')',
    ),

    // ;;;; type ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    type: $ => seq(
      '(',
      field('op', 'type'),
      field('name', $.ident),
      field('modifier', optional(choice('extern', 'nodebug'))),
      field('body', choice($.type_primitive, $.type_enum)),
      ')',
    ),

    type_primitive: $ => seq(
      '(',
      field('op', 'primitive'),
      field('name', $.ident),
      ')',
    ),

    type_enum: $ => seq(
      '(',
      field('op', 'enum'),
      field('variants', repeat($.enum_variant)),
      ')',
    ),

    enum_variant: $ => choice(
      field('name', $.ident),
      seq(
        '(',
        field('name', $.ident),
        repeat($.variant_field),
        ')',
      ),
    ),

    variant_field: $ => seq(
      '(',
      field('name', $.ident),
      field('ty', $.ty),
      ')',
    ),

    // ;;;; decl ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    decl: $ => seq(
      '(',
      field('op', 'decl'),
      // order matters
      field('modifier_pure', optional('pure')),
      field('modifier_multi', optional('multi')),
      field('modifier_partial', optional('partial')),
      field('term', $.ident),
      field('params', $.decl_params),
      field('ret', $.ty),
      ')',
    ),

    decl_params: $ => seq(
      '(',
      repeat($.ty),
      ')',
    ),

    // ;;;; rule ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    rule: $ => seq(
      '(',
      field('op', 'rule'),
      field('name', optional($.ident)),
      field('priority', optional($.int)),
      $.pattern_term,
      repeat(choice(
        $.if_let,
        $.if,
      )),
      $._expr,
      ')',
    ),

    // ;;;; extractor ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    extractor: $ => seq(
      '(',
      field('op', 'extractor'),
      '(',
      field('term', $.ident),
      field('params', repeat($.ident)),
      ')',
      field('template', $._pattern),
      ')',
    ),

    // ;;;; extern ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    _extern: $ => seq(
      '(',
      choice(
        $.extern_const,
        $.extern_constructor,
        $.extern_extractor,
      ),
      ')',
    ),

    extern_const: $ => seq(
      field('op', 'extern'),
      field('kind', 'const'),
      field('name', $.const_ident),
      field('ty', $.ty),
    ),

    extern_constructor: $ => seq(
      field('op', 'extern'),
      field('kind', 'constructor'),
      field('term', $.ident),
      field('fn', $.ident),
    ),

    extern_extractor: $ => seq(
      field('op', 'extern'),
      field('kind', 'extractor'),
      field('modifier', optional('infallible')),
      field('term', $.ident),
      field('fn', $.ident),
    ),

    // ;;;; convert ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    convert: $ => seq(
      '(',
      field('op', 'convert'),
      field('inner', $.ty),
      field('outer', $.ty),
      field('term', $.ident),
      ')',
    ),

    // ;;;; comment ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),

    line_comment: $ => token(/;[^\r\n]*/),

    block_comment: $ => token(seq(
      '(;',
      /[^;]*;+([^\(;][^;]*;+)*/,
      ')',
    )),
  }
});
