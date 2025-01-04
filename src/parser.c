#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 212
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 27

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_const_ident = 2,
  aux_sym_int_token1 = 3,
  aux_sym_int_token2 = 4,
  aux_sym_int_token3 = 5,
  aux_sym_int_token4 = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_wildcard = 9,
  anon_sym_LPAREN = 10,
  anon_sym_if_DASHlet = 11,
  anon_sym_RPAREN = 12,
  anon_sym_if = 13,
  anon_sym_let = 14,
  anon_sym_AT = 15,
  anon_sym_and = 16,
  anon_sym_pragma = 17,
  anon_sym_type = 18,
  anon_sym_nodebug = 19,
  anon_sym_extern = 20,
  anon_sym_primitive = 21,
  anon_sym_enum = 22,
  anon_sym_decl = 23,
  anon_sym_pure = 24,
  anon_sym_multi = 25,
  anon_sym_partial = 26,
  anon_sym_rule = 27,
  anon_sym_constructor = 28,
  anon_sym_extractor = 29,
  anon_sym_infallible = 30,
  anon_sym_const = 31,
  anon_sym_convert = 32,
  sym_line_comment = 33,
  sym_block_comment = 34,
  sym_source_file = 35,
  sym__def = 36,
  sym_ty = 37,
  sym_int = 38,
  sym_bool = 39,
  sym_if_let = 40,
  sym_if = 41,
  sym_let = 42,
  sym_let_binding = 43,
  sym__pattern = 44,
  sym__expr = 45,
  sym_pragma = 46,
  sym_type = 47,
  sym_primitive = 48,
  sym_enum = 49,
  sym_enum_variant = 50,
  sym_enum_variant_field = 51,
  sym_decl = 52,
  sym_rule = 53,
  sym__rule_priority = 54,
  sym_extractor = 55,
  sym_extern = 56,
  sym__extern_constructor_decl = 57,
  sym__extern_extractor_decl = 58,
  sym__extern_const_decl = 59,
  sym_convert = 60,
  sym_comment = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_let_repeat1 = 63,
  aux_sym__pattern_repeat1 = 64,
  aux_sym__expr_repeat1 = 65,
  aux_sym_enum_repeat1 = 66,
  aux_sym_enum_variant_repeat1 = 67,
  aux_sym_decl_repeat1 = 68,
  aux_sym_decl_repeat2 = 69,
  aux_sym_rule_repeat1 = 70,
  aux_sym_extractor_repeat1 = 71,
  anon_alias_sym__rule_priority = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [sym_const_ident] = "const_ident",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [aux_sym_int_token3] = "int_token3",
  [aux_sym_int_token4] = "int_token4",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_wildcard] = "wildcard",
  [anon_sym_LPAREN] = "(",
  [anon_sym_if_DASHlet] = "if-let",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_AT] = "@",
  [anon_sym_and] = "and",
  [anon_sym_pragma] = "pragma",
  [anon_sym_type] = "type",
  [anon_sym_nodebug] = "nodebug",
  [anon_sym_extern] = "extern",
  [anon_sym_primitive] = "primitive",
  [anon_sym_enum] = "enum",
  [anon_sym_decl] = "decl",
  [anon_sym_pure] = "pure",
  [anon_sym_multi] = "multi",
  [anon_sym_partial] = "partial",
  [anon_sym_rule] = "rule",
  [anon_sym_constructor] = "constructor",
  [anon_sym_extractor] = "extractor",
  [anon_sym_infallible] = "infallible",
  [anon_sym_const] = "const",
  [anon_sym_convert] = "convert",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__def] = "_def",
  [sym_ty] = "ty",
  [sym_int] = "int",
  [sym_bool] = "bool",
  [sym_if_let] = "if_let",
  [sym_if] = "if",
  [sym_let] = "let",
  [sym_let_binding] = "let_binding",
  [sym__pattern] = "_pattern",
  [sym__expr] = "_expr",
  [sym_pragma] = "pragma",
  [sym_type] = "type",
  [sym_primitive] = "primitive",
  [sym_enum] = "enum",
  [sym_enum_variant] = "enum_variant",
  [sym_enum_variant_field] = "enum_variant_field",
  [sym_decl] = "decl",
  [sym_rule] = "rule",
  [sym__rule_priority] = "_rule_priority",
  [sym_extractor] = "extractor",
  [sym_extern] = "extern",
  [sym__extern_constructor_decl] = "_extern_constructor_decl",
  [sym__extern_extractor_decl] = "_extern_extractor_decl",
  [sym__extern_const_decl] = "_extern_const_decl",
  [sym_convert] = "convert",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_let_repeat1] = "let_repeat1",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
  [aux_sym__expr_repeat1] = "_expr_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_enum_variant_repeat1] = "enum_variant_repeat1",
  [aux_sym_decl_repeat1] = "decl_repeat1",
  [aux_sym_decl_repeat2] = "decl_repeat2",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_extractor_repeat1] = "extractor_repeat1",
  [anon_alias_sym__rule_priority] = "_rule_priority",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [sym_const_ident] = sym_const_ident,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [aux_sym_int_token3] = aux_sym_int_token3,
  [aux_sym_int_token4] = aux_sym_int_token4,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_wildcard] = sym_wildcard,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_if_DASHlet] = anon_sym_if_DASHlet,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_pragma] = anon_sym_pragma,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_nodebug] = anon_sym_nodebug,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_primitive] = anon_sym_primitive,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_decl] = anon_sym_decl,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_extractor] = anon_sym_extractor,
  [anon_sym_infallible] = anon_sym_infallible,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_convert] = anon_sym_convert,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__def] = sym__def,
  [sym_ty] = sym_ty,
  [sym_int] = sym_int,
  [sym_bool] = sym_bool,
  [sym_if_let] = sym_if_let,
  [sym_if] = sym_if,
  [sym_let] = sym_let,
  [sym_let_binding] = sym_let_binding,
  [sym__pattern] = sym__pattern,
  [sym__expr] = sym__expr,
  [sym_pragma] = sym_pragma,
  [sym_type] = sym_type,
  [sym_primitive] = sym_primitive,
  [sym_enum] = sym_enum,
  [sym_enum_variant] = sym_enum_variant,
  [sym_enum_variant_field] = sym_enum_variant_field,
  [sym_decl] = sym_decl,
  [sym_rule] = sym_rule,
  [sym__rule_priority] = sym__rule_priority,
  [sym_extractor] = sym_extractor,
  [sym_extern] = sym_extern,
  [sym__extern_constructor_decl] = sym__extern_constructor_decl,
  [sym__extern_extractor_decl] = sym__extern_extractor_decl,
  [sym__extern_const_decl] = sym__extern_const_decl,
  [sym_convert] = sym_convert,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_let_repeat1] = aux_sym_let_repeat1,
  [aux_sym__pattern_repeat1] = aux_sym__pattern_repeat1,
  [aux_sym__expr_repeat1] = aux_sym__expr_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_enum_variant_repeat1] = aux_sym_enum_variant_repeat1,
  [aux_sym_decl_repeat1] = aux_sym_decl_repeat1,
  [aux_sym_decl_repeat2] = aux_sym_decl_repeat2,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_extractor_repeat1] = aux_sym_extractor_repeat1,
  [anon_alias_sym__rule_priority] = anon_alias_sym__rule_priority,
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
  [sym_const_ident] = {
    .visible = true,
    .named = true,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard] = {
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
  [anon_sym_nodebug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
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
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extractor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infallible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__def] = {
    .visible = false,
    .named = true,
  },
  [sym_ty] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
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
  [sym__expr] = {
    .visible = false,
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
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant_field] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__rule_priority] = {
    .visible = false,
    .named = true,
  },
  [sym_extractor] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym__extern_constructor_decl] = {
    .visible = false,
    .named = true,
  },
  [sym__extern_extractor_decl] = {
    .visible = false,
    .named = true,
  },
  [sym__extern_const_decl] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_variant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_repeat2] = {
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
  [anon_alias_sym__rule_priority] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_bindings = 1,
  field_body = 2,
  field_from = 3,
  field_modifiers = 4,
  field_name = 5,
  field_params = 6,
  field_priority = 7,
  field_ret = 8,
  field_rewrite = 9,
  field_src_name = 10,
  field_target_name = 11,
  field_term = 12,
  field_to = 13,
  field_variants = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bindings] = "bindings",
  [field_body] = "body",
  [field_from] = "from",
  [field_modifiers] = "modifiers",
  [field_name] = "name",
  [field_params] = "params",
  [field_priority] = "priority",
  [field_ret] = "ret",
  [field_rewrite] = "rewrite",
  [field_src_name] = "src_name",
  [field_target_name] = "target_name",
  [field_term] = "term",
  [field_to] = "to",
  [field_variants] = "variants",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 3},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 2},
  [14] = {.index = 27, .length = 3},
  [15] = {.index = 30, .length = 3},
  [16] = {.index = 33, .length = 1},
  [17] = {.index = 34, .length = 4},
  [18] = {.index = 38, .length = 3},
  [19] = {.index = 41, .length = 4},
  [20] = {.index = 45, .length = 3},
  [21] = {.index = 48, .length = 5},
  [22] = {.index = 53, .length = 5},
  [23] = {.index = 58, .length = 4},
  [24] = {.index = 62, .length = 6},
  [25] = {.index = 68, .length = 3},
  [26] = {.index = 71, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_ret, 2},
  [2] =
    {field_src_name, 2, .inherited = true},
    {field_target_name, 2, .inherited = true},
  [4] =
    {field_modifiers, 2, .inherited = true},
    {field_src_name, 2, .inherited = true},
    {field_target_name, 2, .inherited = true},
  [7] =
    {field_name, 1},
    {field_params, 2},
    {field_ret, 3},
  [10] =
    {field_body, 3},
    {field_name, 2},
  [12] =
    {field_src_name, 1},
    {field_target_name, 2},
  [14] =
    {field_rewrite, 3},
    {field_term, 2},
  [16] =
    {field_body, 4},
    {field_modifiers, 3},
    {field_name, 2},
  [19] =
    {field_modifiers, 1},
    {field_src_name, 2},
    {field_target_name, 3},
  [22] =
    {field_name, 2},
    {field_rewrite, 4},
    {field_term, 3},
  [25] =
    {field_rewrite, 4},
    {field_term, 2},
  [27] =
    {field_priority, 2},
    {field_rewrite, 4},
    {field_term, 3},
  [30] =
    {field_from, 2},
    {field_name, 4},
    {field_to, 3},
  [33] =
    {field_variants, 2},
  [34] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_ret, 5},
  [38] =
    {field_name, 2},
    {field_rewrite, 5},
    {field_term, 3},
  [41] =
    {field_name, 2},
    {field_priority, 3},
    {field_rewrite, 5},
    {field_term, 4},
  [45] =
    {field_priority, 2},
    {field_rewrite, 5},
    {field_term, 3},
  [48] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_ret, 6},
  [53] =
    {field_modifiers, 2},
    {field_name, 3},
    {field_params, 4},
    {field_params, 5},
    {field_ret, 6},
  [58] =
    {field_name, 2},
    {field_priority, 3},
    {field_rewrite, 6},
    {field_term, 4},
  [62] =
    {field_modifiers, 2},
    {field_name, 3},
    {field_params, 4},
    {field_params, 5},
    {field_params, 6},
    {field_ret, 7},
  [68] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_body, 4},
  [71] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_bindings, 4},
    {field_body, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym__rule_priority,
  },
  [2] = {
    [0] = sym_ty,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_int, 2,
    sym_int,
    anon_alias_sym__rule_priority,
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 10,
  [18] = 12,
  [19] = 13,
  [20] = 14,
  [21] = 10,
  [22] = 12,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 27,
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
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 41,
  [60] = 60,
  [61] = 61,
  [62] = 40,
  [63] = 48,
  [64] = 44,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
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
  [84] = 77,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 83,
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
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 116,
  [138] = 108,
  [139] = 116,
  [140] = 140,
  [141] = 141,
  [142] = 54,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 44,
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
  [158] = 40,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 41,
  [167] = 51,
  [168] = 141,
  [169] = 169,
  [170] = 170,
  [171] = 55,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 56,
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
  [190] = 179,
  [191] = 46,
  [192] = 192,
  [193] = 50,
  [194] = 179,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 159,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 48,
  [206] = 53,
  [207] = 207,
  [208] = 208,
  [209] = 164,
  [210] = 210,
  [211] = 211,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '$', 106,
        '(', 113,
        ')', 116,
        '-', 6,
        '0', 108,
        ';', 135,
        '@', 120,
        '_', 104,
        'c', 80,
        'e', 77,
        'i', 69,
        'n', 81,
        'p', 84,
        0x200b, 54,
        0x2028, 54,
        0x2029, 54,
        0x2060, 54,
        0xfeff, 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 106,
        '(', 113,
        ')', 116,
        '-', 6,
        '0', 108,
        ';', 135,
        '_', 104,
        0x200b, 53,
        0x2028, 53,
        0x2029, 53,
        0x2060, 53,
        0xfeff, 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 106,
        '(', 113,
        '-', 6,
        '0', 108,
        ';', 135,
        '@', 120,
        '_', 104,
        0x200b, 55,
        0x2028, 55,
        0x2029, 55,
        0x2060, 55,
        0xfeff, 55,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ';') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ';') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(106);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '$', 107,
        '(', 113,
        ')', 116,
        ';', 135,
        '@', 119,
        'c', 29,
        'e', 26,
        'i', 18,
        'n', 30,
        'p', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '$', 106,
        '-', 56,
        '0', 101,
        '@', 106,
        '_', 104,
        0x200b, 53,
        0x2028, 53,
        0x2029, 53,
        0x2060, 53,
        0xfeff, 53,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '$', 106,
        '-', 56,
        '0', 101,
        '@', 120,
        '_', 104,
        'c', 80,
        'e', 77,
        'i', 69,
        'n', 81,
        'p', 84,
        0x200b, 54,
        0x2028, 54,
        0x2029, 54,
        0x2060, 54,
        0xfeff, 54,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '$', 106,
        '-', 56,
        '0', 101,
        '@', 120,
        '_', 104,
        0x200b, 55,
        0x2028, 55,
        0x2029, 55,
        0x2060, 55,
        0xfeff, 55,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ';') ADVANCE(8);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_nodebug);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_nodebug);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_primitive);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_primitive);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_extractor);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_extractor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(135);
      END_STATE();
    case 136:
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
        'c', 3,
        'd', 4,
        'f', 5,
        'i', 6,
        'l', 7,
        'm', 8,
        'p', 9,
        'r', 10,
        't', 11,
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
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 26:
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_decl);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_convert);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_infallible);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 51},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 51},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 51},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 51},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 51},
  [84] = {.lex_state = 51},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 51},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 51},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 51},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 51},
  [97] = {.lex_state = 51},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 51},
  [101] = {.lex_state = 51},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 51},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 51},
  [111] = {.lex_state = 51},
  [112] = {.lex_state = 51},
  [113] = {.lex_state = 51},
  [114] = {.lex_state = 51},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 51},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 51},
  [121] = {.lex_state = 51},
  [122] = {.lex_state = 51},
  [123] = {.lex_state = 51},
  [124] = {.lex_state = 51},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 51},
  [128] = {.lex_state = 51},
  [129] = {.lex_state = 51},
  [130] = {.lex_state = 51},
  [131] = {.lex_state = 51},
  [132] = {.lex_state = 51},
  [133] = {.lex_state = 51},
  [134] = {.lex_state = 51},
  [135] = {.lex_state = 51},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 51},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 51},
  [147] = {.lex_state = 51},
  [148] = {.lex_state = 51},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 51},
  [155] = {.lex_state = 51},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 51},
  [159] = {.lex_state = 51},
  [160] = {.lex_state = 51},
  [161] = {.lex_state = 51},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 51},
  [164] = {.lex_state = 51},
  [165] = {.lex_state = 51},
  [166] = {.lex_state = 51},
  [167] = {.lex_state = 51},
  [168] = {.lex_state = 51},
  [169] = {.lex_state = 51},
  [170] = {.lex_state = 51},
  [171] = {.lex_state = 51},
  [172] = {.lex_state = 51},
  [173] = {.lex_state = 51},
  [174] = {.lex_state = 51},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 51},
  [178] = {.lex_state = 51},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 51},
  [186] = {.lex_state = 51},
  [187] = {.lex_state = 51},
  [188] = {.lex_state = 51},
  [189] = {.lex_state = 51},
  [190] = {.lex_state = 51},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 51},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 51},
  [197] = {.lex_state = 51},
  [198] = {.lex_state = 51},
  [199] = {.lex_state = 51},
  [200] = {.lex_state = 51},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 51},
  [203] = {.lex_state = 51},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 51},
  [206] = {.lex_state = 51},
  [207] = {.lex_state = 51},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 51},
  [210] = {.lex_state = 51},
  [211] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_const_ident] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [aux_sym_int_token2] = ACTIONS(1),
    [aux_sym_int_token3] = ACTIONS(1),
    [aux_sym_int_token4] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_if_DASHlet] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_pragma] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_nodebug] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_primitive] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_decl] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_extractor] = ACTIONS(1),
    [anon_sym_infallible] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_convert] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(151),
    [sym__def] = STATE(97),
    [sym_pragma] = STATE(107),
    [sym_type] = STATE(107),
    [sym_decl] = STATE(107),
    [sym_rule] = STATE(107),
    [sym_extractor] = STATE(107),
    [sym_extern] = STATE(107),
    [sym_convert] = STATE(107),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(47),
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
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_rule_repeat1,
    STATE(189), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [42] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_rule_repeat1,
    STATE(207), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [84] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_rule_repeat1,
    STATE(174), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [126] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_rule_repeat1,
    STATE(184), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [168] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    STATE(198), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [210] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_rule_repeat1,
    STATE(187), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [252] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_rule_repeat1,
    STATE(165), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [294] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_rule_repeat1,
    STATE(203), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [336] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__pattern_repeat1,
    STATE(49), 1,
      sym__pattern,
    ACTIONS(23), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [379] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      sym_ident,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_AT,
    STATE(4), 1,
      sym__pattern,
    STATE(11), 1,
      sym_comment,
    STATE(35), 1,
      sym__rule_priority,
    STATE(60), 1,
      sym_int,
    STATE(64), 1,
      sym_bool,
    ACTIONS(35), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [424] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__pattern_repeat1,
    STATE(49), 1,
      sym__pattern,
    ACTIONS(23), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [467] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expr_repeat1,
    STATE(57), 1,
      sym__expr,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_ident,
      sym_const_ident,
    STATE(50), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [508] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__expr_repeat1,
    STATE(57), 1,
      sym__expr,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_ident,
      sym_const_ident,
    STATE(50), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [549] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym__expr,
    ACTIONS(55), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_comment,
      aux_sym__expr_repeat1,
    STATE(50), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(58), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [588] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym__pattern,
    ACTIONS(72), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(78), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_comment,
      aux_sym__pattern_repeat1,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(75), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [629] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__pattern_repeat1,
    STATE(49), 1,
      sym__pattern,
    ACTIONS(23), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [672] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym__pattern_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(49), 1,
      sym__pattern,
    ACTIONS(23), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [715] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym__expr_repeat1,
    STATE(57), 1,
      sym__expr,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_ident,
      sym_const_ident,
    STATE(50), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [756] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym__expr_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(57), 1,
      sym__expr,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_ident,
      sym_const_ident,
    STATE(50), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [797] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__pattern_repeat1,
    STATE(49), 1,
      sym__pattern,
    ACTIONS(23), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [840] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym__pattern_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(49), 1,
      sym__pattern,
    ACTIONS(23), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [883] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_ident,
    STATE(6), 1,
      sym__pattern,
    STATE(23), 1,
      sym_comment,
    STATE(33), 1,
      sym__rule_priority,
    STATE(60), 1,
      sym_int,
    STATE(64), 1,
      sym_bool,
    ACTIONS(35), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [925] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      sym_ident,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_extractor_repeat1,
    STATE(160), 1,
      sym__pattern,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(146), 2,
      sym_int,
      sym_bool,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [965] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      sym_ident,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      aux_sym_extractor_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(196), 1,
      sym__pattern,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(146), 2,
      sym_int,
      sym_bool,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1005] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_comment,
    STATE(141), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1040] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(159), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1075] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_comment,
    STATE(168), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1110] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(170), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1145] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      sym_ident,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_comment,
    STATE(63), 1,
      sym__pattern,
    ACTIONS(35), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1182] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(48), 1,
      sym__pattern,
    ACTIONS(23), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_int,
      sym_bool,
    ACTIONS(25), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1219] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(154), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1254] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      sym_ident,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__pattern,
    STATE(33), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1291] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_ident,
    STATE(34), 1,
      sym_comment,
    STATE(205), 1,
      sym__pattern,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(146), 2,
      sym_int,
      sym_bool,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1328] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      sym_ident,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym__pattern,
    STATE(35), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1365] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      sym_ident,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(37), 1,
      sym__pattern,
    ACTIONS(35), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(47), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1402] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_comment,
    STATE(143), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1437] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_comment,
    STATE(199), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(193), 3,
      sym_int,
      sym_bool,
      sym_let,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1472] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(39), 2,
      sym_comment,
      aux_sym_rule_repeat1,
    STATE(61), 2,
      sym_if_let,
      sym_if,
    ACTIONS(110), 8,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
  [1500] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(115), 11,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1523] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(117), 11,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1546] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym__def,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(107), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym_extern,
      sym_convert,
  [1575] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(43), 1,
      sym_comment,
    ACTIONS(124), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
  [1600] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(128), 11,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1623] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(130), 1,
      sym_ident,
    STATE(45), 2,
      sym_comment,
      aux_sym_extractor_repeat1,
    ACTIONS(133), 9,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
  [1648] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(135), 11,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1671] = 8,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(97), 1,
      sym__def,
    STATE(107), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym_extern,
      sym_convert,
  [1702] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(139), 11,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1725] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(141), 11,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1748] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(143), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1770] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(145), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(135), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1814] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
      sym_comment,
    ACTIONS(147), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1836] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(149), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1858] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
      sym_comment,
    ACTIONS(151), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(153), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1902] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(155), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1924] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(124), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
  [1946] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_comment,
    ACTIONS(117), 10,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1968] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(160), 1,
      sym_wildcard,
    STATE(60), 1,
      sym_comment,
    ACTIONS(157), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [1992] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(61), 1,
      sym_comment,
    ACTIONS(162), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2013] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
      sym_comment,
    ACTIONS(115), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2034] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
      sym_comment,
    ACTIONS(139), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2055] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(64), 1,
      sym_comment,
    ACTIONS(128), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2076] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(65), 1,
      sym_comment,
    ACTIONS(164), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2097] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(166), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2118] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      sym_ident,
    ACTIONS(170), 1,
      anon_sym_pragma,
    ACTIONS(172), 1,
      anon_sym_type,
    ACTIONS(174), 1,
      anon_sym_extern,
    ACTIONS(176), 1,
      anon_sym_decl,
    ACTIONS(178), 1,
      anon_sym_rule,
    ACTIONS(180), 1,
      anon_sym_convert,
    STATE(67), 1,
      sym_comment,
  [2149] = 9,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      anon_sym_constructor,
    ACTIONS(184), 1,
      anon_sym_extractor,
    ACTIONS(186), 1,
      anon_sym_const,
    STATE(68), 1,
      sym_comment,
    STATE(150), 1,
      sym__extern_constructor_decl,
    STATE(152), 1,
      sym__extern_extractor_decl,
    STATE(161), 1,
      sym__extern_const_decl,
  [2177] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      sym_ident,
    STATE(69), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_decl_repeat1,
    ACTIONS(190), 3,
      anon_sym_pure,
      anon_sym_multi,
      anon_sym_partial,
  [2198] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(192), 1,
      sym_ident,
    STATE(70), 2,
      sym_comment,
      aux_sym_decl_repeat1,
    ACTIONS(194), 3,
      anon_sym_pure,
      anon_sym_multi,
      anon_sym_partial,
  [2217] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      sym_ident,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_enum_repeat1,
    STATE(92), 1,
      sym_enum_variant,
  [2242] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_nodebug,
      anon_sym_extern,
    STATE(178), 2,
      sym_primitive,
      sym_enum,
  [2263] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(207), 1,
      sym_ident,
    STATE(70), 1,
      aux_sym_decl_repeat1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_pure,
      anon_sym_multi,
      anon_sym_partial,
  [2284] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      sym_ident,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_enum_repeat1,
    STATE(92), 1,
      sym_enum_variant,
  [2309] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      sym_ident,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_enum_variant,
    STATE(75), 2,
      sym_comment,
      aux_sym_enum_repeat1,
  [2332] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_decl_repeat2,
    STATE(103), 1,
      sym_ty,
  [2354] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_let_repeat1,
    STATE(119), 1,
      sym_let_binding,
  [2376] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_decl_repeat2,
    STATE(103), 1,
      sym_ty,
  [2398] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_comment,
    ACTIONS(229), 4,
      sym_ident,
      anon_sym_pure,
      anon_sym_multi,
      anon_sym_partial,
  [2414] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_decl_repeat2,
    STATE(103), 1,
      sym_ty,
  [2436] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_enum_variant_repeat1,
    STATE(121), 1,
      sym_enum_variant_field,
  [2458] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym_ident,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_ty,
    STATE(82), 2,
      sym_comment,
      aux_sym_decl_repeat2,
  [2478] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_let_repeat1,
    STATE(119), 1,
      sym_let_binding,
  [2500] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_let_repeat1,
    STATE(119), 1,
      sym_let_binding,
  [2522] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_decl_repeat2,
    STATE(85), 1,
      sym_comment,
    STATE(103), 1,
      sym_ty,
  [2544] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_enum_variant_repeat1,
    STATE(121), 1,
      sym_enum_variant_field,
  [2566] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_let_binding,
    STATE(87), 2,
      sym_comment,
      aux_sym_let_repeat1,
  [2586] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(257), 1,
      anon_sym_if_DASHlet,
    ACTIONS(259), 1,
      anon_sym_if,
    ACTIONS(261), 1,
      anon_sym_let,
    STATE(88), 1,
      sym_comment,
  [2608] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_enum_variant_field,
    STATE(89), 2,
      sym_comment,
      aux_sym_enum_variant_repeat1,
  [2628] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_let_repeat1,
    STATE(90), 1,
      sym_comment,
    STATE(119), 1,
      sym_let_binding,
  [2650] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(270), 1,
      sym_ident,
    STATE(91), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2667] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      sym_ident,
    STATE(92), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2684] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_comment,
    STATE(210), 2,
      sym_primitive,
      sym_enum,
  [2701] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(278), 1,
      sym_ident,
    STATE(94), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2718] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_ident,
    STATE(95), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2735] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_comment,
  [2751] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_comment,
  [2767] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_ident,
    STATE(98), 1,
      sym_comment,
    STATE(192), 1,
      sym_ty,
  [2783] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_ident,
    STATE(99), 1,
      sym_comment,
    STATE(197), 1,
      sym_ty,
  [2799] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_comment,
  [2815] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_comment,
  [2831] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_ident,
    STATE(102), 1,
      sym_comment,
    STATE(185), 1,
      sym_ty,
  [2847] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      sym_ident,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_comment,
  [2863] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_ident,
    STATE(104), 1,
      sym_comment,
    STATE(186), 1,
      sym_ty,
  [2879] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(308), 1,
      sym_ident,
    ACTIONS(310), 1,
      anon_sym_infallible,
    STATE(105), 1,
      sym_comment,
  [2895] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_comment,
  [2911] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_comment,
  [2927] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(320), 1,
      sym_ident,
    ACTIONS(322), 1,
      anon_sym_let,
    STATE(108), 1,
      sym_comment,
  [2943] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      sym_ident,
    STATE(109), 1,
      sym_comment,
    STATE(118), 1,
      sym_ty,
  [2959] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
  [2975] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(259), 1,
      anon_sym_if,
    ACTIONS(328), 1,
      anon_sym_if_DASHlet,
    STATE(111), 1,
      sym_comment,
  [2991] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_comment,
  [3007] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_comment,
  [3023] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [3039] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_ident,
    STATE(115), 1,
      sym_comment,
    STATE(155), 1,
      sym_ty,
  [3055] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(116), 1,
      sym_comment,
    ACTIONS(342), 2,
      sym_ident,
      anon_sym_and,
  [3069] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_comment,
  [3085] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      sym_ident,
    STATE(118), 1,
      sym_comment,
    STATE(204), 1,
      sym_ty,
  [3101] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [3117] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_comment,
  [3133] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [3149] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_comment,
  [3165] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
  [3181] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_comment,
  [3197] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      sym_ident,
    STATE(29), 1,
      sym_ty,
    STATE(125), 1,
      sym_comment,
  [3213] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_ident,
    STATE(126), 1,
      sym_comment,
    STATE(169), 1,
      sym_ty,
  [3229] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_comment,
  [3245] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_comment,
  [3261] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_comment,
  [3277] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_comment,
  [3293] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      anon_sym_primitive,
    ACTIONS(390), 1,
      anon_sym_enum,
    STATE(131), 1,
      sym_comment,
  [3309] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_comment,
  [3325] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_comment,
  [3341] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
  [3357] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_comment,
  [3373] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_comment,
  [3389] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(137), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_ident,
      anon_sym_and,
  [3403] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(261), 1,
      anon_sym_let,
    STATE(138), 1,
      sym_comment,
  [3419] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(139), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym_ident,
      anon_sym_and,
  [3433] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_comment,
  [3449] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_comment,
  [3462] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_comment,
  [3475] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_comment,
  [3488] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      sym_ident,
    STATE(144), 1,
      sym_comment,
  [3501] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(428), 1,
      sym_ident,
    STATE(145), 1,
      sym_comment,
  [3514] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_comment,
  [3527] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(432), 1,
      sym_const_ident,
    STATE(147), 1,
      sym_comment,
  [3540] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_comment,
  [3553] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(436), 1,
      sym_ident,
    STATE(149), 1,
      sym_comment,
  [3566] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_comment,
  [3579] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_comment,
  [3592] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_comment,
  [3605] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(444), 1,
      sym_ident,
    STATE(153), 1,
      sym_comment,
  [3618] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_comment,
  [3631] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_comment,
  [3644] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_comment,
  [3657] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_comment,
  [3670] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_comment,
  [3683] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_comment,
  [3696] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_comment,
  [3709] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_comment,
  [3722] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      sym_ident,
    STATE(162), 1,
      sym_comment,
  [3735] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym_comment,
  [3748] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_comment,
  [3761] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_comment,
  [3774] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_comment,
  [3787] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_comment,
  [3800] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_comment,
  [3813] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_comment,
  [3826] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      sym_comment,
  [3839] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_comment,
  [3852] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym_comment,
  [3865] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym_comment,
  [3878] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comment,
  [3891] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym_comment,
  [3904] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_comment,
  [3917] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_comment,
  [3930] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_comment,
  [3943] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      anon_sym_AT,
    STATE(179), 1,
      sym_comment,
  [3956] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      sym_ident,
    STATE(180), 1,
      sym_comment,
  [3969] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      sym_ident,
    STATE(181), 1,
      sym_comment,
  [3982] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      sym_ident,
    STATE(182), 1,
      sym_comment,
  [3995] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(504), 1,
      sym_ident,
    STATE(183), 1,
      sym_comment,
  [4008] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_comment,
  [4021] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_comment,
  [4034] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_comment,
  [4047] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_comment,
  [4060] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_comment,
  [4073] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [4086] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      anon_sym_AT,
    STATE(190), 1,
      sym_comment,
  [4099] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_comment,
  [4112] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [4125] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_comment,
  [4138] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      anon_sym_AT,
    STATE(194), 1,
      sym_comment,
  [4151] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      sym_ident,
    STATE(195), 1,
      sym_comment,
  [4164] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_comment,
  [4177] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [4190] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [4203] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_comment,
  [4216] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_comment,
  [4229] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(540), 1,
      sym_ident,
    STATE(201), 1,
      sym_comment,
  [4242] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym_comment,
  [4255] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym_comment,
  [4268] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(546), 1,
      sym_ident,
    STATE(204), 1,
      sym_comment,
  [4281] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym_comment,
  [4294] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_comment,
  [4307] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_comment,
  [4320] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      sym_ident,
    STATE(208), 1,
      sym_comment,
  [4333] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_comment,
  [4346] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_comment,
  [4359] = 1,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 379,
  [SMALL_STATE(12)] = 424,
  [SMALL_STATE(13)] = 467,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 549,
  [SMALL_STATE(16)] = 588,
  [SMALL_STATE(17)] = 629,
  [SMALL_STATE(18)] = 672,
  [SMALL_STATE(19)] = 715,
  [SMALL_STATE(20)] = 756,
  [SMALL_STATE(21)] = 797,
  [SMALL_STATE(22)] = 840,
  [SMALL_STATE(23)] = 883,
  [SMALL_STATE(24)] = 925,
  [SMALL_STATE(25)] = 965,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1040,
  [SMALL_STATE(28)] = 1075,
  [SMALL_STATE(29)] = 1110,
  [SMALL_STATE(30)] = 1145,
  [SMALL_STATE(31)] = 1182,
  [SMALL_STATE(32)] = 1219,
  [SMALL_STATE(33)] = 1254,
  [SMALL_STATE(34)] = 1291,
  [SMALL_STATE(35)] = 1328,
  [SMALL_STATE(36)] = 1365,
  [SMALL_STATE(37)] = 1402,
  [SMALL_STATE(38)] = 1437,
  [SMALL_STATE(39)] = 1472,
  [SMALL_STATE(40)] = 1500,
  [SMALL_STATE(41)] = 1523,
  [SMALL_STATE(42)] = 1546,
  [SMALL_STATE(43)] = 1575,
  [SMALL_STATE(44)] = 1600,
  [SMALL_STATE(45)] = 1623,
  [SMALL_STATE(46)] = 1648,
  [SMALL_STATE(47)] = 1671,
  [SMALL_STATE(48)] = 1702,
  [SMALL_STATE(49)] = 1725,
  [SMALL_STATE(50)] = 1748,
  [SMALL_STATE(51)] = 1770,
  [SMALL_STATE(52)] = 1792,
  [SMALL_STATE(53)] = 1814,
  [SMALL_STATE(54)] = 1836,
  [SMALL_STATE(55)] = 1858,
  [SMALL_STATE(56)] = 1880,
  [SMALL_STATE(57)] = 1902,
  [SMALL_STATE(58)] = 1924,
  [SMALL_STATE(59)] = 1946,
  [SMALL_STATE(60)] = 1968,
  [SMALL_STATE(61)] = 1992,
  [SMALL_STATE(62)] = 2013,
  [SMALL_STATE(63)] = 2034,
  [SMALL_STATE(64)] = 2055,
  [SMALL_STATE(65)] = 2076,
  [SMALL_STATE(66)] = 2097,
  [SMALL_STATE(67)] = 2118,
  [SMALL_STATE(68)] = 2149,
  [SMALL_STATE(69)] = 2177,
  [SMALL_STATE(70)] = 2198,
  [SMALL_STATE(71)] = 2217,
  [SMALL_STATE(72)] = 2242,
  [SMALL_STATE(73)] = 2263,
  [SMALL_STATE(74)] = 2284,
  [SMALL_STATE(75)] = 2309,
  [SMALL_STATE(76)] = 2332,
  [SMALL_STATE(77)] = 2354,
  [SMALL_STATE(78)] = 2376,
  [SMALL_STATE(79)] = 2398,
  [SMALL_STATE(80)] = 2414,
  [SMALL_STATE(81)] = 2436,
  [SMALL_STATE(82)] = 2458,
  [SMALL_STATE(83)] = 2478,
  [SMALL_STATE(84)] = 2500,
  [SMALL_STATE(85)] = 2522,
  [SMALL_STATE(86)] = 2544,
  [SMALL_STATE(87)] = 2566,
  [SMALL_STATE(88)] = 2586,
  [SMALL_STATE(89)] = 2608,
  [SMALL_STATE(90)] = 2628,
  [SMALL_STATE(91)] = 2650,
  [SMALL_STATE(92)] = 2667,
  [SMALL_STATE(93)] = 2684,
  [SMALL_STATE(94)] = 2701,
  [SMALL_STATE(95)] = 2718,
  [SMALL_STATE(96)] = 2735,
  [SMALL_STATE(97)] = 2751,
  [SMALL_STATE(98)] = 2767,
  [SMALL_STATE(99)] = 2783,
  [SMALL_STATE(100)] = 2799,
  [SMALL_STATE(101)] = 2815,
  [SMALL_STATE(102)] = 2831,
  [SMALL_STATE(103)] = 2847,
  [SMALL_STATE(104)] = 2863,
  [SMALL_STATE(105)] = 2879,
  [SMALL_STATE(106)] = 2895,
  [SMALL_STATE(107)] = 2911,
  [SMALL_STATE(108)] = 2927,
  [SMALL_STATE(109)] = 2943,
  [SMALL_STATE(110)] = 2959,
  [SMALL_STATE(111)] = 2975,
  [SMALL_STATE(112)] = 2991,
  [SMALL_STATE(113)] = 3007,
  [SMALL_STATE(114)] = 3023,
  [SMALL_STATE(115)] = 3039,
  [SMALL_STATE(116)] = 3055,
  [SMALL_STATE(117)] = 3069,
  [SMALL_STATE(118)] = 3085,
  [SMALL_STATE(119)] = 3101,
  [SMALL_STATE(120)] = 3117,
  [SMALL_STATE(121)] = 3133,
  [SMALL_STATE(122)] = 3149,
  [SMALL_STATE(123)] = 3165,
  [SMALL_STATE(124)] = 3181,
  [SMALL_STATE(125)] = 3197,
  [SMALL_STATE(126)] = 3213,
  [SMALL_STATE(127)] = 3229,
  [SMALL_STATE(128)] = 3245,
  [SMALL_STATE(129)] = 3261,
  [SMALL_STATE(130)] = 3277,
  [SMALL_STATE(131)] = 3293,
  [SMALL_STATE(132)] = 3309,
  [SMALL_STATE(133)] = 3325,
  [SMALL_STATE(134)] = 3341,
  [SMALL_STATE(135)] = 3357,
  [SMALL_STATE(136)] = 3373,
  [SMALL_STATE(137)] = 3389,
  [SMALL_STATE(138)] = 3403,
  [SMALL_STATE(139)] = 3419,
  [SMALL_STATE(140)] = 3433,
  [SMALL_STATE(141)] = 3449,
  [SMALL_STATE(142)] = 3462,
  [SMALL_STATE(143)] = 3475,
  [SMALL_STATE(144)] = 3488,
  [SMALL_STATE(145)] = 3501,
  [SMALL_STATE(146)] = 3514,
  [SMALL_STATE(147)] = 3527,
  [SMALL_STATE(148)] = 3540,
  [SMALL_STATE(149)] = 3553,
  [SMALL_STATE(150)] = 3566,
  [SMALL_STATE(151)] = 3579,
  [SMALL_STATE(152)] = 3592,
  [SMALL_STATE(153)] = 3605,
  [SMALL_STATE(154)] = 3618,
  [SMALL_STATE(155)] = 3631,
  [SMALL_STATE(156)] = 3644,
  [SMALL_STATE(157)] = 3657,
  [SMALL_STATE(158)] = 3670,
  [SMALL_STATE(159)] = 3683,
  [SMALL_STATE(160)] = 3696,
  [SMALL_STATE(161)] = 3709,
  [SMALL_STATE(162)] = 3722,
  [SMALL_STATE(163)] = 3735,
  [SMALL_STATE(164)] = 3748,
  [SMALL_STATE(165)] = 3761,
  [SMALL_STATE(166)] = 3774,
  [SMALL_STATE(167)] = 3787,
  [SMALL_STATE(168)] = 3800,
  [SMALL_STATE(169)] = 3813,
  [SMALL_STATE(170)] = 3826,
  [SMALL_STATE(171)] = 3839,
  [SMALL_STATE(172)] = 3852,
  [SMALL_STATE(173)] = 3865,
  [SMALL_STATE(174)] = 3878,
  [SMALL_STATE(175)] = 3891,
  [SMALL_STATE(176)] = 3904,
  [SMALL_STATE(177)] = 3917,
  [SMALL_STATE(178)] = 3930,
  [SMALL_STATE(179)] = 3943,
  [SMALL_STATE(180)] = 3956,
  [SMALL_STATE(181)] = 3969,
  [SMALL_STATE(182)] = 3982,
  [SMALL_STATE(183)] = 3995,
  [SMALL_STATE(184)] = 4008,
  [SMALL_STATE(185)] = 4021,
  [SMALL_STATE(186)] = 4034,
  [SMALL_STATE(187)] = 4047,
  [SMALL_STATE(188)] = 4060,
  [SMALL_STATE(189)] = 4073,
  [SMALL_STATE(190)] = 4086,
  [SMALL_STATE(191)] = 4099,
  [SMALL_STATE(192)] = 4112,
  [SMALL_STATE(193)] = 4125,
  [SMALL_STATE(194)] = 4138,
  [SMALL_STATE(195)] = 4151,
  [SMALL_STATE(196)] = 4164,
  [SMALL_STATE(197)] = 4177,
  [SMALL_STATE(198)] = 4190,
  [SMALL_STATE(199)] = 4203,
  [SMALL_STATE(200)] = 4216,
  [SMALL_STATE(201)] = 4229,
  [SMALL_STATE(202)] = 4242,
  [SMALL_STATE(203)] = 4255,
  [SMALL_STATE(204)] = 4268,
  [SMALL_STATE(205)] = 4281,
  [SMALL_STATE(206)] = 4294,
  [SMALL_STATE(207)] = 4307,
  [SMALL_STATE(208)] = 4320,
  [SMALL_STATE(209)] = 4333,
  [SMALL_STATE(210)] = 4346,
  [SMALL_STATE(211)] = 4359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 25),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 26),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 1, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0), REDUCE(sym__rule_priority, 1, 0, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_priority, 1, 0, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat1, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat2, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 21),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 21),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 5, 0, 6),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 5, 0, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 10),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 10),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_repeat2, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat2, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 12),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 12),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__def, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 13),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 13),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 14),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 14),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 15),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 15),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 17),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 17),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 19),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 19),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 20),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 20),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 22),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 22),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 23),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 23),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 4, 0, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 4, 0, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 24),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 24),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_field, 4, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_field, 4, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 5, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 5, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 9),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4, 0, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 4, 0, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4, 0, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 4, 0, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 7),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 7),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 18),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 18),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [440] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_extractor_decl, 3, 0, 8),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 4, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 25),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 26),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_extractor_decl, 4, 0, 11),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 4, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 16),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_const_decl, 4, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_constructor_decl, 3, 0, 8),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 4, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
