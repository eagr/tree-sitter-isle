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
      $.model,
      $.form,
      $.spec,
      $.instantiate,
    ),

    // ;;;; base ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    bool: _ => choice('true', 'false'),

    int: _ => choice(
      /-?[0-9][0-9_]*/,
      /-?0[xX][0-9A-Fa-f_]+/,
      /-?0[oO][0-7_]+/,
      /-?0[bB][01_]+/,
    ),

    wildcard: _ => '_',

    ident: _ => /[^\s();#$0-9-][^\s();@]*/,
    ty: $ => alias($.ident, 'ty'),
    const_ident: _ => /\$[^\s();@]*/,

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
      field('name', $.ty),
      field('modifier', optional(choice('extern', 'nodebug'))),
      field('body', choice($.type_primitive, $.type_enum)),
      ')',
    ),

    type_primitive: $ => seq(
      '(',
      field('op', 'primitive'),
      field('name', $.ty),
      ')',
    ),

    type_enum: $ => seq(
      '(',
      field('op', 'enum'),
      field('variants', repeat($.type_enum_variant)),
      ')',
    ),

    type_enum_variant: $ => choice(
      field('name', $.ident),
      seq(
        '(',
        field('name', $.ident),
        repeat($.type_enum_variant_field),
        ')',
      ),
    ),

    type_enum_variant_field: $ => seq(
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

    comment: _ => token(choice(
      /;[^\r\n]*/,
      /\(;(?:[^;]|;+[^;)])*;+\)/,
    )),

    // ;;;; verification base ;;;;;;;;;;;;;;;;;;;;

    unit: _ => '()',

    enum_variant: _ => seq(
      '(',
      token.immediate(seq(
        field('enum', /[A-Za-z_][^\s();@]*/),
        '.',
        field('variant', /[A-Za-z_][^\s();@]*/),
      )),
      ')',
    ),

    bv_ty: $ => seq(
      '(',
      field('op', 'bv'),
      field('width', optional($.int)),
      ')',
    ),

    bv_const: _ => choice(
      /#b[+-]?[0-1]+/,
      /#x[+-]?[0-9A-Fa-f]+/,
    ),

    sig: $ => seq(
      '(',
      $.sig_args,
      $.sig_ret,
      $.sig_canon,
      ')',
    ),

    sig_args: $ => seq(
      '(',
      field('op', 'args'),
      repeat(choice(
        $.model_ty,
        $.bv_ty,
      )),
      ')',
    ),

    sig_ret: $ => seq(
      '(',
      field('op', 'ret'),
      repeat(choice(
        $.model_ty,
        $.bv_ty,
      )),
      ')',
    ),

    sig_canon: $ => seq(
      '(',
      field('op', 'canon'),
      repeat(choice(
        $.model_ty,
        $.bv_ty,
      )),
      ')',
    ),

    // ;;;; model ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    model: $ => seq(
      '(',
      field('op', 'model'),
      field('name', $.ty),
      choice(
        $.model_type,
        $.model_enum,
      ),
      ')',
    ),

    model_type: $ => seq(
      '(',
      field('kind', 'type'),
      choice(
        $.model_ty,
        $.bv_ty,
      ),
      ')',
    ),

    model_ty: _ => choice(
      'Bool',
      'Int',
      'Unit',
    ),

    model_enum: $ => seq(
      '(',
      'enum',
      repeat($.model_enum_variant),
      ')',
    ),

    model_enum_variant: $ => seq(
      '(',
      field('name', $.ident),
      field('val', optional($._spec_expr)),
      ')',
    ),

    // ;;;; form ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    form: $ => seq(
      '(',
      field('op', 'form'),
      field('name', $.ident),
      repeat($.sig),
      ')',
    ),

    // ;;;; spec ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    spec: $ => seq(
      '(',
      field('op', 'spec'),
      $.spec_term,
      $.provide,
      optional($.require),
      ')',
    ),

    spec_term: $ => seq(
      '(',
      field('term', $.ident),
      repeat($.ident),
      ')',
    ),

    provide: $ => seq(
      '(',
      field('op', 'provide'),
      repeat($._spec_expr),
      ')',
    ),

    require: $ => seq(
      '(',
      field('op', 'require'),
      repeat($._spec_expr),
      ')',
    ),

    _spec_expr: $ => choice(
      $.int,
      $.bv_const,
      $.bool,
      $.ident,
      $.switch,
      $.spec_operation,
      $.enum_variant,
      $.unit,
    ),

    switch: $ => seq(
      '(',
      field('op', 'switch'),
      $._spec_expr,
      repeat($.spec_expr_pair),
      ')',
    ),

    spec_expr_pair: $ => seq(
      '(',
      $._spec_expr,
      $._spec_expr,
      ')',
    ),

    spec_operation: $ => seq(
      '(',
      field('op', $._spec_op),
      repeat($._spec_expr),
      ')',
    ),

    _spec_op: _ => choice(
      '=>',
      '<=', '>=', '<', '>', '=',
      'and', 'not', 'or',
      'bvand', 'bvnot', 'bvor', 'bvxor',
      'bvadd', 'bvsub', 'bvmul', 'bvneg',
      'bvudiv', 'bvurem', 'bvsdiv', 'bvsrem',
      'bvuaddo', 'bvsaddo', 'bvusubo', 'bvssubo',
      'bvshl', 'bvlshr', 'bvashr',
      'bvule', 'bvult', 'bvugt', 'bvuge',
      'bvslt', 'bvsle', 'bvsgt', 'bvsge',
      'rotl', 'rotr',
      'extract', 'concat', 'conv_to', 'int2bv', 'bv2int',
      'zero_ext', 'sign_ext',
      'widthof',
      'if',
      'subs', 'popcnt', 'rev', 'cls', 'clz',
      'load_effect', 'store_effect',
    ),

    // ;;;; instantiate ;;;;;;;;;;;;;;;;;;;;;;;;;;

    instantiate: $ => seq(
      '(',
      field('op', 'instantiate'),
      field('fn', $.ident),
      choice(
        $.ident,
        repeat($.sig),
      ),
      ')',
    )
  }
});
