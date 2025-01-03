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

    // ;;;; base ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

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

    if_let: $ => seq('(', 'if-let', $._pattern, $._expr, ')'),

    if: $ => seq('(', 'if', $._expr, ')'),

    let: $ => seq(
      '(',
      'let',
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
      seq($.ident, '@', $._pattern),
      seq('(', 'and', repeat($._pattern), ')'),
      seq('(', $.ident, repeat($._pattern), ')'),
    ),

    _expr: $ => choice(
      $.int,
      $.bool,
      $.const_ident,
      $.ident,
      $.let,
      seq('(', $.ident, repeat($._expr), ')'),
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
      field('name', $.ident),
      optional(field('attrs', choice('nodebug', 'extern'))),
      field('body', choice($.primitive, $.enum)),
      ')',
    ),

    primitive: $ => seq('(', 'primitive', $.ident, ')'),

    enum: $ => seq(
      '(',
      'enum',
      field('variants', repeat($.enum_variant)),
      ')',
    ),

    enum_variant: $ => choice(
      $.ident,
      seq(
        '(',
        $.ident,
        repeat($.enum_variant_field),
        ')',
      ),
    ),

    enum_variant_field: $ => seq(
      '(',
      $.ident,
      $.ty,
      ')',
    ),

    // ;;;; decl ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    decl: $ => seq(
      '(',
      'decl',
      // TODO make it more accurate
      field('attrs', repeat(choice('pure', 'multi', 'partial'))),
      field('name', $.ident),
      field('params', seq('(', repeat($.ty), ')')),
      field('ret', $.ty),
      ')',
    ),

    // ;;;; rule ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    rule: $ => seq(
      '(',
      'rule',
      choice(
        seq(
          field('name', $.ident),
          field('priority', $._rule_priority),
          field('term', $._pattern),
        ),
        seq(
          field('priority', $._rule_priority),
          field('term', $._pattern),
        ),
        seq(
          field('name', $.ident),
          field('term', $._pattern),
        ),
        field('term', $._pattern),
      ),
      repeat(choice(
        $.if_let,
        $.if,
      )),
      field('rewrite', $._expr),
      ')',
    ),

    _rule_priority: $ => alias($.int, '_rule_priority'),

    // ;;;; extractor ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    extractor: $ => seq(
      '(',
      field('name', $.ident),
      field('params', repeat($.ident)),
      field('ret', $._pattern),
      ')',
    ),

    // ;;;; extern ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    extern: $ => seq(
      '(',
      'extern',
      choice(
        $._extern_constructor_decl,
        $._extern_extractor_decl,
        $._extern_const_decl,
      ),
      ')',
    ),

    _extern_constructor_decl: $ => seq(
      'constructor',
      field('src_name', $.ident),
      field('target_name', $.ident),
    ),

    _extern_extractor_decl: $ => seq(
      'extractor',
      field('attrs', optional('infallible')),
      field('src_name', $.ident),
      field('target_name', $.ident),
    ),

    _extern_const_decl: $ => seq(
      'const',
      $.const_ident,
      $.ident,
      $.ty,
    ),

    // ;;;; convert ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    convert: $ => seq(
      '(',
      'convert',
      field('from', $.ty),
      field('to', $.ty),
      field('name', $.ident),
      ')',
    ),

    // ;;;; comment ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    comment: _ => choice(
      _.line_comment,
      _.block_comment,
    ),

    line_comment: _ => token(seq(';', /[^\r\n]*/)),

    block_comment: _ => token(seq(
      '(;',
      /[^;]*;+([^\(;][^;]*;+)*/,
      ')',
    )),
  }
});
