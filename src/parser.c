#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 233
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
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
  sym_line_comment = 33,
  sym_block_comment = 34,
  sym_source = 35,
  sym__def = 36,
  sym_bool = 37,
  sym_int = 38,
  sym_ty = 39,
  sym_if_let = 40,
  sym_if = 41,
  sym_let = 42,
  sym_let_binding = 43,
  sym__pattern = 44,
  sym_pattern_bind = 45,
  sym_pattern_and = 46,
  sym_pattern_term = 47,
  sym__expr = 48,
  sym_expr_term = 49,
  sym_pragma = 50,
  sym_type = 51,
  sym_type_primitive = 52,
  sym_type_enum = 53,
  sym_enum_variant = 54,
  sym_variant_field = 55,
  sym_decl = 56,
  sym_decl_params = 57,
  sym_rule = 58,
  sym_extractor = 59,
  sym__extern = 60,
  sym_extern_const = 61,
  sym_extern_constructor = 62,
  sym_extern_extractor = 63,
  sym_convert = 64,
  sym_comment = 65,
  aux_sym_source_repeat1 = 66,
  aux_sym_let_repeat1 = 67,
  aux_sym_pattern_and_repeat1 = 68,
  aux_sym_expr_term_repeat1 = 69,
  aux_sym_type_enum_repeat1 = 70,
  aux_sym_enum_variant_repeat1 = 71,
  aux_sym_decl_params_repeat1 = 72,
  aux_sym_rule_repeat1 = 73,
  aux_sym_extractor_repeat1 = 74,
  anon_alias_sym_ty = 75,
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
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
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
  [sym_comment] = "comment",
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
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
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
  [sym_comment] = sym_comment,
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [sym_comment] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 6,
  [9] = 4,
  [10] = 3,
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
  [24] = 24,
  [25] = 23,
  [26] = 19,
  [27] = 27,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 33,
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
  [71] = 71,
  [72] = 67,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 68,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
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
  [103] = 43,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 58,
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
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 37,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 106,
  [152] = 150,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 52,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 54,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 51,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 50,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 58,
  [202] = 202,
  [203] = 203,
  [204] = 47,
  [205] = 205,
  [206] = 45,
  [207] = 207,
  [208] = 46,
  [209] = 209,
  [210] = 38,
  [211] = 39,
  [212] = 212,
  [213] = 40,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 44,
  [220] = 55,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 184,
  [225] = 194,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 215,
  [231] = 231,
  [232] = 232,
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
        ';', 175,
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
        ';', 175,
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
        ';', 175,
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
      if (lookahead == ';') ADVANCE(175);
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
      if (lookahead == ';') ADVANCE(175);
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
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(8);
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
        ';', 175,
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
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(8);
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
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 66},
  [49] = {.lex_state = 66},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 66},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 66},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 66},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 66},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 66},
  [73] = {.lex_state = 66},
  [74] = {.lex_state = 66},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 66},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 66},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 66},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 66},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 66},
  [92] = {.lex_state = 66},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 66},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 66},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 66},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 66},
  [103] = {.lex_state = 66},
  [104] = {.lex_state = 66},
  [105] = {.lex_state = 66},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 66},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 66},
  [110] = {.lex_state = 66},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 66},
  [113] = {.lex_state = 66},
  [114] = {.lex_state = 66},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 66},
  [117] = {.lex_state = 66},
  [118] = {.lex_state = 66},
  [119] = {.lex_state = 66},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 66},
  [122] = {.lex_state = 66},
  [123] = {.lex_state = 66},
  [124] = {.lex_state = 66},
  [125] = {.lex_state = 66},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 66},
  [128] = {.lex_state = 66},
  [129] = {.lex_state = 66},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 66},
  [132] = {.lex_state = 66},
  [133] = {.lex_state = 66},
  [134] = {.lex_state = 66},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 66},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 66},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 66},
  [142] = {.lex_state = 66},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 66},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 66},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 66},
  [149] = {.lex_state = 66},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 66},
  [154] = {.lex_state = 66},
  [155] = {.lex_state = 66},
  [156] = {.lex_state = 66},
  [157] = {.lex_state = 66},
  [158] = {.lex_state = 66},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 66},
  [161] = {.lex_state = 66},
  [162] = {.lex_state = 66},
  [163] = {.lex_state = 66},
  [164] = {.lex_state = 66},
  [165] = {.lex_state = 66},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 66},
  [174] = {.lex_state = 66},
  [175] = {.lex_state = 66},
  [176] = {.lex_state = 66},
  [177] = {.lex_state = 66},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 66},
  [183] = {.lex_state = 66},
  [184] = {.lex_state = 66},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 66},
  [187] = {.lex_state = 66},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 66},
  [190] = {.lex_state = 66},
  [191] = {.lex_state = 66},
  [192] = {.lex_state = 66},
  [193] = {.lex_state = 66},
  [194] = {.lex_state = 66},
  [195] = {.lex_state = 66},
  [196] = {.lex_state = 66},
  [197] = {.lex_state = 66},
  [198] = {.lex_state = 66},
  [199] = {.lex_state = 66},
  [200] = {.lex_state = 66},
  [201] = {.lex_state = 66},
  [202] = {.lex_state = 66},
  [203] = {.lex_state = 66},
  [204] = {.lex_state = 66},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 66},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 66},
  [209] = {.lex_state = 66},
  [210] = {.lex_state = 66},
  [211] = {.lex_state = 66},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 66},
  [214] = {.lex_state = 66},
  [215] = {.lex_state = 66},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 66},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 66},
  [220] = {.lex_state = 66},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 66},
  [223] = {.lex_state = 66},
  [224] = {.lex_state = 66},
  [225] = {.lex_state = 66},
  [226] = {.lex_state = 66},
  [227] = {.lex_state = 66},
  [228] = {.lex_state = 66},
  [229] = {.lex_state = 66},
  [230] = {.lex_state = 66},
  [231] = {.lex_state = 66},
  [232] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
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
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source] = STATE(186),
    [sym__def] = STATE(153),
    [sym_pragma] = STATE(107),
    [sym_type] = STATE(107),
    [sym_decl] = STATE(107),
    [sym_rule] = STATE(107),
    [sym_extractor] = STATE(107),
    [sym__extern] = STATE(107),
    [sym_convert] = STATE(107),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(16), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(22), 2,
      sym_wildcard,
      sym_const_ident,
    STATE(2), 2,
      sym_comment,
      aux_sym_pattern_and_repeat1,
    ACTIONS(19), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [44] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_pattern_and_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [90] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_pattern_and_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [136] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_pattern_and_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [182] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_pattern_and_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [228] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_pattern_and_repeat1,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [274] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_pattern_and_repeat1,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [320] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_pattern_and_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [366] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_pattern_and_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(41), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [412] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_rule_repeat1,
    STATE(189), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [455] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_rule_repeat1,
    STATE(195), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [498] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_rule_repeat1,
    STATE(192), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [541] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym_rule_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(226), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [584] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_rule_repeat1,
    STATE(161), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [627] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_rule_repeat1,
    STATE(158), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [670] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_rule_repeat1,
    STATE(174), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [713] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_rule_repeat1,
    STATE(156), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [756] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_expr_term_repeat1,
    STATE(53), 1,
      sym__expr,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(64), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(55), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [798] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_comment,
    STATE(29), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [838] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(191), 1,
      sym__pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(204), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [878] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_expr_term_repeat1,
    STATE(53), 1,
      sym__expr,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(64), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(55), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [920] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_comment,
    STATE(38), 1,
      sym__pattern,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(36), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(47), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [960] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym__expr,
    ACTIONS(78), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_comment,
      aux_sym_expr_term_repeat1,
    ACTIONS(84), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(55), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1000] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(210), 1,
      sym__pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(204), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1040] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_expr_term_repeat1,
    STATE(53), 1,
      sym__expr,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(64), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(55), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1082] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(155), 1,
      sym__pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(204), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1122] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_expr_term_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(53), 1,
      sym__expr,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(64), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(34), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(55), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1164] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(164), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1200] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_comment,
    STATE(196), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1236] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(184), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1272] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(182), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1308] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_comment,
    STATE(194), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1344] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(224), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1380] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_comment,
    STATE(225), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(220), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1416] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(36), 2,
      sym_comment,
      aux_sym_rule_repeat1,
    STATE(59), 2,
      sym_if_let,
      sym_if,
    ACTIONS(98), 8,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
  [1444] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(105), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(103), 11,
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
  [1470] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(107), 11,
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
  [1493] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(109), 11,
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
  [1516] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(111), 11,
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
  [1539] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(113), 11,
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
  [1562] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym__def,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_repeat1,
    STATE(107), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
  [1591] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(120), 11,
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
  [1614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(122), 11,
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
  [1637] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(124), 11,
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
  [1660] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(126), 11,
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
  [1683] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(103), 11,
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
  [1706] = 8,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      aux_sym_source_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(153), 1,
      sym__def,
    STATE(107), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
  [1737] = 11,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(130), 1,
      anon_sym_pragma,
    ACTIONS(132), 1,
      anon_sym_type,
    ACTIONS(134), 1,
      anon_sym_extern,
    ACTIONS(136), 1,
      anon_sym_decl,
    ACTIONS(138), 1,
      anon_sym_rule,
    ACTIONS(140), 1,
      anon_sym_extractor,
    ACTIONS(142), 1,
      anon_sym_convert,
    STATE(49), 1,
      sym_comment,
    STATE(222), 3,
      sym_extern_const,
      sym_extern_constructor,
      sym_extern_extractor,
  [1773] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(144), 10,
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
  [1795] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(146), 10,
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
  [1817] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(148), 10,
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
  [1839] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
      sym_comment,
    ACTIONS(150), 10,
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
  [1861] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(152), 10,
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
  [1883] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
      sym_comment,
    ACTIONS(154), 10,
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
  [1905] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(156), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1926] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(158), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1947] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(160), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1968] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_comment,
    ACTIONS(162), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1989] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      sym_ident,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_pattern_term,
    STATE(60), 1,
      sym_comment,
    STATE(104), 1,
      sym_int,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2017] = 8,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      aux_sym_int_token1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_pattern_term,
    STATE(61), 1,
      sym_comment,
    STATE(149), 1,
      sym_int,
    ACTIONS(168), 3,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2044] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_ident,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_type_enum_repeat1,
    STATE(81), 1,
      sym_enum_variant,
  [2069] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_ident,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_type_enum_repeat1,
    STATE(81), 1,
      sym_enum_variant,
  [2094] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_extern,
      anon_sym_nodebug,
    STATE(165), 2,
      sym_type_primitive,
      sym_type_enum,
  [2115] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      sym_ident,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_enum_variant,
    STATE(65), 2,
      sym_comment,
      aux_sym_type_enum_repeat1,
  [2138] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(190), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_ty,
    STATE(66), 2,
      sym_comment,
      aux_sym_decl_params_repeat1,
  [2158] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_let_repeat1,
    STATE(154), 1,
      sym_let_binding,
  [2180] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_let_repeat1,
    STATE(154), 1,
      sym_let_binding,
  [2202] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      sym_ident,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_decl_params_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(96), 1,
      sym_ty,
  [2224] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_enum_variant_repeat1,
    STATE(129), 1,
      sym_variant_field,
  [2246] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      sym_ident,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_decl_params_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(96), 1,
      sym_ty,
  [2268] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_let_repeat1,
    STATE(154), 1,
      sym_let_binding,
  [2290] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_let_binding,
    STATE(73), 2,
      sym_comment,
      aux_sym_let_repeat1,
  [2310] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_enum_variant_repeat1,
    STATE(129), 1,
      sym_variant_field,
  [2332] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(220), 1,
      sym_ident,
    ACTIONS(222), 1,
      anon_sym_if_DASHlet,
    ACTIONS(224), 1,
      anon_sym_if,
    ACTIONS(226), 1,
      anon_sym_let,
    STATE(75), 1,
      sym_comment,
  [2354] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_variant_field,
    STATE(76), 2,
      sym_comment,
      aux_sym_enum_variant_repeat1,
  [2374] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      sym_ident,
    ACTIONS(235), 1,
      anon_sym_pure,
    ACTIONS(237), 1,
      anon_sym_multi,
    ACTIONS(239), 1,
      anon_sym_partial,
    STATE(77), 1,
      sym_comment,
  [2396] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_let_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(154), 1,
      sym_let_binding,
  [2418] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      sym_ident,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_extractor_repeat1,
  [2437] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      sym_ident,
    STATE(80), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2454] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(251), 1,
      sym_ident,
    STATE(81), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2471] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      sym_ident,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_extractor_repeat1,
  [2490] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(257), 1,
      sym_ident,
    ACTIONS(259), 1,
      anon_sym_multi,
    ACTIONS(261), 1,
      anon_sym_partial,
    STATE(83), 1,
      sym_comment,
  [2509] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(263), 1,
      sym_ident,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_comment,
      aux_sym_extractor_repeat1,
  [2526] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(268), 1,
      sym_ident,
    STATE(85), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2543] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_comment,
    STATE(198), 2,
      sym_type_primitive,
      sym_type_enum,
  [2560] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(272), 1,
      sym_ident,
    STATE(87), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2577] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(276), 1,
      anon_sym_extractor,
    ACTIONS(278), 1,
      anon_sym_const,
    ACTIONS(280), 1,
      anon_sym_constructor,
    STATE(88), 1,
      sym_comment,
  [2596] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(89), 1,
      sym_comment,
    STATE(202), 1,
      sym_ty,
  [2612] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(284), 1,
      sym_ident,
    ACTIONS(286), 1,
      anon_sym_infallible,
    STATE(90), 1,
      sym_comment,
  [2628] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_comment,
    STATE(143), 1,
      sym_decl_params,
  [2644] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_comment,
  [2660] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_ident,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_comment,
  [2676] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      sym_ident,
    ACTIONS(300), 1,
      anon_sym_partial,
    STATE(94), 1,
      sym_comment,
  [2692] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_comment,
  [2708] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(306), 1,
      sym_ident,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_comment,
  [2724] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_comment,
  [2740] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(98), 1,
      sym_comment,
    STATE(214), 1,
      sym_ty,
  [2756] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_comment,
    STATE(115), 1,
      sym_decl_params,
  [2772] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(100), 1,
      sym_comment,
    STATE(217), 1,
      sym_ty,
  [2788] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(101), 1,
      sym_comment,
    STATE(223), 1,
      sym_ty,
  [2804] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_comment,
  [2820] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_comment,
  [2836] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_pattern_term,
    STATE(104), 1,
      sym_comment,
  [2852] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_comment,
  [2868] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(324), 1,
      sym_ident,
    ACTIONS(326), 1,
      anon_sym_let,
    STATE(106), 1,
      sym_comment,
  [2884] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_comment,
  [2900] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      sym_ident,
    STATE(108), 1,
      sym_comment,
  [2916] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_comment,
  [2932] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_if,
    ACTIONS(338), 1,
      anon_sym_if_DASHlet,
    STATE(110), 1,
      sym_comment,
  [2948] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      sym_ident,
    STATE(111), 1,
      sym_comment,
    STATE(171), 1,
      sym_ty,
  [2964] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_comment,
  [2980] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_decl_params,
    STATE(113), 1,
      sym_comment,
  [2996] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [3012] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(115), 1,
      sym_comment,
    STATE(177), 1,
      sym_ty,
  [3028] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_comment,
  [3044] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_comment,
  [3060] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_comment,
  [3076] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_comment,
  [3092] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_comment,
  [3108] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_comment,
  [3124] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(372), 1,
      anon_sym_primitive,
    ACTIONS(374), 1,
      anon_sym_enum,
    STATE(122), 1,
      sym_comment,
  [3140] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
  [3156] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_decl_params,
    STATE(124), 1,
      sym_comment,
  [3172] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_comment,
  [3188] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(126), 1,
      sym_comment,
    STATE(227), 1,
      sym_ty,
  [3204] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_comment,
  [3220] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_decl_params,
    STATE(128), 1,
      sym_comment,
  [3236] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_comment,
  [3252] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(130), 1,
      sym_comment,
    STATE(157), 1,
      sym_ty,
  [3268] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_comment,
  [3284] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_comment,
  [3300] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_comment,
  [3316] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
  [3332] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(135), 1,
      sym_comment,
    STATE(163), 1,
      sym_ty,
  [3348] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(408), 1,
      sym_ident,
    STATE(30), 1,
      sym_ty,
    STATE(136), 1,
      sym_comment,
  [3364] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_comment,
  [3380] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(138), 1,
      sym_comment,
    STATE(231), 1,
      sym_ty,
  [3396] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_comment,
  [3412] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      sym_ident,
    STATE(111), 1,
      sym_ty,
    STATE(140), 1,
      sym_comment,
  [3428] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_comment,
  [3444] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_comment,
  [3460] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(143), 1,
      sym_comment,
    STATE(183), 1,
      sym_ty,
  [3476] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_decl_params,
    STATE(144), 1,
      sym_comment,
  [3492] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      sym_ident,
    ACTIONS(428), 1,
      anon_sym_partial,
    STATE(145), 1,
      sym_comment,
  [3508] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 1,
      anon_sym_AT,
    STATE(146), 1,
      sym_comment,
  [3524] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_decl_params,
    STATE(147), 1,
      sym_comment,
  [3540] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_decl_params,
    STATE(148), 1,
      sym_comment,
  [3556] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_pattern_term,
    STATE(149), 1,
      sym_comment,
  [3572] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(436), 1,
      anon_sym_and,
    STATE(150), 1,
      sym_comment,
  [3588] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(220), 1,
      sym_ident,
    ACTIONS(226), 1,
      anon_sym_let,
    STATE(151), 1,
      sym_comment,
  [3604] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(438), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_and,
    STATE(152), 1,
      sym_comment,
  [3620] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_comment,
  [3636] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_comment,
  [3652] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_comment,
  [3665] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_comment,
  [3678] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_comment,
  [3691] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_comment,
  [3704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(458), 1,
      sym_ident,
    STATE(159), 1,
      sym_comment,
  [3717] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_comment,
  [3730] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_comment,
  [3743] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_comment,
  [3756] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_comment,
  [3769] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_comment,
  [3782] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_comment,
  [3795] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(472), 1,
      sym_ident,
    STATE(166), 1,
      sym_comment,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(474), 1,
      sym_ident,
    STATE(167), 1,
      sym_comment,
  [3821] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(476), 1,
      sym_ident,
    STATE(168), 1,
      sym_comment,
  [3834] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(478), 1,
      sym_ident,
    STATE(169), 1,
      sym_comment,
  [3847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(480), 1,
      sym_ident,
    STATE(170), 1,
      sym_comment,
  [3860] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(482), 1,
      sym_ident,
    STATE(171), 1,
      sym_comment,
  [3873] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(484), 1,
      sym_ident,
    STATE(172), 1,
      sym_comment,
  [3886] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym_comment,
  [3899] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comment,
  [3912] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym_comment,
  [3925] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_comment,
  [3938] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_comment,
  [3951] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      sym_ident,
    STATE(178), 1,
      sym_comment,
  [3964] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      sym_ident,
    STATE(179), 1,
      sym_comment,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      sym_ident,
    STATE(180), 1,
      sym_comment,
  [3990] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      sym_ident,
    STATE(181), 1,
      sym_comment,
  [4003] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_comment,
  [4016] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_comment,
  [4029] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_comment,
  [4042] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      sym_ident,
    STATE(185), 1,
      sym_comment,
  [4055] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    STATE(186), 1,
      sym_comment,
  [4068] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_comment,
  [4081] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(516), 1,
      sym_ident,
    STATE(188), 1,
      sym_comment,
  [4094] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [4107] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_comment,
  [4120] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_comment,
  [4133] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [4146] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_comment,
  [4159] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_comment,
  [4172] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_comment,
  [4185] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_comment,
  [4198] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [4211] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [4224] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_comment,
  [4237] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_comment,
  [4250] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_comment,
  [4263] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym_comment,
  [4276] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym_comment,
  [4289] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
  [4302] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(546), 1,
      sym_ident,
    STATE(205), 1,
      sym_comment,
  [4315] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_comment,
  [4328] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(550), 1,
      sym_ident,
    STATE(207), 1,
      sym_comment,
  [4341] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_comment,
  [4354] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      sym_const_ident,
    STATE(209), 1,
      sym_comment,
  [4367] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_comment,
  [4380] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym_comment,
  [4393] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(560), 1,
      sym_ident,
    STATE(212), 1,
      sym_comment,
  [4406] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_comment,
  [4419] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_comment,
  [4432] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym_comment,
  [4445] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(568), 1,
      sym_ident,
    STATE(216), 1,
      sym_comment,
  [4458] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym_comment,
  [4471] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(572), 1,
      sym_ident,
    STATE(218), 1,
      sym_comment,
  [4484] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym_comment,
  [4497] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_comment,
  [4510] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(578), 1,
      sym_ident,
    STATE(221), 1,
      sym_comment,
  [4523] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      sym_comment,
  [4536] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_comment,
  [4549] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_comment,
  [4562] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym_comment,
  [4575] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      sym_comment,
  [4588] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_comment,
  [4601] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_comment,
  [4614] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym_comment,
  [4627] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_comment,
  [4640] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym_comment,
  [4653] = 1,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 320,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 412,
  [SMALL_STATE(12)] = 455,
  [SMALL_STATE(13)] = 498,
  [SMALL_STATE(14)] = 541,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 627,
  [SMALL_STATE(17)] = 670,
  [SMALL_STATE(18)] = 713,
  [SMALL_STATE(19)] = 756,
  [SMALL_STATE(20)] = 798,
  [SMALL_STATE(21)] = 838,
  [SMALL_STATE(22)] = 878,
  [SMALL_STATE(23)] = 920,
  [SMALL_STATE(24)] = 960,
  [SMALL_STATE(25)] = 1000,
  [SMALL_STATE(26)] = 1040,
  [SMALL_STATE(27)] = 1082,
  [SMALL_STATE(28)] = 1122,
  [SMALL_STATE(29)] = 1164,
  [SMALL_STATE(30)] = 1200,
  [SMALL_STATE(31)] = 1236,
  [SMALL_STATE(32)] = 1272,
  [SMALL_STATE(33)] = 1308,
  [SMALL_STATE(34)] = 1344,
  [SMALL_STATE(35)] = 1380,
  [SMALL_STATE(36)] = 1416,
  [SMALL_STATE(37)] = 1444,
  [SMALL_STATE(38)] = 1470,
  [SMALL_STATE(39)] = 1493,
  [SMALL_STATE(40)] = 1516,
  [SMALL_STATE(41)] = 1539,
  [SMALL_STATE(42)] = 1562,
  [SMALL_STATE(43)] = 1591,
  [SMALL_STATE(44)] = 1614,
  [SMALL_STATE(45)] = 1637,
  [SMALL_STATE(46)] = 1660,
  [SMALL_STATE(47)] = 1683,
  [SMALL_STATE(48)] = 1706,
  [SMALL_STATE(49)] = 1737,
  [SMALL_STATE(50)] = 1773,
  [SMALL_STATE(51)] = 1795,
  [SMALL_STATE(52)] = 1817,
  [SMALL_STATE(53)] = 1839,
  [SMALL_STATE(54)] = 1861,
  [SMALL_STATE(55)] = 1883,
  [SMALL_STATE(56)] = 1905,
  [SMALL_STATE(57)] = 1926,
  [SMALL_STATE(58)] = 1947,
  [SMALL_STATE(59)] = 1968,
  [SMALL_STATE(60)] = 1989,
  [SMALL_STATE(61)] = 2017,
  [SMALL_STATE(62)] = 2044,
  [SMALL_STATE(63)] = 2069,
  [SMALL_STATE(64)] = 2094,
  [SMALL_STATE(65)] = 2115,
  [SMALL_STATE(66)] = 2138,
  [SMALL_STATE(67)] = 2158,
  [SMALL_STATE(68)] = 2180,
  [SMALL_STATE(69)] = 2202,
  [SMALL_STATE(70)] = 2224,
  [SMALL_STATE(71)] = 2246,
  [SMALL_STATE(72)] = 2268,
  [SMALL_STATE(73)] = 2290,
  [SMALL_STATE(74)] = 2310,
  [SMALL_STATE(75)] = 2332,
  [SMALL_STATE(76)] = 2354,
  [SMALL_STATE(77)] = 2374,
  [SMALL_STATE(78)] = 2396,
  [SMALL_STATE(79)] = 2418,
  [SMALL_STATE(80)] = 2437,
  [SMALL_STATE(81)] = 2454,
  [SMALL_STATE(82)] = 2471,
  [SMALL_STATE(83)] = 2490,
  [SMALL_STATE(84)] = 2509,
  [SMALL_STATE(85)] = 2526,
  [SMALL_STATE(86)] = 2543,
  [SMALL_STATE(87)] = 2560,
  [SMALL_STATE(88)] = 2577,
  [SMALL_STATE(89)] = 2596,
  [SMALL_STATE(90)] = 2612,
  [SMALL_STATE(91)] = 2628,
  [SMALL_STATE(92)] = 2644,
  [SMALL_STATE(93)] = 2660,
  [SMALL_STATE(94)] = 2676,
  [SMALL_STATE(95)] = 2692,
  [SMALL_STATE(96)] = 2708,
  [SMALL_STATE(97)] = 2724,
  [SMALL_STATE(98)] = 2740,
  [SMALL_STATE(99)] = 2756,
  [SMALL_STATE(100)] = 2772,
  [SMALL_STATE(101)] = 2788,
  [SMALL_STATE(102)] = 2804,
  [SMALL_STATE(103)] = 2820,
  [SMALL_STATE(104)] = 2836,
  [SMALL_STATE(105)] = 2852,
  [SMALL_STATE(106)] = 2868,
  [SMALL_STATE(107)] = 2884,
  [SMALL_STATE(108)] = 2900,
  [SMALL_STATE(109)] = 2916,
  [SMALL_STATE(110)] = 2932,
  [SMALL_STATE(111)] = 2948,
  [SMALL_STATE(112)] = 2964,
  [SMALL_STATE(113)] = 2980,
  [SMALL_STATE(114)] = 2996,
  [SMALL_STATE(115)] = 3012,
  [SMALL_STATE(116)] = 3028,
  [SMALL_STATE(117)] = 3044,
  [SMALL_STATE(118)] = 3060,
  [SMALL_STATE(119)] = 3076,
  [SMALL_STATE(120)] = 3092,
  [SMALL_STATE(121)] = 3108,
  [SMALL_STATE(122)] = 3124,
  [SMALL_STATE(123)] = 3140,
  [SMALL_STATE(124)] = 3156,
  [SMALL_STATE(125)] = 3172,
  [SMALL_STATE(126)] = 3188,
  [SMALL_STATE(127)] = 3204,
  [SMALL_STATE(128)] = 3220,
  [SMALL_STATE(129)] = 3236,
  [SMALL_STATE(130)] = 3252,
  [SMALL_STATE(131)] = 3268,
  [SMALL_STATE(132)] = 3284,
  [SMALL_STATE(133)] = 3300,
  [SMALL_STATE(134)] = 3316,
  [SMALL_STATE(135)] = 3332,
  [SMALL_STATE(136)] = 3348,
  [SMALL_STATE(137)] = 3364,
  [SMALL_STATE(138)] = 3380,
  [SMALL_STATE(139)] = 3396,
  [SMALL_STATE(140)] = 3412,
  [SMALL_STATE(141)] = 3428,
  [SMALL_STATE(142)] = 3444,
  [SMALL_STATE(143)] = 3460,
  [SMALL_STATE(144)] = 3476,
  [SMALL_STATE(145)] = 3492,
  [SMALL_STATE(146)] = 3508,
  [SMALL_STATE(147)] = 3524,
  [SMALL_STATE(148)] = 3540,
  [SMALL_STATE(149)] = 3556,
  [SMALL_STATE(150)] = 3572,
  [SMALL_STATE(151)] = 3588,
  [SMALL_STATE(152)] = 3604,
  [SMALL_STATE(153)] = 3620,
  [SMALL_STATE(154)] = 3636,
  [SMALL_STATE(155)] = 3652,
  [SMALL_STATE(156)] = 3665,
  [SMALL_STATE(157)] = 3678,
  [SMALL_STATE(158)] = 3691,
  [SMALL_STATE(159)] = 3704,
  [SMALL_STATE(160)] = 3717,
  [SMALL_STATE(161)] = 3730,
  [SMALL_STATE(162)] = 3743,
  [SMALL_STATE(163)] = 3756,
  [SMALL_STATE(164)] = 3769,
  [SMALL_STATE(165)] = 3782,
  [SMALL_STATE(166)] = 3795,
  [SMALL_STATE(167)] = 3808,
  [SMALL_STATE(168)] = 3821,
  [SMALL_STATE(169)] = 3834,
  [SMALL_STATE(170)] = 3847,
  [SMALL_STATE(171)] = 3860,
  [SMALL_STATE(172)] = 3873,
  [SMALL_STATE(173)] = 3886,
  [SMALL_STATE(174)] = 3899,
  [SMALL_STATE(175)] = 3912,
  [SMALL_STATE(176)] = 3925,
  [SMALL_STATE(177)] = 3938,
  [SMALL_STATE(178)] = 3951,
  [SMALL_STATE(179)] = 3964,
  [SMALL_STATE(180)] = 3977,
  [SMALL_STATE(181)] = 3990,
  [SMALL_STATE(182)] = 4003,
  [SMALL_STATE(183)] = 4016,
  [SMALL_STATE(184)] = 4029,
  [SMALL_STATE(185)] = 4042,
  [SMALL_STATE(186)] = 4055,
  [SMALL_STATE(187)] = 4068,
  [SMALL_STATE(188)] = 4081,
  [SMALL_STATE(189)] = 4094,
  [SMALL_STATE(190)] = 4107,
  [SMALL_STATE(191)] = 4120,
  [SMALL_STATE(192)] = 4133,
  [SMALL_STATE(193)] = 4146,
  [SMALL_STATE(194)] = 4159,
  [SMALL_STATE(195)] = 4172,
  [SMALL_STATE(196)] = 4185,
  [SMALL_STATE(197)] = 4198,
  [SMALL_STATE(198)] = 4211,
  [SMALL_STATE(199)] = 4224,
  [SMALL_STATE(200)] = 4237,
  [SMALL_STATE(201)] = 4250,
  [SMALL_STATE(202)] = 4263,
  [SMALL_STATE(203)] = 4276,
  [SMALL_STATE(204)] = 4289,
  [SMALL_STATE(205)] = 4302,
  [SMALL_STATE(206)] = 4315,
  [SMALL_STATE(207)] = 4328,
  [SMALL_STATE(208)] = 4341,
  [SMALL_STATE(209)] = 4354,
  [SMALL_STATE(210)] = 4367,
  [SMALL_STATE(211)] = 4380,
  [SMALL_STATE(212)] = 4393,
  [SMALL_STATE(213)] = 4406,
  [SMALL_STATE(214)] = 4419,
  [SMALL_STATE(215)] = 4432,
  [SMALL_STATE(216)] = 4445,
  [SMALL_STATE(217)] = 4458,
  [SMALL_STATE(218)] = 4471,
  [SMALL_STATE(219)] = 4484,
  [SMALL_STATE(220)] = 4497,
  [SMALL_STATE(221)] = 4510,
  [SMALL_STATE(222)] = 4523,
  [SMALL_STATE(223)] = 4536,
  [SMALL_STATE(224)] = 4549,
  [SMALL_STATE(225)] = 4562,
  [SMALL_STATE(226)] = 4575,
  [SMALL_STATE(227)] = 4588,
  [SMALL_STATE(228)] = 4601,
  [SMALL_STATE(229)] = 4614,
  [SMALL_STATE(230)] = 4627,
  [SMALL_STATE(231)] = 4640,
  [SMALL_STATE(232)] = 4653,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 26),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 25),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, 0, 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 1, 0, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, 0, 19),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, 0, 19),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, 0, 19),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, 0, 19),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extractor_repeat1, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 7),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 7),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_params_repeat1, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_params_repeat1, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, 0, 9),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 6, 0, 9),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 10),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 11),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 11),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__def, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 12),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 12),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 14),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 14),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 15),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 15),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 16),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 16),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 17),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 17),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 10),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 10),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extern, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 11),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 11),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 7, 0, 18),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 7, 0, 18),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 20),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 20),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 21),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 21),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 22),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 22),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 17),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 17),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 8, 0, 23),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 8, 0, 23),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 24),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 24),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_field, 4, 0, 27),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_field, 4, 0, 27),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 5, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 5, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_const, 4, 0, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 3, 0, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_constructor, 4, 0, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [512] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 5, 0, 8),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 3, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 25),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 26),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 4, 0, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_primitive, 4, 0, 10),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 4, 0, 13),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
