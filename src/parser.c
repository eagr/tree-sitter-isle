#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 218
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  sym_ident = 1,
  anon_sym_true = 2,
  anon_sym_false = 3,
  aux_sym_int_token1 = 4,
  aux_sym_int_token2 = 5,
  aux_sym_int_token3 = 6,
  aux_sym_int_token4 = 7,
  sym_wildcard = 8,
  sym_const_ident = 9,
  anon_sym_LPAREN = 10,
  anon_sym_if_DASHlet = 11,
  anon_sym_RPAREN = 12,
  anon_sym_if = 13,
  anon_sym_let = 14,
  anon_sym_AT = 15,
  anon_sym_and = 16,
  anon_sym_pragma = 17,
  anon_sym_type = 18,
  anon_sym_extern = 19,
  anon_sym_nodebug = 20,
  anon_sym_primitive = 21,
  anon_sym_enum = 22,
  anon_sym_decl = 23,
  anon_sym_pure = 24,
  anon_sym_multi = 25,
  anon_sym_partial = 26,
  anon_sym_rule = 27,
  anon_sym_extractor = 28,
  anon_sym_const = 29,
  anon_sym_constructor = 30,
  anon_sym_infallible = 31,
  anon_sym_convert = 32,
  sym_comment = 33,
  sym_source = 34,
  sym__def = 35,
  sym_bool = 36,
  sym_int = 37,
  sym_ty = 38,
  sym_if_let = 39,
  sym_if = 40,
  sym_let = 41,
  sym_let_binding = 42,
  sym__pattern = 43,
  sym_pattern_bind = 44,
  sym_pattern_and = 45,
  sym_pattern_term = 46,
  sym__expr = 47,
  sym_expr_term = 48,
  sym_pragma = 49,
  sym_type = 50,
  sym_type_primitive = 51,
  sym_type_enum = 52,
  sym_enum_variant = 53,
  sym_variant_field = 54,
  sym_decl = 55,
  sym_decl_params = 56,
  sym_rule = 57,
  sym_extractor = 58,
  sym__extern = 59,
  sym_extern_const = 60,
  sym_extern_constructor = 61,
  sym_extern_extractor = 62,
  sym_convert = 63,
  aux_sym_source_repeat1 = 64,
  aux_sym_let_repeat1 = 65,
  aux_sym_pattern_and_repeat1 = 66,
  aux_sym_expr_term_repeat1 = 67,
  aux_sym_type_enum_repeat1 = 68,
  aux_sym_enum_variant_repeat1 = 69,
  aux_sym_decl_params_repeat1 = 70,
  aux_sym_rule_repeat1 = 71,
  aux_sym_extractor_repeat1 = 72,
  anon_alias_sym_ty = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [aux_sym_int_token3] = "int_token3",
  [aux_sym_int_token4] = "int_token4",
  [sym_wildcard] = "wildcard",
  [sym_const_ident] = "const_ident",
  [anon_sym_LPAREN] = "(",
  [anon_sym_if_DASHlet] = "if-let",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_AT] = "@",
  [anon_sym_and] = "and",
  [anon_sym_pragma] = "pragma",
  [anon_sym_type] = "type",
  [anon_sym_extern] = "extern",
  [anon_sym_nodebug] = "nodebug",
  [anon_sym_primitive] = "primitive",
  [anon_sym_enum] = "enum",
  [anon_sym_decl] = "decl",
  [anon_sym_pure] = "pure",
  [anon_sym_multi] = "multi",
  [anon_sym_partial] = "partial",
  [anon_sym_rule] = "rule",
  [anon_sym_extractor] = "extractor",
  [anon_sym_const] = "const",
  [anon_sym_constructor] = "constructor",
  [anon_sym_infallible] = "infallible",
  [anon_sym_convert] = "convert",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__def] = "_def",
  [sym_bool] = "bool",
  [sym_int] = "int",
  [sym_ty] = "ty",
  [sym_if_let] = "if_let",
  [sym_if] = "if",
  [sym_let] = "let",
  [sym_let_binding] = "let_binding",
  [sym__pattern] = "_pattern",
  [sym_pattern_bind] = "pattern_bind",
  [sym_pattern_and] = "pattern_and",
  [sym_pattern_term] = "pattern_term",
  [sym__expr] = "_expr",
  [sym_expr_term] = "expr_term",
  [sym_pragma] = "pragma",
  [sym_type] = "type",
  [sym_type_primitive] = "type_primitive",
  [sym_type_enum] = "type_enum",
  [sym_enum_variant] = "enum_variant",
  [sym_variant_field] = "variant_field",
  [sym_decl] = "decl",
  [sym_decl_params] = "decl_params",
  [sym_rule] = "rule",
  [sym_extractor] = "extractor",
  [sym__extern] = "_extern",
  [sym_extern_const] = "extern_const",
  [sym_extern_constructor] = "extern_constructor",
  [sym_extern_extractor] = "extern_extractor",
  [sym_convert] = "convert",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_let_repeat1] = "let_repeat1",
  [aux_sym_pattern_and_repeat1] = "pattern_and_repeat1",
  [aux_sym_expr_term_repeat1] = "expr_term_repeat1",
  [aux_sym_type_enum_repeat1] = "type_enum_repeat1",
  [aux_sym_enum_variant_repeat1] = "enum_variant_repeat1",
  [aux_sym_decl_params_repeat1] = "decl_params_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_extractor_repeat1] = "extractor_repeat1",
  [anon_alias_sym_ty] = "ty",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [aux_sym_int_token3] = aux_sym_int_token3,
  [aux_sym_int_token4] = aux_sym_int_token4,
  [sym_wildcard] = sym_wildcard,
  [sym_const_ident] = sym_const_ident,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_if_DASHlet] = anon_sym_if_DASHlet,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_pragma] = anon_sym_pragma,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_nodebug] = anon_sym_nodebug,
  [anon_sym_primitive] = anon_sym_primitive,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_decl] = anon_sym_decl,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_extractor] = anon_sym_extractor,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_infallible] = anon_sym_infallible,
  [anon_sym_convert] = anon_sym_convert,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__def] = sym__def,
  [sym_bool] = sym_bool,
  [sym_int] = sym_int,
  [sym_ty] = sym_ty,
  [sym_if_let] = sym_if_let,
  [sym_if] = sym_if,
  [sym_let] = sym_let,
  [sym_let_binding] = sym_let_binding,
  [sym__pattern] = sym__pattern,
  [sym_pattern_bind] = sym_pattern_bind,
  [sym_pattern_and] = sym_pattern_and,
  [sym_pattern_term] = sym_pattern_term,
  [sym__expr] = sym__expr,
  [sym_expr_term] = sym_expr_term,
  [sym_pragma] = sym_pragma,
  [sym_type] = sym_type,
  [sym_type_primitive] = sym_type_primitive,
  [sym_type_enum] = sym_type_enum,
  [sym_enum_variant] = sym_enum_variant,
  [sym_variant_field] = sym_variant_field,
  [sym_decl] = sym_decl,
  [sym_decl_params] = sym_decl_params,
  [sym_rule] = sym_rule,
  [sym_extractor] = sym_extractor,
  [sym__extern] = sym__extern,
  [sym_extern_const] = sym_extern_const,
  [sym_extern_constructor] = sym_extern_constructor,
  [sym_extern_extractor] = sym_extern_extractor,
  [sym_convert] = sym_convert,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_let_repeat1] = aux_sym_let_repeat1,
  [aux_sym_pattern_and_repeat1] = aux_sym_pattern_and_repeat1,
  [aux_sym_expr_term_repeat1] = aux_sym_expr_term_repeat1,
  [aux_sym_type_enum_repeat1] = aux_sym_type_enum_repeat1,
  [aux_sym_enum_variant_repeat1] = aux_sym_enum_variant_repeat1,
  [aux_sym_decl_params_repeat1] = aux_sym_decl_params_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_extractor_repeat1] = aux_sym_extractor_repeat1,
  [anon_alias_sym_ty] = anon_alias_sym_ty,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_const_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nodebug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primitive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extractor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infallible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_convert] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__def] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_ty] = {
    .visible = true,
    .named = true,
  },
  [sym_if_let] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_bind] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_and] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_term] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_type_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_field] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_params] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_extractor] = {
    .visible = true,
    .named = true,
  },
  [sym__extern] = {
    .visible = false,
    .named = true,
  },
  [sym_extern_const] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_extractor] = {
    .visible = true,
    .named = true,
  },
  [sym_convert] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_and_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_variant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extractor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_ty] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_bindings = 1,
  field_body = 2,
  field_fn = 3,
  field_inner = 4,
  field_kind = 5,
  field_modifier = 6,
  field_modifier_multi = 7,
  field_modifier_partial = 8,
  field_modifier_pure = 9,
  field_name = 10,
  field_op = 11,
  field_outer = 12,
  field_params = 13,
  field_priority = 14,
  field_ret = 15,
  field_template = 16,
  field_term = 17,
  field_ty = 18,
  field_variants = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bindings] = "bindings",
  [field_body] = "body",
  [field_fn] = "fn",
  [field_inner] = "inner",
  [field_kind] = "kind",
  [field_modifier] = "modifier",
  [field_modifier_multi] = "modifier_multi",
  [field_modifier_partial] = "modifier_partial",
  [field_modifier_pure] = "modifier_pure",
  [field_name] = "name",
  [field_op] = "op",
  [field_outer] = "outer",
  [field_params] = "params",
  [field_priority] = "priority",
  [field_ret] = "ret",
  [field_template] = "template",
  [field_term] = "term",
  [field_ty] = "ty",
  [field_variants] = "variants",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 3},
  [4] = {.index = 4, .length = 4},
  [5] = {.index = 8, .length = 4},
  [6] = {.index = 12, .length = 1},
  [7] = {.index = 13, .length = 4},
  [8] = {.index = 17, .length = 5},
  [9] = {.index = 22, .length = 4},
  [10] = {.index = 26, .length = 2},
  [11] = {.index = 28, .length = 2},
  [12] = {.index = 30, .length = 4},
  [13] = {.index = 34, .length = 2},
  [14] = {.index = 36, .length = 5},
  [15] = {.index = 41, .length = 5},
  [16] = {.index = 46, .length = 5},
  [17] = {.index = 51, .length = 3},
  [18] = {.index = 54, .length = 3},
  [19] = {.index = 57, .length = 1},
  [20] = {.index = 58, .length = 6},
  [21] = {.index = 64, .length = 6},
  [22] = {.index = 70, .length = 6},
  [23] = {.index = 76, .length = 4},
  [24] = {.index = 80, .length = 7},
  [25] = {.index = 87, .length = 4},
  [26] = {.index = 91, .length = 5},
  [27] = {.index = 96, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 1},
  [1] =
    {field_body, 3},
    {field_name, 2},
    {field_op, 1},
  [4] =
    {field_fn, 3},
    {field_kind, 1},
    {field_op, 0},
    {field_term, 2},
  [8] =
    {field_kind, 1},
    {field_name, 2},
    {field_op, 0},
    {field_ty, 3},
  [12] =
    {field_name, 0},
  [13] =
    {field_body, 4},
    {field_modifier, 3},
    {field_name, 2},
    {field_op, 1},
  [17] =
    {field_fn, 4},
    {field_kind, 1},
    {field_modifier, 2},
    {field_op, 0},
    {field_term, 3},
  [22] =
    {field_op, 1},
    {field_params, 3},
    {field_ret, 4},
    {field_term, 2},
  [26] =
    {field_name, 2},
    {field_op, 1},
  [28] =
    {field_op, 1},
    {field_priority, 2},
  [30] =
    {field_inner, 2},
    {field_op, 1},
    {field_outer, 3},
    {field_term, 4},
  [34] =
    {field_op, 1},
    {field_variants, 2},
  [36] =
    {field_modifier_pure, 2},
    {field_op, 1},
    {field_params, 4},
    {field_ret, 5},
    {field_term, 3},
  [41] =
    {field_modifier_multi, 2},
    {field_op, 1},
    {field_params, 4},
    {field_ret, 5},
    {field_term, 3},
  [46] =
    {field_modifier_partial, 2},
    {field_op, 1},
    {field_params, 4},
    {field_ret, 5},
    {field_term, 3},
  [51] =
    {field_name, 2},
    {field_op, 1},
    {field_priority, 3},
  [54] =
    {field_op, 1},
    {field_template, 5},
    {field_term, 3},
  [57] =
    {field_name, 1},
  [58] =
    {field_modifier_multi, 3},
    {field_modifier_pure, 2},
    {field_op, 1},
    {field_params, 5},
    {field_ret, 6},
    {field_term, 4},
  [64] =
    {field_modifier_partial, 3},
    {field_modifier_pure, 2},
    {field_op, 1},
    {field_params, 5},
    {field_ret, 6},
    {field_term, 4},
  [70] =
    {field_modifier_multi, 2},
    {field_modifier_partial, 3},
    {field_op, 1},
    {field_params, 5},
    {field_ret, 6},
    {field_term, 4},
  [76] =
    {field_op, 1},
    {field_params, 4},
    {field_template, 6},
    {field_term, 3},
  [80] =
    {field_modifier_multi, 3},
    {field_modifier_partial, 4},
    {field_modifier_pure, 2},
    {field_op, 1},
    {field_params, 6},
    {field_ret, 7},
    {field_term, 5},
  [87] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_body, 4},
    {field_op, 1},
  [91] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_bindings, 4},
    {field_body, 5},
    {field_op, 1},
  [96] =
    {field_name, 1},
    {field_ty, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_ty,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 2,
  [9] = 5,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 19,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 66,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 54,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 36,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 100,
  [139] = 41,
  [140] = 140,
  [141] = 136,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 39,
  [150] = 150,
  [151] = 49,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 48,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 50,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 51,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 54,
  [189] = 189,
  [190] = 190,
  [191] = 46,
  [192] = 192,
  [193] = 42,
  [194] = 194,
  [195] = 44,
  [196] = 45,
  [197] = 197,
  [198] = 43,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 171,
  [211] = 181,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 175,
  [217] = 217,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      ADVANCE_MAP(
        '$', 142,
        '(', 143,
        ')', 146,
        '-', 6,
        '0', 68,
        ';', 176,
        '@', 150,
        'c', 114,
        'd', 92,
        'e', 113,
        'i', 100,
        'n', 115,
        'p', 119,
        'r', 132,
        't', 137,
        0x200b, 78,
        0x2028, 78,
        0x2029, 78,
        0x2060, 78,
        0xfeff, 78,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 142,
        '(', 143,
        ')', 146,
        '-', 6,
        '0', 68,
        ';', 176,
        '@', 150,
        0x200b, 79,
        0x2028, 79,
        0x2029, 79,
        0x2060, 79,
        0xfeff, 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 142,
        '(', 143,
        ')', 146,
        '-', 6,
        '0', 68,
        ';', 176,
        0x200b, 80,
        0x2028, 80,
        0x2029, 80,
        0x2060, 80,
        0xfeff, 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      ADVANCE_MAP(
        '$', 142,
        '(', 143,
        ')', 146,
        '-', 6,
        '0', 68,
        ';', 176,
        '@', 149,
        'c', 39,
        'd', 17,
        'e', 38,
        'i', 25,
        'n', 40,
        'p', 44,
        'r', 57,
        't', 62,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(141);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '$', 141,
        '-', 81,
        '0', 69,
        '@', 150,
        'c', 114,
        'd', 92,
        'e', 113,
        'i', 100,
        'n', 115,
        'p', 119,
        'r', 132,
        't', 137,
        0x200b, 78,
        0x2028, 78,
        0x2029, 78,
        0x2060, 78,
        0xfeff, 78,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(141);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '$', 141,
        '-', 81,
        '0', 69,
        '@', 150,
        0x200b, 79,
        0x2028, 79,
        0x2029, 79,
        0x2060, 79,
        0xfeff, 79,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(141);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '$', 141,
        '-', 81,
        '0', 69,
        '@', 141,
        0x200b, 80,
        0x2028, 80,
        0x2029, 80,
        0x2060, 80,
        0xfeff, 80,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(141);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(141);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(141);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_const_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ';') ADVANCE(8);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_pragma);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_nodebug);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_nodebug);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_primitive);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_primitive);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_decl);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_decl);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_extractor);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_extractor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_convert);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_convert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(176);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        '_', 1,
        'a', 2,
        'f', 3,
        'i', 4,
        'l', 5,
        'm', 6,
        'p', 7,
        't', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_infallible);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 66},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 66},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 66},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 66},
  [57] = {.lex_state = 66},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 66},
  [63] = {.lex_state = 66},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 66},
  [70] = {.lex_state = 66},
  [71] = {.lex_state = 66},
  [72] = {.lex_state = 66},
  [73] = {.lex_state = 66},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 66},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 66},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 66},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 66},
  [87] = {.lex_state = 66},
  [88] = {.lex_state = 66},
  [89] = {.lex_state = 66},
  [90] = {.lex_state = 66},
  [91] = {.lex_state = 66},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 66},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 66},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 66},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 66},
  [103] = {.lex_state = 66},
  [104] = {.lex_state = 66},
  [105] = {.lex_state = 66},
  [106] = {.lex_state = 66},
  [107] = {.lex_state = 66},
  [108] = {.lex_state = 66},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 66},
  [111] = {.lex_state = 66},
  [112] = {.lex_state = 66},
  [113] = {.lex_state = 66},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 66},
  [116] = {.lex_state = 66},
  [117] = {.lex_state = 66},
  [118] = {.lex_state = 66},
  [119] = {.lex_state = 66},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 66},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 66},
  [124] = {.lex_state = 66},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 66},
  [127] = {.lex_state = 66},
  [128] = {.lex_state = 66},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 66},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 66},
  [133] = {.lex_state = 66},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 66},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 66},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 66},
  [143] = {.lex_state = 66},
  [144] = {.lex_state = 66},
  [145] = {.lex_state = 66},
  [146] = {.lex_state = 66},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 66},
  [149] = {.lex_state = 66},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 66},
  [152] = {.lex_state = 66},
  [153] = {.lex_state = 66},
  [154] = {.lex_state = 66},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 66},
  [158] = {.lex_state = 66},
  [159] = {.lex_state = 66},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 66},
  [164] = {.lex_state = 66},
  [165] = {.lex_state = 66},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 66},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 66},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 66},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 66},
  [174] = {.lex_state = 66},
  [175] = {.lex_state = 66},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 66},
  [178] = {.lex_state = 66},
  [179] = {.lex_state = 66},
  [180] = {.lex_state = 66},
  [181] = {.lex_state = 66},
  [182] = {.lex_state = 66},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 66},
  [185] = {.lex_state = 66},
  [186] = {.lex_state = 66},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 66},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 66},
  [191] = {.lex_state = 66},
  [192] = {.lex_state = 66},
  [193] = {.lex_state = 66},
  [194] = {.lex_state = 66},
  [195] = {.lex_state = 66},
  [196] = {.lex_state = 66},
  [197] = {.lex_state = 66},
  [198] = {.lex_state = 66},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 66},
  [201] = {.lex_state = 66},
  [202] = {.lex_state = 66},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 66},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 66},
  [207] = {.lex_state = 66},
  [208] = {.lex_state = 66},
  [209] = {.lex_state = 66},
  [210] = {.lex_state = 66},
  [211] = {.lex_state = 66},
  [212] = {.lex_state = 66},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 66},
  [216] = {.lex_state = 66},
  [217] = {.lex_state = 66},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [aux_sym_int_token2] = ACTIONS(1),
    [aux_sym_int_token3] = ACTIONS(1),
    [aux_sym_int_token4] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [sym_const_ident] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_if_DASHlet] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_pragma] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_nodebug] = ACTIONS(1),
    [anon_sym_primitive] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_decl] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_extractor] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_infallible] = ACTIONS(1),
    [anon_sym_convert] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(157),
    [sym__def] = STATE(38),
    [sym_pragma] = STATE(38),
    [sym_type] = STATE(38),
    [sym_decl] = STATE(38),
    [sym_rule] = STATE(38),
    [sym_extractor] = STATE(38),
    [sym__extern] = STATE(38),
    [sym_convert] = STATE(38),
    [aux_sym_source_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [36] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(5), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [72] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [108] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [144] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(8), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(43), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [216] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [252] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [288] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(58), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(2), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(206), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [357] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 2,
      sym_ident,
      sym_const_ident,
    STATE(14), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(154), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [390] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 2,
      sym_ident,
      sym_const_ident,
    STATE(18), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(215), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [423] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(74), 2,
      sym_ident,
      sym_const_ident,
    STATE(37), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(158), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(76), 2,
      sym_ident,
      sym_const_ident,
    STATE(17), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(209), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(78), 2,
      sym_ident,
      sym_const_ident,
    STATE(37), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(146), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [522] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 2,
      sym_ident,
      sym_const_ident,
    STATE(37), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(145), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 2,
      sym_ident,
      sym_const_ident,
    STATE(37), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(165), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(22), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_ident,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(186), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [652] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(44), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [684] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(101), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(22), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_ident,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(159), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [748] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_ident,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [780] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(19), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [812] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(29), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(28), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [876] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(22), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [908] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(153), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(171), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [964] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(134), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(217), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(136), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(181), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1020] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(174), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1048] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(140), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(211), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1076] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(142), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(210), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(144), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(37), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(148), 8,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
  [1146] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(40), 9,
      sym__def,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
      aux_sym_source_repeat1,
  [1167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1184] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(40), 9,
      sym__def,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
      aux_sym_source_repeat1,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 11,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_wildcard,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1307] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_pragma,
    ACTIONS(176), 1,
      anon_sym_type,
    ACTIONS(178), 1,
      anon_sym_extern,
    ACTIONS(180), 1,
      anon_sym_decl,
    ACTIONS(182), 1,
      anon_sym_rule,
    ACTIONS(184), 1,
      anon_sym_extractor,
    ACTIONS(186), 1,
      anon_sym_convert,
    STATE(194), 3,
      sym_extern_const,
      sym_extern_constructor,
      sym_extern_extractor,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 10,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 10,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 10,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 10,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_ident,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_pattern_term,
    STATE(111), 1,
      sym_int,
    ACTIONS(66), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1468] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_int_token1,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_pattern_term,
    STATE(107), 1,
      sym_int,
    ACTIONS(206), 3,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1489] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 2,
      anon_sym_extern,
      anon_sym_nodebug,
    STATE(148), 2,
      sym_type_primitive,
      sym_type_enum,
  [1504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_ident,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(59), 2,
      sym_enum_variant,
      aux_sym_type_enum_repeat1,
  [1521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_ident,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_enum_variant,
      aux_sym_type_enum_repeat1,
  [1538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_ident,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_enum_variant,
      aux_sym_type_enum_repeat1,
  [1555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_ident,
    ACTIONS(230), 1,
      anon_sym_if_DASHlet,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(234), 1,
      anon_sym_let,
  [1571] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_variant_field,
      aux_sym_enum_variant_repeat1,
  [1585] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(63), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [1599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_ident,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(67), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [1613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(64), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [1627] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(72), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [1641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_ident,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(67), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [1655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_ident,
    ACTIONS(263), 1,
      anon_sym_pure,
    ACTIONS(265), 1,
      anon_sym_multi,
    ACTIONS(267), 1,
      anon_sym_partial,
  [1671] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(70), 2,
      sym_variant_field,
      aux_sym_enum_variant_repeat1,
  [1685] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_variant_field,
      aux_sym_enum_variant_repeat1,
  [1699] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(73), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [1713] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(63), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [1727] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(63), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [1741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_ident,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_extractor_repeat1,
  [1754] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(169), 2,
      sym_type_primitive,
      sym_type_enum,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    ACTIONS(287), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_ident,
    ACTIONS(291), 1,
      anon_sym_multi,
    ACTIONS(293), 1,
      anon_sym_partial,
  [1789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_ident,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_extractor_repeat1,
  [1802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_ident,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_extractor_repeat1,
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_ident,
    ACTIONS(306), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1826] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_extractor,
    ACTIONS(310), 1,
      anon_sym_const,
    ACTIONS(312), 1,
      anon_sym_constructor,
  [1839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_ident,
    ACTIONS(316), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1850] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      sym_ident,
  [1870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_ident,
    STATE(161), 1,
      sym_ty,
  [1880] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
  [1890] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
  [1900] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
  [1910] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_primitive,
    ACTIONS(338), 1,
      anon_sym_enum,
  [1920] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
  [1930] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(204), 1,
      sym_ty,
  [1950] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_decl_params,
  [1960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(208), 1,
      sym_ty,
  [1970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(212), 1,
      sym_ty,
  [1980] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(177), 1,
      sym_ty,
  [2000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(192), 1,
      sym_ty,
  [2010] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_decl_params,
  [2020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_ident,
    ACTIONS(358), 1,
      anon_sym_let,
  [2030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_ident,
    ACTIONS(362), 1,
      anon_sym_partial,
  [2040] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_decl_params,
  [2050] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
  [2060] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(368), 1,
      anon_sym_if_DASHlet,
  [2070] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_decl_params,
  [2080] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
  [2090] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_pattern_term,
  [2100] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(164), 1,
      sym_ty,
  [2120] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
  [2130] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_pattern_term,
  [2140] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
  [2150] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_ident,
    ACTIONS(392), 1,
      anon_sym_infallible,
  [2170] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
  [2180] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_decl_params,
  [2190] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
  [2200] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
  [2210] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
  [2220] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
  [2230] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
  [2240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_ident,
    STATE(31), 1,
      sym_ty,
  [2250] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
  [2260] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(182), 1,
      sym_ty,
  [2280] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
  [2290] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [2300] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [2310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_ident,
    ACTIONS(442), 1,
      anon_sym_partial,
  [2320] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(446), 1,
      anon_sym_AT,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(178), 1,
      sym_ty,
  [2340] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_decl_params,
  [2350] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_decl_params,
  [2360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(200), 1,
      sym_ty,
  [2370] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_decl_params,
  [2380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_and,
  [2390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_ident,
    STATE(207), 1,
      sym_ty,
  [2400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_ident,
    ACTIONS(234), 1,
      anon_sym_let,
  [2410] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
  [2420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_ident,
    STATE(85), 1,
      sym_ty,
  [2430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_ident,
    ACTIONS(456), 1,
      anon_sym_and,
  [2440] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
  [2450] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
  [2457] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [2464] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
  [2471] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_ident,
  [2485] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2492] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_ident,
  [2506] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [2513] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_const_ident,
  [2520] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2527] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_ident,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_ident,
  [2548] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [2555] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [2562] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [2569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_ident,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_ident,
  [2583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_ident,
  [2590] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [2597] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [2604] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [2611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_ident,
  [2618] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_ident,
  [2632] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [2639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_ident,
  [2646] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
  [2660] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
  [2667] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [2674] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_ident,
  [2688] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [2695] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [2702] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [2709] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [2716] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [2723] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_ident,
  [2737] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [2744] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [2751] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [2758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_ident,
  [2765] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
  [2772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_ident,
  [2779] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [2786] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [2793] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [2800] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
  [2807] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [2814] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
  [2821] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [2828] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [2835] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [2842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_ident,
  [2849] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [2856] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [2863] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [2870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_ident,
  [2877] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_ident,
  [2891] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [2898] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [2905] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
  [2912] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [2919] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [2926] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [2933] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_ident,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_ident,
  [2954] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
  [2961] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [2968] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 357,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 456,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 522,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 588,
  [SMALL_STATE(20)] = 620,
  [SMALL_STATE(21)] = 652,
  [SMALL_STATE(22)] = 684,
  [SMALL_STATE(23)] = 716,
  [SMALL_STATE(24)] = 748,
  [SMALL_STATE(25)] = 780,
  [SMALL_STATE(26)] = 812,
  [SMALL_STATE(27)] = 844,
  [SMALL_STATE(28)] = 876,
  [SMALL_STATE(29)] = 908,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 964,
  [SMALL_STATE(32)] = 992,
  [SMALL_STATE(33)] = 1020,
  [SMALL_STATE(34)] = 1048,
  [SMALL_STATE(35)] = 1076,
  [SMALL_STATE(36)] = 1104,
  [SMALL_STATE(37)] = 1124,
  [SMALL_STATE(38)] = 1146,
  [SMALL_STATE(39)] = 1167,
  [SMALL_STATE(40)] = 1184,
  [SMALL_STATE(41)] = 1205,
  [SMALL_STATE(42)] = 1222,
  [SMALL_STATE(43)] = 1239,
  [SMALL_STATE(44)] = 1256,
  [SMALL_STATE(45)] = 1273,
  [SMALL_STATE(46)] = 1290,
  [SMALL_STATE(47)] = 1307,
  [SMALL_STATE(48)] = 1337,
  [SMALL_STATE(49)] = 1353,
  [SMALL_STATE(50)] = 1369,
  [SMALL_STATE(51)] = 1385,
  [SMALL_STATE(52)] = 1401,
  [SMALL_STATE(53)] = 1416,
  [SMALL_STATE(54)] = 1431,
  [SMALL_STATE(55)] = 1446,
  [SMALL_STATE(56)] = 1468,
  [SMALL_STATE(57)] = 1489,
  [SMALL_STATE(58)] = 1504,
  [SMALL_STATE(59)] = 1521,
  [SMALL_STATE(60)] = 1538,
  [SMALL_STATE(61)] = 1555,
  [SMALL_STATE(62)] = 1571,
  [SMALL_STATE(63)] = 1585,
  [SMALL_STATE(64)] = 1599,
  [SMALL_STATE(65)] = 1613,
  [SMALL_STATE(66)] = 1627,
  [SMALL_STATE(67)] = 1641,
  [SMALL_STATE(68)] = 1655,
  [SMALL_STATE(69)] = 1671,
  [SMALL_STATE(70)] = 1685,
  [SMALL_STATE(71)] = 1699,
  [SMALL_STATE(72)] = 1713,
  [SMALL_STATE(73)] = 1727,
  [SMALL_STATE(74)] = 1741,
  [SMALL_STATE(75)] = 1754,
  [SMALL_STATE(76)] = 1765,
  [SMALL_STATE(77)] = 1776,
  [SMALL_STATE(78)] = 1789,
  [SMALL_STATE(79)] = 1802,
  [SMALL_STATE(80)] = 1815,
  [SMALL_STATE(81)] = 1826,
  [SMALL_STATE(82)] = 1839,
  [SMALL_STATE(83)] = 1850,
  [SMALL_STATE(84)] = 1860,
  [SMALL_STATE(85)] = 1870,
  [SMALL_STATE(86)] = 1880,
  [SMALL_STATE(87)] = 1890,
  [SMALL_STATE(88)] = 1900,
  [SMALL_STATE(89)] = 1910,
  [SMALL_STATE(90)] = 1920,
  [SMALL_STATE(91)] = 1930,
  [SMALL_STATE(92)] = 1940,
  [SMALL_STATE(93)] = 1950,
  [SMALL_STATE(94)] = 1960,
  [SMALL_STATE(95)] = 1970,
  [SMALL_STATE(96)] = 1980,
  [SMALL_STATE(97)] = 1990,
  [SMALL_STATE(98)] = 2000,
  [SMALL_STATE(99)] = 2010,
  [SMALL_STATE(100)] = 2020,
  [SMALL_STATE(101)] = 2030,
  [SMALL_STATE(102)] = 2040,
  [SMALL_STATE(103)] = 2050,
  [SMALL_STATE(104)] = 2060,
  [SMALL_STATE(105)] = 2070,
  [SMALL_STATE(106)] = 2080,
  [SMALL_STATE(107)] = 2090,
  [SMALL_STATE(108)] = 2100,
  [SMALL_STATE(109)] = 2110,
  [SMALL_STATE(110)] = 2120,
  [SMALL_STATE(111)] = 2130,
  [SMALL_STATE(112)] = 2140,
  [SMALL_STATE(113)] = 2150,
  [SMALL_STATE(114)] = 2160,
  [SMALL_STATE(115)] = 2170,
  [SMALL_STATE(116)] = 2180,
  [SMALL_STATE(117)] = 2190,
  [SMALL_STATE(118)] = 2200,
  [SMALL_STATE(119)] = 2210,
  [SMALL_STATE(120)] = 2220,
  [SMALL_STATE(121)] = 2230,
  [SMALL_STATE(122)] = 2240,
  [SMALL_STATE(123)] = 2250,
  [SMALL_STATE(124)] = 2260,
  [SMALL_STATE(125)] = 2270,
  [SMALL_STATE(126)] = 2280,
  [SMALL_STATE(127)] = 2290,
  [SMALL_STATE(128)] = 2300,
  [SMALL_STATE(129)] = 2310,
  [SMALL_STATE(130)] = 2320,
  [SMALL_STATE(131)] = 2330,
  [SMALL_STATE(132)] = 2340,
  [SMALL_STATE(133)] = 2350,
  [SMALL_STATE(134)] = 2360,
  [SMALL_STATE(135)] = 2370,
  [SMALL_STATE(136)] = 2380,
  [SMALL_STATE(137)] = 2390,
  [SMALL_STATE(138)] = 2400,
  [SMALL_STATE(139)] = 2410,
  [SMALL_STATE(140)] = 2420,
  [SMALL_STATE(141)] = 2430,
  [SMALL_STATE(142)] = 2440,
  [SMALL_STATE(143)] = 2450,
  [SMALL_STATE(144)] = 2457,
  [SMALL_STATE(145)] = 2464,
  [SMALL_STATE(146)] = 2471,
  [SMALL_STATE(147)] = 2478,
  [SMALL_STATE(148)] = 2485,
  [SMALL_STATE(149)] = 2492,
  [SMALL_STATE(150)] = 2499,
  [SMALL_STATE(151)] = 2506,
  [SMALL_STATE(152)] = 2513,
  [SMALL_STATE(153)] = 2520,
  [SMALL_STATE(154)] = 2527,
  [SMALL_STATE(155)] = 2534,
  [SMALL_STATE(156)] = 2541,
  [SMALL_STATE(157)] = 2548,
  [SMALL_STATE(158)] = 2555,
  [SMALL_STATE(159)] = 2562,
  [SMALL_STATE(160)] = 2569,
  [SMALL_STATE(161)] = 2576,
  [SMALL_STATE(162)] = 2583,
  [SMALL_STATE(163)] = 2590,
  [SMALL_STATE(164)] = 2597,
  [SMALL_STATE(165)] = 2604,
  [SMALL_STATE(166)] = 2611,
  [SMALL_STATE(167)] = 2618,
  [SMALL_STATE(168)] = 2625,
  [SMALL_STATE(169)] = 2632,
  [SMALL_STATE(170)] = 2639,
  [SMALL_STATE(171)] = 2646,
  [SMALL_STATE(172)] = 2653,
  [SMALL_STATE(173)] = 2660,
  [SMALL_STATE(174)] = 2667,
  [SMALL_STATE(175)] = 2674,
  [SMALL_STATE(176)] = 2681,
  [SMALL_STATE(177)] = 2688,
  [SMALL_STATE(178)] = 2695,
  [SMALL_STATE(179)] = 2702,
  [SMALL_STATE(180)] = 2709,
  [SMALL_STATE(181)] = 2716,
  [SMALL_STATE(182)] = 2723,
  [SMALL_STATE(183)] = 2730,
  [SMALL_STATE(184)] = 2737,
  [SMALL_STATE(185)] = 2744,
  [SMALL_STATE(186)] = 2751,
  [SMALL_STATE(187)] = 2758,
  [SMALL_STATE(188)] = 2765,
  [SMALL_STATE(189)] = 2772,
  [SMALL_STATE(190)] = 2779,
  [SMALL_STATE(191)] = 2786,
  [SMALL_STATE(192)] = 2793,
  [SMALL_STATE(193)] = 2800,
  [SMALL_STATE(194)] = 2807,
  [SMALL_STATE(195)] = 2814,
  [SMALL_STATE(196)] = 2821,
  [SMALL_STATE(197)] = 2828,
  [SMALL_STATE(198)] = 2835,
  [SMALL_STATE(199)] = 2842,
  [SMALL_STATE(200)] = 2849,
  [SMALL_STATE(201)] = 2856,
  [SMALL_STATE(202)] = 2863,
  [SMALL_STATE(203)] = 2870,
  [SMALL_STATE(204)] = 2877,
  [SMALL_STATE(205)] = 2884,
  [SMALL_STATE(206)] = 2891,
  [SMALL_STATE(207)] = 2898,
  [SMALL_STATE(208)] = 2905,
  [SMALL_STATE(209)] = 2912,
  [SMALL_STATE(210)] = 2919,
  [SMALL_STATE(211)] = 2926,
  [SMALL_STATE(212)] = 2933,
  [SMALL_STATE(213)] = 2940,
  [SMALL_STATE(214)] = 2947,
  [SMALL_STATE(215)] = 2954,
  [SMALL_STATE(216)] = 2961,
  [SMALL_STATE(217)] = 2968,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 25),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 26),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, 0, 19),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, 0, 19),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, 0, 6),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 1, 0, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, 0, 19),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, 0, 19),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 11),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 11),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extern, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 7),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 7),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, 0, 9),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 6, 0, 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 10),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 10),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 12),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 12),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 14),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 14),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 15),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 15),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 17),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 17),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 10),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 10),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 11),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 11),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 7, 0, 18),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 7, 0, 18),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 20),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 20),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 21),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 21),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 22),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 22),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 17),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 17),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 8, 0, 23),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 8, 0, 23),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 24),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 24),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_field, 4, 0, 27),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_field, 4, 0, 27),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 5, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 5, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 16),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 16),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 3, 0, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [490] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 5, 0, 8),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 4, 0, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_const, 4, 0, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_constructor, 4, 0, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 25),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 26),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_primitive, 4, 0, 10),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 4, 0, 13),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_isle(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
