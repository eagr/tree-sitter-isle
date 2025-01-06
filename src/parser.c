#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 215
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

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
  sym_param_types = 57,
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
  aux_sym_param_types_repeat1 = 72,
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
  [sym_param_types] = "param_types",
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
  [aux_sym_param_types_repeat1] = "param_types_repeat1",
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
  [sym_param_types] = sym_param_types,
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
  [aux_sym_param_types_repeat1] = aux_sym_param_types_repeat1,
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
  [sym_param_types] = {
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
  [aux_sym_param_types_repeat1] = {
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
  field_name = 7,
  field_outer = 8,
  field_param_types = 9,
  field_params = 10,
  field_priority = 11,
  field_ret_type = 12,
  field_template = 13,
  field_term = 14,
  field_ty = 15,
  field_variants = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bindings] = "bindings",
  [field_body] = "body",
  [field_fn] = "fn",
  [field_inner] = "inner",
  [field_kind] = "kind",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_outer] = "outer",
  [field_param_types] = "param_types",
  [field_params] = "params",
  [field_priority] = "priority",
  [field_ret_type] = "ret_type",
  [field_template] = "template",
  [field_term] = "term",
  [field_ty] = "ty",
  [field_variants] = "variants",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 4},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 1},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 3},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 2},
  [16] = {.index = 31, .length = 1},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 3},
  [20] = {.index = 41, .length = 3},
  [21] = {.index = 44, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_name, 2},
  [2] =
    {field_fn, 2},
    {field_kind, 0},
    {field_term, 1},
  [5] =
    {field_kind, 0},
    {field_name, 1},
    {field_ty, 2},
  [8] =
    {field_name, 0},
  [9] =
    {field_body, 4},
    {field_name, 2},
  [11] =
    {field_fn, 3},
    {field_kind, 0},
    {field_modifier, 1},
    {field_term, 2},
  [15] =
    {field_param_types, 3},
    {field_ret_type, 4},
    {field_term, 2},
  [18] =
    {field_name, 2},
  [19] =
    {field_priority, 2},
  [20] =
    {field_inner, 2},
    {field_outer, 3},
    {field_term, 4},
  [23] =
    {field_variants, 2},
  [24] =
    {field_param_types, 4},
    {field_ret_type, 5},
    {field_term, 3},
  [27] =
    {field_name, 2},
    {field_priority, 3},
  [29] =
    {field_template, 5},
    {field_term, 3},
  [31] =
    {field_name, 1},
  [32] =
    {field_param_types, 5},
    {field_ret_type, 6},
    {field_term, 4},
  [35] =
    {field_params, 4},
    {field_template, 6},
    {field_term, 3},
  [38] =
    {field_param_types, 6},
    {field_ret_type, 7},
    {field_term, 5},
  [41] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_body, 4},
  [44] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_bindings, 4},
    {field_body, 5},
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
  [5] = 2,
  [6] = 6,
  [7] = 3,
  [8] = 8,
  [9] = 4,
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
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 32,
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
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 71,
  [77] = 77,
  [78] = 78,
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
  [130] = 130,
  [131] = 131,
  [132] = 37,
  [133] = 133,
  [134] = 40,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 138,
  [139] = 104,
  [140] = 140,
  [141] = 57,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 52,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 51,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
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
  [175] = 53,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 57,
  [183] = 183,
  [184] = 184,
  [185] = 48,
  [186] = 41,
  [187] = 38,
  [188] = 188,
  [189] = 42,
  [190] = 190,
  [191] = 47,
  [192] = 45,
  [193] = 193,
  [194] = 39,
  [195] = 195,
  [196] = 196,
  [197] = 50,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 166,
  [207] = 176,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 211,
  [213] = 54,
  [214] = 214,
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
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 66},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
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
  [60] = {.lex_state = 66},
  [61] = {.lex_state = 66},
  [62] = {.lex_state = 66},
  [63] = {.lex_state = 66},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 66},
  [72] = {.lex_state = 66},
  [73] = {.lex_state = 66},
  [74] = {.lex_state = 66},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 66},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 66},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 66},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 66},
  [90] = {.lex_state = 66},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 66},
  [93] = {.lex_state = 66},
  [94] = {.lex_state = 66},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 66},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 66},
  [99] = {.lex_state = 66},
  [100] = {.lex_state = 66},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 66},
  [103] = {.lex_state = 66},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 66},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 66},
  [109] = {.lex_state = 66},
  [110] = {.lex_state = 66},
  [111] = {.lex_state = 66},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 66},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 66},
  [117] = {.lex_state = 66},
  [118] = {.lex_state = 66},
  [119] = {.lex_state = 66},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 66},
  [122] = {.lex_state = 66},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 66},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 66},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 66},
  [129] = {.lex_state = 66},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 66},
  [132] = {.lex_state = 66},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 66},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 66},
  [138] = {.lex_state = 66},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 66},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 66},
  [143] = {.lex_state = 66},
  [144] = {.lex_state = 66},
  [145] = {.lex_state = 66},
  [146] = {.lex_state = 66},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 66},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 66},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 66},
  [155] = {.lex_state = 66},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 66},
  [158] = {.lex_state = 66},
  [159] = {.lex_state = 66},
  [160] = {.lex_state = 66},
  [161] = {.lex_state = 66},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 66},
  [165] = {.lex_state = 66},
  [166] = {.lex_state = 66},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 66},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 66},
  [171] = {.lex_state = 66},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 66},
  [175] = {.lex_state = 66},
  [176] = {.lex_state = 66},
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
  [187] = {.lex_state = 66},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 66},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 66},
  [192] = {.lex_state = 66},
  [193] = {.lex_state = 66},
  [194] = {.lex_state = 66},
  [195] = {.lex_state = 66},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 66},
  [198] = {.lex_state = 66},
  [199] = {.lex_state = 66},
  [200] = {.lex_state = 66},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 66},
  [203] = {.lex_state = 66},
  [204] = {.lex_state = 66},
  [205] = {.lex_state = 66},
  [206] = {.lex_state = 66},
  [207] = {.lex_state = 66},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 66},
  [212] = {.lex_state = 66},
  [213] = {.lex_state = 66},
  [214] = {(TSStateId)(-1)},
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
    [sym_source] = STATE(143),
    [sym__def] = STATE(140),
    [sym_pragma] = STATE(93),
    [sym_type] = STATE(93),
    [sym_decl] = STATE(93),
    [sym_rule] = STATE(93),
    [sym_extractor] = STATE(93),
    [sym__extern] = STATE(93),
    [sym_convert] = STATE(93),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_pattern_and_repeat1,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [46] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_pattern_and_repeat1,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [92] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_pattern_and_repeat1,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [138] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_pattern_and_repeat1,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [184] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_pattern_and_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [230] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_pattern_and_repeat1,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [276] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(44), 2,
      sym_wildcard,
      sym_const_ident,
    STATE(8), 2,
      sym_comment,
      aux_sym_pattern_and_repeat1,
    ACTIONS(41), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
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
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_pattern_and_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
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
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_pattern_and_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(44), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
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
    STATE(16), 1,
      aux_sym_rule_repeat1,
    STATE(193), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
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
    STATE(14), 1,
      aux_sym_rule_repeat1,
    STATE(144), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
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
    STATE(18), 1,
      aux_sym_rule_repeat1,
    STATE(204), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
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
    STATE(14), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_rule_repeat1,
    STATE(179), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
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
    STATE(17), 1,
      aux_sym_rule_repeat1,
    STATE(170), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
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
    STATE(36), 1,
      aux_sym_rule_repeat1,
    STATE(198), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
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
    STATE(203), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
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
    STATE(152), 1,
      sym__expr,
    ACTIONS(56), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_if_let,
      sym_if,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(197), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [756] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(191), 1,
      sym__pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(66), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(185), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [796] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_expr_term_repeat1,
    STATE(49), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(50), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [838] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(30), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [878] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_comment,
    STATE(47), 1,
      sym__pattern,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(48), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [918] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_comment,
    STATE(155), 1,
      sym__pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(66), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(185), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [958] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_comment,
    STATE(174), 1,
      sym__pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(66), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(185), 5,
      sym_bool,
      sym_int,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [998] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_expr_term_repeat1,
    STATE(49), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(50), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1040] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym__expr,
    ACTIONS(78), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_comment,
      aux_sym_expr_term_repeat1,
    ACTIONS(84), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(50), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1080] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_expr_term_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(49), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(50), 4,
      sym_bool,
      sym_int,
      sym_let,
      sym_expr_term,
  [1122] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_expr_term_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(49), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(50), 4,
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
    STATE(165), 1,
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
    STATE(197), 4,
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
    STATE(148), 1,
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
    STATE(197), 4,
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
    STATE(178), 1,
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
    STATE(197), 4,
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
    STATE(166), 1,
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
    STATE(197), 4,
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
    STATE(207), 1,
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
    STATE(197), 4,
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
    STATE(176), 1,
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
    STATE(197), 4,
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
    STATE(206), 1,
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
    STATE(197), 4,
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
    STATE(58), 2,
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
  [1562] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(115), 11,
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
  [1585] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym__def,
    STATE(43), 2,
      sym_comment,
      aux_sym_source_repeat1,
    STATE(93), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
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
  [1660] = 8,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_source_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(140), 1,
      sym__def,
    STATE(93), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
  [1691] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(128), 11,
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
  [1714] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
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
  [1737] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(130), 10,
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
  [1759] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(132), 10,
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
  [1781] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(134), 10,
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
  [1803] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(136), 10,
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
  [1825] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
      sym_comment,
    ACTIONS(138), 10,
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
  [1847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(140), 10,
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
  [1869] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
      sym_comment,
    ACTIONS(142), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1890] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(144), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1911] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(146), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(148), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [1953] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(150), 1,
      sym_ident,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_pattern_term,
    STATE(59), 1,
      sym_comment,
    STATE(138), 1,
      sym_int,
    ACTIONS(60), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1981] = 10,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(154), 1,
      anon_sym_pragma,
    ACTIONS(156), 1,
      anon_sym_type,
    ACTIONS(158), 1,
      anon_sym_extern,
    ACTIONS(160), 1,
      anon_sym_decl,
    ACTIONS(162), 1,
      anon_sym_rule,
    ACTIONS(164), 1,
      anon_sym_extractor,
    ACTIONS(166), 1,
      anon_sym_convert,
    STATE(60), 1,
      sym_comment,
  [2012] = 8,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      aux_sym_int_token1,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_pattern_term,
    STATE(61), 1,
      sym_comment,
    STATE(106), 1,
      sym_int,
    ACTIONS(168), 3,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2039] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      anon_sym_extractor,
    ACTIONS(172), 1,
      anon_sym_const,
    ACTIONS(174), 1,
      anon_sym_constructor,
    STATE(62), 1,
      sym_comment,
    STATE(157), 3,
      sym_extern_const,
      sym_extern_constructor,
      sym_extern_extractor,
  [2063] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_extern,
      anon_sym_nodebug,
    STATE(154), 2,
      sym_type_primitive,
      sym_type_enum,
  [2084] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_enum_variant,
    STATE(64), 2,
      sym_comment,
      aux_sym_type_enum_repeat1,
  [2107] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_type_enum_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(84), 1,
      sym_enum_variant,
  [2132] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_variant_field,
    STATE(66), 2,
      sym_comment,
      aux_sym_enum_variant_repeat1,
  [2152] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_let_binding,
    STATE(67), 2,
      sym_comment,
      aux_sym_let_repeat1,
  [2172] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_ident,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_param_types_repeat1,
    STATE(127), 1,
      sym_ty,
  [2194] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(208), 1,
      sym_ident,
    ACTIONS(210), 1,
      anon_sym_pure,
    ACTIONS(212), 1,
      anon_sym_multi,
    ACTIONS(214), 1,
      anon_sym_partial,
    STATE(69), 1,
      sym_comment,
  [2216] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(216), 1,
      sym_ident,
    ACTIONS(218), 1,
      anon_sym_if_DASHlet,
    ACTIONS(220), 1,
      anon_sym_if,
    ACTIONS(222), 1,
      anon_sym_let,
    STATE(70), 1,
      sym_comment,
  [2238] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_let_repeat1,
    STATE(117), 1,
      sym_let_binding,
  [2260] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_enum_variant_repeat1,
    STATE(119), 1,
      sym_variant_field,
  [2282] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_let_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(117), 1,
      sym_let_binding,
  [2304] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_let_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(117), 1,
      sym_let_binding,
  [2326] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_ty,
    STATE(75), 2,
      sym_comment,
      aux_sym_param_types_repeat1,
  [2346] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_let_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(117), 1,
      sym_let_binding,
  [2368] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      aux_sym_type_enum_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(84), 1,
      sym_enum_variant,
  [2390] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_enum_variant_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(119), 1,
      sym_variant_field,
  [2412] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_ident,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_param_types_repeat1,
    STATE(79), 1,
      sym_comment,
    STATE(127), 1,
      sym_ty,
  [2434] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_comment,
    STATE(159), 2,
      sym_type_primitive,
      sym_type_enum,
  [2451] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      sym_ident,
    STATE(81), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2468] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(251), 1,
      sym_ident,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_extractor_repeat1,
  [2487] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_comment,
      aux_sym_extractor_repeat1,
  [2504] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(260), 1,
      sym_ident,
    STATE(84), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2521] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      sym_ident,
    STATE(85), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2538] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(268), 1,
      sym_ident,
    ACTIONS(270), 1,
      anon_sym_multi,
    ACTIONS(272), 1,
      anon_sym_partial,
    STATE(86), 1,
      sym_comment,
  [2557] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(251), 1,
      sym_ident,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_extractor_repeat1,
    STATE(87), 1,
      sym_comment,
  [2576] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(276), 1,
      sym_ident,
    STATE(88), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2593] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_comment,
  [2609] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_comment,
  [2625] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      sym_ident,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_comment,
  [2641] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(292), 1,
      anon_sym_primitive,
    ACTIONS(294), 1,
      anon_sym_enum,
    STATE(92), 1,
      sym_comment,
  [2657] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_comment,
  [2673] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_comment,
  [2689] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      sym_ident,
    STATE(95), 1,
      sym_comment,
    STATE(168), 1,
      sym_ty,
  [2705] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_comment,
  [2721] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      sym_ident,
    STATE(97), 1,
      sym_comment,
    STATE(199), 1,
      sym_ty,
  [2737] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_comment,
    STATE(112), 1,
      sym_param_types,
  [2753] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_comment,
  [2769] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_comment,
  [2785] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      sym_ident,
    STATE(101), 1,
      sym_comment,
    STATE(181), 1,
      sym_ty,
  [2801] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_comment,
    STATE(130), 1,
      sym_param_types,
  [2817] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_comment,
  [2833] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(324), 1,
      sym_ident,
    ACTIONS(326), 1,
      anon_sym_let,
    STATE(104), 1,
      sym_comment,
  [2849] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(328), 1,
      sym_ident,
    ACTIONS(330), 1,
      anon_sym_partial,
    STATE(105), 1,
      sym_comment,
  [2865] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_pattern_term,
    STATE(106), 1,
      sym_comment,
  [2881] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_ident,
    STATE(107), 1,
      sym_comment,
    STATE(113), 1,
      sym_ty,
  [2897] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_comment,
  [2913] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(220), 1,
      anon_sym_if,
    ACTIONS(336), 1,
      anon_sym_if_DASHlet,
    STATE(109), 1,
      sym_comment,
  [2929] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
  [2945] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_comment,
  [2961] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      sym_ident,
    STATE(112), 1,
      sym_comment,
    STATE(161), 1,
      sym_ty,
  [2977] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_ident,
    STATE(113), 1,
      sym_comment,
    STATE(151), 1,
      sym_ty,
  [2993] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [3009] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(350), 1,
      sym_ident,
    ACTIONS(352), 1,
      anon_sym_infallible,
    STATE(115), 1,
      sym_comment,
  [3025] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_comment,
  [3041] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
  [3057] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_comment,
  [3073] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [3089] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_comment,
  [3105] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_comment,
  [3121] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_comment,
  [3137] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      sym_ident,
    STATE(31), 1,
      sym_ty,
    STATE(123), 1,
      sym_comment,
  [3153] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_comment,
  [3169] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      sym_ident,
    STATE(125), 1,
      sym_comment,
    STATE(177), 1,
      sym_ty,
  [3185] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_comment,
  [3201] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      sym_ident,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_comment,
  [3217] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_comment,
  [3233] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_param_types,
    STATE(129), 1,
      sym_comment,
  [3249] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      sym_ident,
    STATE(130), 1,
      sym_comment,
    STATE(160), 1,
      sym_ty,
  [3265] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_param_types,
    STATE(131), 1,
      sym_comment,
  [3281] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(132), 1,
      sym_comment,
  [3297] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(268), 1,
      sym_ident,
    ACTIONS(272), 1,
      anon_sym_partial,
    STATE(133), 1,
      sym_comment,
  [3313] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_comment,
  [3329] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(406), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_and,
    STATE(135), 1,
      sym_comment,
  [3345] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      sym_ident,
    ACTIONS(412), 1,
      anon_sym_and,
    STATE(136), 1,
      sym_comment,
  [3361] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_comment,
  [3377] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_pattern_term,
    STATE(138), 1,
      sym_comment,
  [3393] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(216), 1,
      sym_ident,
    ACTIONS(222), 1,
      anon_sym_let,
    STATE(139), 1,
      sym_comment,
  [3409] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_comment,
  [3425] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(422), 1,
      sym_ident,
    STATE(141), 1,
      sym_comment,
  [3441] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_comment,
  [3457] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_comment,
  [3470] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_comment,
  [3483] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_comment,
  [3496] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_comment,
  [3509] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(436), 1,
      sym_const_ident,
    STATE(147), 1,
      sym_comment,
  [3522] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_comment,
  [3535] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(440), 1,
      sym_ident,
    STATE(149), 1,
      sym_comment,
  [3548] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(442), 1,
      sym_ident,
    STATE(150), 1,
      sym_comment,
  [3561] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(444), 1,
      sym_ident,
    STATE(151), 1,
      sym_comment,
  [3574] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_comment,
  [3587] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(448), 1,
      sym_ident,
    STATE(153), 1,
      sym_comment,
  [3600] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_comment,
  [3613] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_comment,
  [3626] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(454), 1,
      sym_ident,
    STATE(156), 1,
      sym_comment,
  [3639] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_comment,
  [3652] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_comment,
  [3665] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_comment,
  [3678] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_comment,
  [3691] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_comment,
  [3704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(466), 1,
      sym_ident,
    STATE(162), 1,
      sym_comment,
  [3717] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(468), 1,
      sym_ident,
    STATE(163), 1,
      sym_comment,
  [3730] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_comment,
  [3743] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_comment,
  [3756] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_comment,
  [3769] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(476), 1,
      sym_ident,
    STATE(167), 1,
      sym_comment,
  [3782] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_comment,
  [3795] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(480), 1,
      sym_ident,
    STATE(169), 1,
      sym_comment,
  [3808] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      sym_comment,
  [3821] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_comment,
  [3834] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(486), 1,
      sym_ident,
    STATE(172), 1,
      sym_comment,
  [3847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      sym_ident,
    STATE(173), 1,
      sym_comment,
  [3860] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comment,
  [3873] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym_comment,
  [3886] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_comment,
  [3899] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_comment,
  [3912] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_comment,
  [3925] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym_comment,
  [3938] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym_comment,
  [3951] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_comment,
  [3964] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_comment,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(506), 1,
      sym_ident,
    STATE(183), 1,
      sym_comment,
  [3990] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_comment,
  [4003] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_comment,
  [4016] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_comment,
  [4029] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_comment,
  [4042] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(514), 1,
      sym_ident,
    STATE(188), 1,
      sym_comment,
  [4055] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [4068] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      sym_ident,
    STATE(190), 1,
      sym_comment,
  [4081] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_comment,
  [4094] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [4107] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_comment,
  [4120] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_comment,
  [4133] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_comment,
  [4146] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      sym_ident,
    STATE(196), 1,
      sym_comment,
  [4159] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [4172] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [4185] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_comment,
  [4198] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_comment,
  [4211] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(540), 1,
      sym_ident,
    STATE(201), 1,
      sym_comment,
  [4224] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym_comment,
  [4237] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym_comment,
  [4250] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
  [4263] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym_comment,
  [4276] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_comment,
  [4289] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_comment,
  [4302] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      sym_ident,
    STATE(208), 1,
      sym_comment,
  [4315] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      sym_ident,
    STATE(209), 1,
      sym_comment,
  [4328] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      sym_ident,
    STATE(210), 1,
      sym_comment,
  [4341] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      sym_comment,
  [4354] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_comment,
  [4367] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_comment,
  [4380] = 1,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 276,
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
  [SMALL_STATE(20)] = 796,
  [SMALL_STATE(21)] = 838,
  [SMALL_STATE(22)] = 878,
  [SMALL_STATE(23)] = 918,
  [SMALL_STATE(24)] = 958,
  [SMALL_STATE(25)] = 998,
  [SMALL_STATE(26)] = 1040,
  [SMALL_STATE(27)] = 1080,
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
  [SMALL_STATE(43)] = 1585,
  [SMALL_STATE(44)] = 1614,
  [SMALL_STATE(45)] = 1637,
  [SMALL_STATE(46)] = 1660,
  [SMALL_STATE(47)] = 1691,
  [SMALL_STATE(48)] = 1714,
  [SMALL_STATE(49)] = 1737,
  [SMALL_STATE(50)] = 1759,
  [SMALL_STATE(51)] = 1781,
  [SMALL_STATE(52)] = 1803,
  [SMALL_STATE(53)] = 1825,
  [SMALL_STATE(54)] = 1847,
  [SMALL_STATE(55)] = 1869,
  [SMALL_STATE(56)] = 1890,
  [SMALL_STATE(57)] = 1911,
  [SMALL_STATE(58)] = 1932,
  [SMALL_STATE(59)] = 1953,
  [SMALL_STATE(60)] = 1981,
  [SMALL_STATE(61)] = 2012,
  [SMALL_STATE(62)] = 2039,
  [SMALL_STATE(63)] = 2063,
  [SMALL_STATE(64)] = 2084,
  [SMALL_STATE(65)] = 2107,
  [SMALL_STATE(66)] = 2132,
  [SMALL_STATE(67)] = 2152,
  [SMALL_STATE(68)] = 2172,
  [SMALL_STATE(69)] = 2194,
  [SMALL_STATE(70)] = 2216,
  [SMALL_STATE(71)] = 2238,
  [SMALL_STATE(72)] = 2260,
  [SMALL_STATE(73)] = 2282,
  [SMALL_STATE(74)] = 2304,
  [SMALL_STATE(75)] = 2326,
  [SMALL_STATE(76)] = 2346,
  [SMALL_STATE(77)] = 2368,
  [SMALL_STATE(78)] = 2390,
  [SMALL_STATE(79)] = 2412,
  [SMALL_STATE(80)] = 2434,
  [SMALL_STATE(81)] = 2451,
  [SMALL_STATE(82)] = 2468,
  [SMALL_STATE(83)] = 2487,
  [SMALL_STATE(84)] = 2504,
  [SMALL_STATE(85)] = 2521,
  [SMALL_STATE(86)] = 2538,
  [SMALL_STATE(87)] = 2557,
  [SMALL_STATE(88)] = 2576,
  [SMALL_STATE(89)] = 2593,
  [SMALL_STATE(90)] = 2609,
  [SMALL_STATE(91)] = 2625,
  [SMALL_STATE(92)] = 2641,
  [SMALL_STATE(93)] = 2657,
  [SMALL_STATE(94)] = 2673,
  [SMALL_STATE(95)] = 2689,
  [SMALL_STATE(96)] = 2705,
  [SMALL_STATE(97)] = 2721,
  [SMALL_STATE(98)] = 2737,
  [SMALL_STATE(99)] = 2753,
  [SMALL_STATE(100)] = 2769,
  [SMALL_STATE(101)] = 2785,
  [SMALL_STATE(102)] = 2801,
  [SMALL_STATE(103)] = 2817,
  [SMALL_STATE(104)] = 2833,
  [SMALL_STATE(105)] = 2849,
  [SMALL_STATE(106)] = 2865,
  [SMALL_STATE(107)] = 2881,
  [SMALL_STATE(108)] = 2897,
  [SMALL_STATE(109)] = 2913,
  [SMALL_STATE(110)] = 2929,
  [SMALL_STATE(111)] = 2945,
  [SMALL_STATE(112)] = 2961,
  [SMALL_STATE(113)] = 2977,
  [SMALL_STATE(114)] = 2993,
  [SMALL_STATE(115)] = 3009,
  [SMALL_STATE(116)] = 3025,
  [SMALL_STATE(117)] = 3041,
  [SMALL_STATE(118)] = 3057,
  [SMALL_STATE(119)] = 3073,
  [SMALL_STATE(120)] = 3089,
  [SMALL_STATE(121)] = 3105,
  [SMALL_STATE(122)] = 3121,
  [SMALL_STATE(123)] = 3137,
  [SMALL_STATE(124)] = 3153,
  [SMALL_STATE(125)] = 3169,
  [SMALL_STATE(126)] = 3185,
  [SMALL_STATE(127)] = 3201,
  [SMALL_STATE(128)] = 3217,
  [SMALL_STATE(129)] = 3233,
  [SMALL_STATE(130)] = 3249,
  [SMALL_STATE(131)] = 3265,
  [SMALL_STATE(132)] = 3281,
  [SMALL_STATE(133)] = 3297,
  [SMALL_STATE(134)] = 3313,
  [SMALL_STATE(135)] = 3329,
  [SMALL_STATE(136)] = 3345,
  [SMALL_STATE(137)] = 3361,
  [SMALL_STATE(138)] = 3377,
  [SMALL_STATE(139)] = 3393,
  [SMALL_STATE(140)] = 3409,
  [SMALL_STATE(141)] = 3425,
  [SMALL_STATE(142)] = 3441,
  [SMALL_STATE(143)] = 3457,
  [SMALL_STATE(144)] = 3470,
  [SMALL_STATE(145)] = 3483,
  [SMALL_STATE(146)] = 3496,
  [SMALL_STATE(147)] = 3509,
  [SMALL_STATE(148)] = 3522,
  [SMALL_STATE(149)] = 3535,
  [SMALL_STATE(150)] = 3548,
  [SMALL_STATE(151)] = 3561,
  [SMALL_STATE(152)] = 3574,
  [SMALL_STATE(153)] = 3587,
  [SMALL_STATE(154)] = 3600,
  [SMALL_STATE(155)] = 3613,
  [SMALL_STATE(156)] = 3626,
  [SMALL_STATE(157)] = 3639,
  [SMALL_STATE(158)] = 3652,
  [SMALL_STATE(159)] = 3665,
  [SMALL_STATE(160)] = 3678,
  [SMALL_STATE(161)] = 3691,
  [SMALL_STATE(162)] = 3704,
  [SMALL_STATE(163)] = 3717,
  [SMALL_STATE(164)] = 3730,
  [SMALL_STATE(165)] = 3743,
  [SMALL_STATE(166)] = 3756,
  [SMALL_STATE(167)] = 3769,
  [SMALL_STATE(168)] = 3782,
  [SMALL_STATE(169)] = 3795,
  [SMALL_STATE(170)] = 3808,
  [SMALL_STATE(171)] = 3821,
  [SMALL_STATE(172)] = 3834,
  [SMALL_STATE(173)] = 3847,
  [SMALL_STATE(174)] = 3860,
  [SMALL_STATE(175)] = 3873,
  [SMALL_STATE(176)] = 3886,
  [SMALL_STATE(177)] = 3899,
  [SMALL_STATE(178)] = 3912,
  [SMALL_STATE(179)] = 3925,
  [SMALL_STATE(180)] = 3938,
  [SMALL_STATE(181)] = 3951,
  [SMALL_STATE(182)] = 3964,
  [SMALL_STATE(183)] = 3977,
  [SMALL_STATE(184)] = 3990,
  [SMALL_STATE(185)] = 4003,
  [SMALL_STATE(186)] = 4016,
  [SMALL_STATE(187)] = 4029,
  [SMALL_STATE(188)] = 4042,
  [SMALL_STATE(189)] = 4055,
  [SMALL_STATE(190)] = 4068,
  [SMALL_STATE(191)] = 4081,
  [SMALL_STATE(192)] = 4094,
  [SMALL_STATE(193)] = 4107,
  [SMALL_STATE(194)] = 4120,
  [SMALL_STATE(195)] = 4133,
  [SMALL_STATE(196)] = 4146,
  [SMALL_STATE(197)] = 4159,
  [SMALL_STATE(198)] = 4172,
  [SMALL_STATE(199)] = 4185,
  [SMALL_STATE(200)] = 4198,
  [SMALL_STATE(201)] = 4211,
  [SMALL_STATE(202)] = 4224,
  [SMALL_STATE(203)] = 4237,
  [SMALL_STATE(204)] = 4250,
  [SMALL_STATE(205)] = 4263,
  [SMALL_STATE(206)] = 4276,
  [SMALL_STATE(207)] = 4289,
  [SMALL_STATE(208)] = 4302,
  [SMALL_STATE(209)] = 4315,
  [SMALL_STATE(210)] = 4328,
  [SMALL_STATE(211)] = 4341,
  [SMALL_STATE(212)] = 4354,
  [SMALL_STATE(213)] = 4367,
  [SMALL_STATE(214)] = 4380,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 20),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 21),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_types_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_types_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, 0, 16),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, 0, 16),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, 0, 16),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, 0, 16),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, 0, 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 1, 0, 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 5, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extractor_repeat1, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__def, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, 0, 8),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 6, 0, 8),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 9),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 9),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extern, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 10),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 10),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 11),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 11),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 13),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 13),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 9),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 9),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 10),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 10),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 7, 0, 15),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 7, 0, 15),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 17),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 17),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 14),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 14),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 8, 0, 18),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 8, 0, 18),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 19),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 19),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_types_repeat1, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_types_repeat1, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_field, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_field, 4, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 14),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 14),
  [428] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 4, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 3, 0, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_const, 3, 0, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_constructor, 3, 0, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_types, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 20),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_primitive, 4, 0, 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 3, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 4, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 4, 0, 12),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 4, 0, 7),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_types, 3, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 21),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
