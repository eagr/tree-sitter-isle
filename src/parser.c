#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 212
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 32

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
  anon_sym_extern = 19,
  anon_sym_nodebug = 20,
  anon_sym_primitive = 21,
  anon_sym_enum = 22,
  anon_sym_decl = 23,
  anon_sym_multi = 24,
  anon_sym_partial = 25,
  anon_sym_pure = 26,
  anon_sym_rule = 27,
  anon_sym_constructor = 28,
  anon_sym_extractor = 29,
  sym_extern_extractor_decl_modifier = 30,
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
  sym_call = 44,
  sym__pattern = 45,
  sym__expr = 46,
  sym_pragma = 47,
  sym_type = 48,
  sym_type_modifier = 49,
  sym_type_primitive = 50,
  sym_type_enum = 51,
  sym_enum_variant = 52,
  sym_enum_variant_field = 53,
  sym_decl = 54,
  sym_decl_modifier = 55,
  sym_rule = 56,
  sym__rule_priority = 57,
  sym_extractor = 58,
  sym_extern = 59,
  sym__extern_constructor_decl = 60,
  sym_extern_extractor_decl = 61,
  sym__extern_const_decl = 62,
  sym_convert = 63,
  sym_comment = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_let_repeat1 = 66,
  aux_sym_call_repeat1 = 67,
  aux_sym__pattern_repeat1 = 68,
  aux_sym_type_enum_repeat1 = 69,
  aux_sym_enum_variant_repeat1 = 70,
  aux_sym_decl_repeat1 = 71,
  aux_sym_decl_repeat2 = 72,
  aux_sym_rule_repeat1 = 73,
  aux_sym_extractor_repeat1 = 74,
  anon_alias_sym__rule_priority = 75,
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
  [anon_sym_extern] = "extern",
  [anon_sym_nodebug] = "nodebug",
  [anon_sym_primitive] = "primitive",
  [anon_sym_enum] = "enum",
  [anon_sym_decl] = "decl",
  [anon_sym_multi] = "multi",
  [anon_sym_partial] = "partial",
  [anon_sym_pure] = "pure",
  [anon_sym_rule] = "rule",
  [anon_sym_constructor] = "constructor",
  [anon_sym_extractor] = "extractor",
  [sym_extern_extractor_decl_modifier] = "extern_extractor_decl_modifier",
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
  [sym_call] = "call",
  [sym__pattern] = "_pattern",
  [sym__expr] = "_expr",
  [sym_pragma] = "pragma",
  [sym_type] = "type",
  [sym_type_modifier] = "type_modifier",
  [sym_type_primitive] = "type_primitive",
  [sym_type_enum] = "type_enum",
  [sym_enum_variant] = "enum_variant",
  [sym_enum_variant_field] = "enum_variant_field",
  [sym_decl] = "decl",
  [sym_decl_modifier] = "decl_modifier",
  [sym_rule] = "rule",
  [sym__rule_priority] = "_rule_priority",
  [sym_extractor] = "extractor",
  [sym_extern] = "extern",
  [sym__extern_constructor_decl] = "_extern_constructor_decl",
  [sym_extern_extractor_decl] = "extern_extractor_decl",
  [sym__extern_const_decl] = "_extern_const_decl",
  [sym_convert] = "convert",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_let_repeat1] = "let_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
  [aux_sym_type_enum_repeat1] = "type_enum_repeat1",
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
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_nodebug] = anon_sym_nodebug,
  [anon_sym_primitive] = anon_sym_primitive,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_decl] = anon_sym_decl,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_extractor] = anon_sym_extractor,
  [sym_extern_extractor_decl_modifier] = sym_extern_extractor_decl_modifier,
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
  [sym_call] = sym_call,
  [sym__pattern] = sym__pattern,
  [sym__expr] = sym__expr,
  [sym_pragma] = sym_pragma,
  [sym_type] = sym_type,
  [sym_type_modifier] = sym_type_modifier,
  [sym_type_primitive] = sym_type_primitive,
  [sym_type_enum] = sym_type_enum,
  [sym_enum_variant] = sym_enum_variant,
  [sym_enum_variant_field] = sym_enum_variant_field,
  [sym_decl] = sym_decl,
  [sym_decl_modifier] = sym_decl_modifier,
  [sym_rule] = sym_rule,
  [sym__rule_priority] = sym__rule_priority,
  [sym_extractor] = sym_extractor,
  [sym_extern] = sym_extern,
  [sym__extern_constructor_decl] = sym__extern_constructor_decl,
  [sym_extern_extractor_decl] = sym_extern_extractor_decl,
  [sym__extern_const_decl] = sym__extern_const_decl,
  [sym_convert] = sym_convert,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_let_repeat1] = aux_sym_let_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
  [aux_sym__pattern_repeat1] = aux_sym__pattern_repeat1,
  [aux_sym_type_enum_repeat1] = aux_sym_type_enum_repeat1,
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
  [anon_sym_multi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
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
  [sym_extern_extractor_decl_modifier] = {
    .visible = true,
    .named = true,
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
  [sym_call] = {
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
  [sym_type_modifier] = {
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
  [sym_enum_variant_field] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_modifier] = {
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
  [sym_extern_extractor_decl] = {
    .visible = true,
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
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat1] = {
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
  field_args = 1,
  field_bindings = 2,
  field_body = 3,
  field_decl = 4,
  field_fn = 5,
  field_from = 6,
  field_name = 7,
  field_params = 8,
  field_primitive_name = 9,
  field_priority = 10,
  field_ret = 11,
  field_rewrite = 12,
  field_src_name = 13,
  field_target_name = 14,
  field_term = 15,
  field_to = 16,
  field_variant_name = 17,
  field_variants = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_bindings] = "bindings",
  [field_body] = "body",
  [field_decl] = "decl",
  [field_fn] = "fn",
  [field_from] = "from",
  [field_name] = "name",
  [field_params] = "params",
  [field_primitive_name] = "primitive_name",
  [field_priority] = "priority",
  [field_ret] = "ret",
  [field_rewrite] = "rewrite",
  [field_src_name] = "src_name",
  [field_target_name] = "target_name",
  [field_term] = "term",
  [field_to] = "to",
  [field_variant_name] = "variant_name",
  [field_variants] = "variants",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 3},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 4},
  [21] = {.index = 38, .length = 3},
  [22] = {.index = 41, .length = 4},
  [23] = {.index = 45, .length = 2},
  [24] = {.index = 47, .length = 3},
  [25] = {.index = 50, .length = 1},
  [26] = {.index = 51, .length = 5},
  [27] = {.index = 56, .length = 4},
  [28] = {.index = 60, .length = 4},
  [29] = {.index = 64, .length = 5},
  [30] = {.index = 69, .length = 3},
  [31] = {.index = 72, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_ret, 2},
  [2] =
    {field_decl, 2},
    {field_src_name, 2, .inherited = true},
    {field_target_name, 2, .inherited = true},
  [5] =
    {field_decl, 2},
  [6] =
    {field_name, 1},
    {field_params, 2},
    {field_ret, 3},
  [9] =
    {field_body, 3},
    {field_name, 2},
  [11] =
    {field_src_name, 1},
    {field_target_name, 2},
  [13] =
    {field_rewrite, 3},
    {field_term, 2},
  [15] =
    {field_variant_name, 0},
  [16] =
    {field_body, 4},
    {field_name, 2},
  [18] =
    {field_src_name, 2},
    {field_target_name, 3},
  [20] =
    {field_name, 2},
    {field_rewrite, 4},
    {field_term, 3},
  [23] =
    {field_fn, 1},
  [24] =
    {field_rewrite, 4},
    {field_term, 2},
  [26] =
    {field_priority, 2},
    {field_rewrite, 4},
    {field_term, 3},
  [29] =
    {field_from, 2},
    {field_name, 4},
    {field_to, 3},
  [32] =
    {field_primitive_name, 2},
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
    {field_args, 2},
    {field_fn, 1},
  [47] =
    {field_priority, 2},
    {field_rewrite, 5},
    {field_term, 3},
  [50] =
    {field_variant_name, 1},
  [51] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_ret, 6},
  [56] =
    {field_name, 3},
    {field_params, 4},
    {field_params, 5},
    {field_ret, 6},
  [60] =
    {field_name, 2},
    {field_priority, 3},
    {field_rewrite, 6},
    {field_term, 4},
  [64] =
    {field_name, 3},
    {field_params, 4},
    {field_params, 5},
    {field_params, 6},
    {field_ret, 7},
  [69] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_body, 4},
  [72] =
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
  [12] = 10,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 15,
  [21] = 16,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 36,
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
  [55] = 48,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 41,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 42,
  [65] = 40,
  [66] = 45,
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
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 82,
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
  [135] = 129,
  [136] = 136,
  [137] = 136,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
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
  [158] = 53,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 45,
  [166] = 166,
  [167] = 56,
  [168] = 141,
  [169] = 169,
  [170] = 170,
  [171] = 54,
  [172] = 172,
  [173] = 173,
  [174] = 42,
  [175] = 175,
  [176] = 176,
  [177] = 57,
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
  [191] = 179,
  [192] = 48,
  [193] = 41,
  [194] = 179,
  [195] = 52,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 159,
  [200] = 40,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 51,
  [209] = 150,
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
      if (lookahead == 'g') ADVANCE(123);
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
      if (lookahead == 'n') ADVANCE(121);
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
      if (lookahead == 'g') ADVANCE(124);
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
      if (lookahead == 'n') ADVANCE(122);
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
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_nodebug);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_nodebug);
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
      ACCEPT_TOKEN(sym_extern_extractor_decl_modifier);
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
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
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 51},
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
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 51},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 51},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 51},
  [83] = {.lex_state = 51},
  [84] = {.lex_state = 51},
  [85] = {.lex_state = 51},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 51},
  [88] = {.lex_state = 51},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 51},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 51},
  [101] = {.lex_state = 51},
  [102] = {.lex_state = 51},
  [103] = {.lex_state = 51},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 51},
  [106] = {.lex_state = 51},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 51},
  [110] = {.lex_state = 51},
  [111] = {.lex_state = 51},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 51},
  [114] = {.lex_state = 51},
  [115] = {.lex_state = 51},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 51},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 51},
  [124] = {.lex_state = 51},
  [125] = {.lex_state = 51},
  [126] = {.lex_state = 51},
  [127] = {.lex_state = 51},
  [128] = {.lex_state = 51},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 51},
  [131] = {.lex_state = 51},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 51},
  [134] = {.lex_state = 51},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 51},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 51},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 51},
  [147] = {.lex_state = 51},
  [148] = {.lex_state = 51},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 51},
  [154] = {.lex_state = 1},
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
  [180] = {.lex_state = 51},
  [181] = {.lex_state = 51},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 51},
  [188] = {.lex_state = 51},
  [189] = {.lex_state = 51},
  [190] = {.lex_state = 51},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 51},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 51},
  [196] = {.lex_state = 51},
  [197] = {.lex_state = 51},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 51},
  [200] = {.lex_state = 51},
  [201] = {.lex_state = 51},
  [202] = {.lex_state = 51},
  [203] = {.lex_state = 51},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 51},
  [207] = {.lex_state = 51},
  [208] = {.lex_state = 51},
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
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_nodebug] = ACTIONS(1),
    [anon_sym_primitive] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_decl] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_extractor] = ACTIONS(1),
    [sym_extern_extractor_decl_modifier] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_convert] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(157),
    [sym__def] = STATE(133),
    [sym_pragma] = STATE(134),
    [sym_type] = STATE(134),
    [sym_decl] = STATE(134),
    [sym_rule] = STATE(134),
    [sym_extractor] = STATE(134),
    [sym_extern] = STATE(134),
    [sym_convert] = STATE(134),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(44),
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
    STATE(39), 1,
      aux_sym_rule_repeat1,
    STATE(156), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [43] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      aux_sym_rule_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(201), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [86] = 11,
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
    STATE(190), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [129] = 11,
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
    STATE(152), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [172] = 11,
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
    STATE(161), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [215] = 11,
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
    STATE(175), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [258] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_rule_repeat1,
    STATE(153), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [301] = 11,
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
    STATE(207), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_if_let,
      sym_if,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [344] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_call_repeat1,
    STATE(50), 1,
      sym__expr,
    ACTIONS(21), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(52), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [386] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_call_repeat1,
    STATE(50), 1,
      sym__expr,
    ACTIONS(21), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(52), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [428] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_call_repeat1,
    STATE(50), 1,
      sym__expr,
    ACTIONS(21), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(52), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [470] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym__expr,
    ACTIONS(35), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym_comment,
      aux_sym_call_repeat1,
    ACTIONS(38), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(52), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [510] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_call_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(50), 1,
      sym__expr,
    ACTIONS(21), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(52), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [552] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym__pattern_repeat1,
    STATE(46), 1,
      sym__pattern,
    ACTIONS(53), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [595] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__pattern_repeat1,
    STATE(46), 1,
      sym__pattern,
    ACTIONS(53), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [638] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__pattern,
    ACTIONS(68), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_comment,
      aux_sym__pattern_repeat1,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(71), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [679] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      sym_ident,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_AT,
    STATE(4), 1,
      sym__pattern,
    STATE(18), 1,
      sym_comment,
    STATE(34), 1,
      sym__rule_priority,
    STATE(59), 1,
      sym_int,
    STATE(64), 1,
      sym_bool,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [724] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__pattern_repeat1,
    STATE(46), 1,
      sym__pattern,
    ACTIONS(53), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [767] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym__pattern_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(46), 1,
      sym__pattern,
    ACTIONS(53), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [810] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym__pattern_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(46), 1,
      sym__pattern,
    ACTIONS(53), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [853] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym__pattern_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(46), 1,
      sym__pattern,
    ACTIONS(53), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [896] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_ident,
    STATE(3), 1,
      sym__pattern,
    STATE(23), 1,
      sym_comment,
    STATE(35), 1,
      sym__rule_priority,
    STATE(59), 1,
      sym_int,
    STATE(64), 1,
      sym_bool,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [938] = 11,
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
    STATE(49), 1,
      aux_sym_extractor_repeat1,
    STATE(166), 1,
      sym__pattern,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(174), 2,
      sym_int,
      sym_bool,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [978] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(163), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [1014] = 11,
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
    STATE(26), 1,
      sym_comment,
    STATE(202), 1,
      sym__pattern,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(174), 2,
      sym_int,
      sym_bool,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1054] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(143), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [1090] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_comment,
    STATE(170), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [1126] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(159), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [1162] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_comment,
    STATE(168), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [1198] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(199), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [1234] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(141), 1,
      sym__expr,
    ACTIONS(13), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(195), 4,
      sym_int,
      sym_bool,
      sym_let,
      sym_call,
  [1270] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      sym_ident,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__pattern,
    STATE(33), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1307] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      sym_ident,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__pattern,
    STATE(34), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1344] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      sym_ident,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__pattern,
    STATE(35), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1381] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      sym_ident,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(65), 1,
      sym__pattern,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(64), 2,
      sym_int,
      sym_bool,
    ACTIONS(23), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1418] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_ident,
    STATE(37), 1,
      sym_comment,
    STATE(200), 1,
      sym__pattern,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(174), 2,
      sym_int,
      sym_bool,
    ACTIONS(15), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1455] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_comment,
    STATE(40), 1,
      sym__pattern,
    ACTIONS(53), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_int,
      sym_bool,
    ACTIONS(55), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1492] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(39), 2,
      sym_comment,
      aux_sym_rule_repeat1,
    STATE(63), 2,
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
  [1520] = 4,
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
  [1543] = 4,
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
  [1566] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(119), 11,
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
  [1589] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(43), 1,
      sym_comment,
    ACTIONS(121), 10,
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
  [1614] = 8,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    STATE(133), 1,
      sym__def,
    STATE(134), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym_extern,
      sym_convert,
  [1645] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(127), 11,
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
  [1668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(129), 11,
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
  [1691] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym__def,
    STATE(47), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(134), 7,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym_extern,
      sym_convert,
  [1720] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(136), 11,
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
  [1743] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_ident,
    STATE(49), 2,
      sym_comment,
      aux_sym_extractor_repeat1,
    ACTIONS(141), 9,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
  [1768] = 4,
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
  [1790] = 4,
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
  [1812] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
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
  [1834] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
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
  [1856] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
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
  [1878] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
      sym_comment,
    ACTIONS(136), 10,
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
  [1900] = 4,
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
  [1922] = 4,
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
  [1944] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(121), 10,
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
  [1966] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(160), 1,
      sym_wildcard,
    STATE(59), 1,
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
  [1990] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(60), 1,
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
  [2012] = 4,
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
  [2033] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
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
  [2054] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
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
  [2075] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(64), 1,
      sym_comment,
    ACTIONS(119), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2096] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(65), 1,
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
  [2117] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(127), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [2138] = 10,
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
  [2169] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      sym_ident,
    STATE(68), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_decl_repeat1,
    STATE(78), 1,
      sym_decl_modifier,
    ACTIONS(184), 3,
      anon_sym_multi,
      anon_sym_partial,
      anon_sym_pure,
  [2193] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_comment,
    STATE(94), 1,
      sym_type_modifier,
    ACTIONS(188), 2,
      anon_sym_extern,
      anon_sym_nodebug,
    STATE(181), 2,
      sym_type_primitive,
      sym_type_enum,
  [2217] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(190), 1,
      sym_ident,
    STATE(70), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_decl_repeat1,
    STATE(78), 1,
      sym_decl_modifier,
    ACTIONS(184), 3,
      anon_sym_multi,
      anon_sym_partial,
      anon_sym_pure,
  [2241] = 8,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(192), 1,
      anon_sym_constructor,
    ACTIONS(194), 1,
      anon_sym_extractor,
    ACTIONS(196), 1,
      anon_sym_const,
    STATE(71), 1,
      sym_comment,
    STATE(146), 1,
      sym__extern_constructor_decl,
    STATE(147), 2,
      sym_extern_extractor_decl,
      sym__extern_const_decl,
  [2267] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      sym_ident,
    STATE(78), 1,
      sym_decl_modifier,
    STATE(72), 2,
      sym_comment,
      aux_sym_decl_repeat1,
    ACTIONS(200), 3,
      anon_sym_multi,
      anon_sym_partial,
      anon_sym_pure,
  [2289] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      sym_ident,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_type_enum_repeat1,
    STATE(93), 1,
      sym_enum_variant,
  [2314] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      sym_ident,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_type_enum_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(93), 1,
      sym_enum_variant,
  [2339] = 7,
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
    STATE(93), 1,
      sym_enum_variant,
    STATE(75), 2,
      sym_comment,
      aux_sym_type_enum_repeat1,
  [2362] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_comment,
    ACTIONS(219), 4,
      sym_ident,
      anon_sym_multi,
      anon_sym_partial,
      anon_sym_pure,
  [2378] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_ident,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_decl_repeat2,
    STATE(139), 1,
      sym_ty,
  [2400] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_comment,
    ACTIONS(225), 4,
      sym_ident,
      anon_sym_multi,
      anon_sym_partial,
      anon_sym_pure,
  [2416] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_ident,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_decl_repeat2,
    STATE(139), 1,
      sym_ty,
  [2438] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_ident,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_decl_repeat2,
    STATE(139), 1,
      sym_ty,
  [2460] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(231), 1,
      sym_ident,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_ty,
    STATE(81), 2,
      sym_comment,
      aux_sym_decl_repeat2,
  [2480] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_let_repeat1,
    STATE(109), 1,
      sym_let_binding,
  [2502] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_let_repeat1,
    STATE(109), 1,
      sym_let_binding,
  [2524] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_let_repeat1,
    STATE(109), 1,
      sym_let_binding,
  [2546] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_enum_variant_repeat1,
    STATE(113), 1,
      sym_enum_variant_field,
  [2568] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_enum_variant_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(113), 1,
      sym_enum_variant_field,
  [2590] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_let_binding,
    STATE(87), 2,
      sym_comment,
      aux_sym_let_repeat1,
  [2610] = 6,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_enum_variant_field,
    STATE(88), 2,
      sym_comment,
      aux_sym_enum_variant_repeat1,
  [2630] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(260), 1,
      sym_ident,
    ACTIONS(262), 1,
      anon_sym_if_DASHlet,
    ACTIONS(264), 1,
      anon_sym_if,
    ACTIONS(266), 1,
      anon_sym_let,
    STATE(89), 1,
      sym_comment,
  [2652] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_ident,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_decl_repeat2,
    STATE(90), 1,
      sym_comment,
    STATE(139), 1,
      sym_ty,
  [2674] = 7,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_let_repeat1,
    STATE(91), 1,
      sym_comment,
    STATE(109), 1,
      sym_let_binding,
  [2696] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(272), 1,
      sym_ident,
    STATE(92), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2713] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(276), 1,
      sym_ident,
    STATE(93), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2730] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_comment,
    STATE(160), 2,
      sym_type_primitive,
      sym_type_enum,
  [2747] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(280), 1,
      sym_ident,
    STATE(95), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2764] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(284), 1,
      sym_ident,
    STATE(96), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2781] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_ident,
    STATE(97), 1,
      sym_comment,
    STATE(205), 1,
      sym_ty,
  [2797] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      anon_sym_if,
    ACTIONS(288), 1,
      anon_sym_if_DASHlet,
    STATE(98), 1,
      sym_comment,
  [2813] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_comment,
  [2829] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_comment,
  [2845] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_comment,
  [2861] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_comment,
  [2877] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_comment,
  [2893] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      sym_ident,
    STATE(104), 1,
      sym_comment,
    STATE(155), 1,
      sym_ty,
  [2909] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_comment,
  [2925] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_comment,
  [2941] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_ident,
    STATE(97), 1,
      sym_ty,
    STATE(107), 1,
      sym_comment,
  [2957] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(320), 1,
      sym_ident,
    ACTIONS(322), 1,
      sym_extern_extractor_decl_modifier,
    STATE(108), 1,
      sym_comment,
  [2973] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [2989] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
  [3005] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_comment,
  [3021] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      sym_ident,
    STATE(112), 1,
      sym_comment,
    STATE(196), 1,
      sym_ty,
  [3037] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
  [3053] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [3069] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_comment,
  [3085] = 5,
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
  [3101] = 5,
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
  [3117] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_ident,
    STATE(28), 1,
      sym_ty,
    STATE(118), 1,
      sym_comment,
  [3133] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_comment,
  [3149] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      sym_ident,
    STATE(120), 1,
      sym_comment,
    STATE(197), 1,
      sym_ty,
  [3165] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      sym_ident,
    STATE(121), 1,
      sym_comment,
    STATE(169), 1,
      sym_ty,
  [3181] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      sym_ident,
    STATE(122), 1,
      sym_comment,
    STATE(142), 1,
      sym_ty,
  [3197] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
  [3213] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_comment,
  [3229] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [3245] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_comment,
  [3261] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_comment,
  [3277] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(380), 1,
      anon_sym_primitive,
    ACTIONS(382), 1,
      anon_sym_enum,
    STATE(128), 1,
      sym_comment,
  [3293] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      sym_ident,
    ACTIONS(386), 1,
      anon_sym_let,
    STATE(129), 1,
      sym_comment,
  [3309] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_comment,
  [3325] = 5,
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
  [3341] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      sym_ident,
    STATE(132), 1,
      sym_comment,
    STATE(144), 1,
      sym_ty,
  [3357] = 5,
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
  [3373] = 5,
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
  [3389] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(260), 1,
      sym_ident,
    ACTIONS(266), 1,
      anon_sym_let,
    STATE(135), 1,
      sym_comment,
  [3405] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(136), 1,
      sym_comment,
    ACTIONS(404), 2,
      sym_ident,
      anon_sym_and,
  [3419] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(137), 1,
      sym_comment,
    ACTIONS(406), 2,
      sym_ident,
      anon_sym_and,
  [3433] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(138), 1,
      sym_comment,
    ACTIONS(408), 2,
      sym_ident,
      anon_sym_and,
  [3447] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      sym_ident,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_comment,
  [3463] = 5,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_comment,
  [3479] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_comment,
  [3492] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_comment,
  [3505] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_comment,
  [3518] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_comment,
  [3531] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      sym_ident,
    STATE(145), 1,
      sym_comment,
  [3544] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_comment,
  [3557] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym_comment,
  [3570] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_comment,
  [3583] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      sym_ident,
    STATE(149), 1,
      sym_comment,
  [3596] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_comment,
  [3609] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(438), 1,
      sym_ident,
    STATE(151), 1,
      sym_comment,
  [3622] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_comment,
  [3635] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_comment,
  [3648] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(444), 1,
      sym_ident,
    STATE(154), 1,
      sym_comment,
  [3661] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_comment,
  [3674] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_comment,
  [3687] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_comment,
  [3700] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_comment,
  [3713] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_comment,
  [3726] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_comment,
  [3739] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_comment,
  [3752] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(460), 1,
      sym_ident,
    STATE(162), 1,
      sym_comment,
  [3765] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_comment,
  [3778] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_comment,
  [3791] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_comment,
  [3804] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_comment,
  [3817] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_comment,
  [3830] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_comment,
  [3843] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_comment,
  [3856] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      sym_comment,
  [3869] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_comment,
  [3882] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym_comment,
  [3895] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym_comment,
  [3908] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comment,
  [3921] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym_comment,
  [3934] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_comment,
  [3947] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_comment,
  [3960] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_comment,
  [3973] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(494), 1,
      anon_sym_AT,
    STATE(179), 1,
      sym_comment,
  [3986] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym_comment,
  [3999] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_comment,
  [4012] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      sym_ident,
    STATE(182), 1,
      sym_comment,
  [4025] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      sym_ident,
    STATE(183), 1,
      sym_comment,
  [4038] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(504), 1,
      sym_ident,
    STATE(184), 1,
      sym_comment,
  [4051] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(506), 1,
      sym_ident,
    STATE(185), 1,
      sym_comment,
  [4064] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      sym_ident,
    STATE(186), 1,
      sym_comment,
  [4077] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_comment,
  [4090] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym_comment,
  [4103] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_comment,
  [4116] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_comment,
  [4129] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      anon_sym_AT,
    STATE(191), 1,
      sym_comment,
  [4142] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [4155] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_comment,
  [4168] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      anon_sym_AT,
    STATE(194), 1,
      sym_comment,
  [4181] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_comment,
  [4194] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_comment,
  [4207] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [4220] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      sym_ident,
    STATE(198), 1,
      sym_comment,
  [4233] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_comment,
  [4246] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_comment,
  [4259] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_comment,
  [4272] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym_comment,
  [4285] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      sym_const_ident,
    STATE(203), 1,
      sym_comment,
  [4298] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      sym_ident,
    STATE(204), 1,
      sym_comment,
  [4311] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(546), 1,
      sym_ident,
    STATE(205), 1,
      sym_comment,
  [4324] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_comment,
  [4337] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_comment,
  [4350] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_comment,
  [4363] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_comment,
  [4376] = 4,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_comment,
  [4389] = 1,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 344,
  [SMALL_STATE(11)] = 386,
  [SMALL_STATE(12)] = 428,
  [SMALL_STATE(13)] = 470,
  [SMALL_STATE(14)] = 510,
  [SMALL_STATE(15)] = 552,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 679,
  [SMALL_STATE(19)] = 724,
  [SMALL_STATE(20)] = 767,
  [SMALL_STATE(21)] = 810,
  [SMALL_STATE(22)] = 853,
  [SMALL_STATE(23)] = 896,
  [SMALL_STATE(24)] = 938,
  [SMALL_STATE(25)] = 978,
  [SMALL_STATE(26)] = 1014,
  [SMALL_STATE(27)] = 1054,
  [SMALL_STATE(28)] = 1090,
  [SMALL_STATE(29)] = 1126,
  [SMALL_STATE(30)] = 1162,
  [SMALL_STATE(31)] = 1198,
  [SMALL_STATE(32)] = 1234,
  [SMALL_STATE(33)] = 1270,
  [SMALL_STATE(34)] = 1307,
  [SMALL_STATE(35)] = 1344,
  [SMALL_STATE(36)] = 1381,
  [SMALL_STATE(37)] = 1418,
  [SMALL_STATE(38)] = 1455,
  [SMALL_STATE(39)] = 1492,
  [SMALL_STATE(40)] = 1520,
  [SMALL_STATE(41)] = 1543,
  [SMALL_STATE(42)] = 1566,
  [SMALL_STATE(43)] = 1589,
  [SMALL_STATE(44)] = 1614,
  [SMALL_STATE(45)] = 1645,
  [SMALL_STATE(46)] = 1668,
  [SMALL_STATE(47)] = 1691,
  [SMALL_STATE(48)] = 1720,
  [SMALL_STATE(49)] = 1743,
  [SMALL_STATE(50)] = 1768,
  [SMALL_STATE(51)] = 1790,
  [SMALL_STATE(52)] = 1812,
  [SMALL_STATE(53)] = 1834,
  [SMALL_STATE(54)] = 1856,
  [SMALL_STATE(55)] = 1878,
  [SMALL_STATE(56)] = 1900,
  [SMALL_STATE(57)] = 1922,
  [SMALL_STATE(58)] = 1944,
  [SMALL_STATE(59)] = 1966,
  [SMALL_STATE(60)] = 1990,
  [SMALL_STATE(61)] = 2012,
  [SMALL_STATE(62)] = 2033,
  [SMALL_STATE(63)] = 2054,
  [SMALL_STATE(64)] = 2075,
  [SMALL_STATE(65)] = 2096,
  [SMALL_STATE(66)] = 2117,
  [SMALL_STATE(67)] = 2138,
  [SMALL_STATE(68)] = 2169,
  [SMALL_STATE(69)] = 2193,
  [SMALL_STATE(70)] = 2217,
  [SMALL_STATE(71)] = 2241,
  [SMALL_STATE(72)] = 2267,
  [SMALL_STATE(73)] = 2289,
  [SMALL_STATE(74)] = 2314,
  [SMALL_STATE(75)] = 2339,
  [SMALL_STATE(76)] = 2362,
  [SMALL_STATE(77)] = 2378,
  [SMALL_STATE(78)] = 2400,
  [SMALL_STATE(79)] = 2416,
  [SMALL_STATE(80)] = 2438,
  [SMALL_STATE(81)] = 2460,
  [SMALL_STATE(82)] = 2480,
  [SMALL_STATE(83)] = 2502,
  [SMALL_STATE(84)] = 2524,
  [SMALL_STATE(85)] = 2546,
  [SMALL_STATE(86)] = 2568,
  [SMALL_STATE(87)] = 2590,
  [SMALL_STATE(88)] = 2610,
  [SMALL_STATE(89)] = 2630,
  [SMALL_STATE(90)] = 2652,
  [SMALL_STATE(91)] = 2674,
  [SMALL_STATE(92)] = 2696,
  [SMALL_STATE(93)] = 2713,
  [SMALL_STATE(94)] = 2730,
  [SMALL_STATE(95)] = 2747,
  [SMALL_STATE(96)] = 2764,
  [SMALL_STATE(97)] = 2781,
  [SMALL_STATE(98)] = 2797,
  [SMALL_STATE(99)] = 2813,
  [SMALL_STATE(100)] = 2829,
  [SMALL_STATE(101)] = 2845,
  [SMALL_STATE(102)] = 2861,
  [SMALL_STATE(103)] = 2877,
  [SMALL_STATE(104)] = 2893,
  [SMALL_STATE(105)] = 2909,
  [SMALL_STATE(106)] = 2925,
  [SMALL_STATE(107)] = 2941,
  [SMALL_STATE(108)] = 2957,
  [SMALL_STATE(109)] = 2973,
  [SMALL_STATE(110)] = 2989,
  [SMALL_STATE(111)] = 3005,
  [SMALL_STATE(112)] = 3021,
  [SMALL_STATE(113)] = 3037,
  [SMALL_STATE(114)] = 3053,
  [SMALL_STATE(115)] = 3069,
  [SMALL_STATE(116)] = 3085,
  [SMALL_STATE(117)] = 3101,
  [SMALL_STATE(118)] = 3117,
  [SMALL_STATE(119)] = 3133,
  [SMALL_STATE(120)] = 3149,
  [SMALL_STATE(121)] = 3165,
  [SMALL_STATE(122)] = 3181,
  [SMALL_STATE(123)] = 3197,
  [SMALL_STATE(124)] = 3213,
  [SMALL_STATE(125)] = 3229,
  [SMALL_STATE(126)] = 3245,
  [SMALL_STATE(127)] = 3261,
  [SMALL_STATE(128)] = 3277,
  [SMALL_STATE(129)] = 3293,
  [SMALL_STATE(130)] = 3309,
  [SMALL_STATE(131)] = 3325,
  [SMALL_STATE(132)] = 3341,
  [SMALL_STATE(133)] = 3357,
  [SMALL_STATE(134)] = 3373,
  [SMALL_STATE(135)] = 3389,
  [SMALL_STATE(136)] = 3405,
  [SMALL_STATE(137)] = 3419,
  [SMALL_STATE(138)] = 3433,
  [SMALL_STATE(139)] = 3447,
  [SMALL_STATE(140)] = 3463,
  [SMALL_STATE(141)] = 3479,
  [SMALL_STATE(142)] = 3492,
  [SMALL_STATE(143)] = 3505,
  [SMALL_STATE(144)] = 3518,
  [SMALL_STATE(145)] = 3531,
  [SMALL_STATE(146)] = 3544,
  [SMALL_STATE(147)] = 3557,
  [SMALL_STATE(148)] = 3570,
  [SMALL_STATE(149)] = 3583,
  [SMALL_STATE(150)] = 3596,
  [SMALL_STATE(151)] = 3609,
  [SMALL_STATE(152)] = 3622,
  [SMALL_STATE(153)] = 3635,
  [SMALL_STATE(154)] = 3648,
  [SMALL_STATE(155)] = 3661,
  [SMALL_STATE(156)] = 3674,
  [SMALL_STATE(157)] = 3687,
  [SMALL_STATE(158)] = 3700,
  [SMALL_STATE(159)] = 3713,
  [SMALL_STATE(160)] = 3726,
  [SMALL_STATE(161)] = 3739,
  [SMALL_STATE(162)] = 3752,
  [SMALL_STATE(163)] = 3765,
  [SMALL_STATE(164)] = 3778,
  [SMALL_STATE(165)] = 3791,
  [SMALL_STATE(166)] = 3804,
  [SMALL_STATE(167)] = 3817,
  [SMALL_STATE(168)] = 3830,
  [SMALL_STATE(169)] = 3843,
  [SMALL_STATE(170)] = 3856,
  [SMALL_STATE(171)] = 3869,
  [SMALL_STATE(172)] = 3882,
  [SMALL_STATE(173)] = 3895,
  [SMALL_STATE(174)] = 3908,
  [SMALL_STATE(175)] = 3921,
  [SMALL_STATE(176)] = 3934,
  [SMALL_STATE(177)] = 3947,
  [SMALL_STATE(178)] = 3960,
  [SMALL_STATE(179)] = 3973,
  [SMALL_STATE(180)] = 3986,
  [SMALL_STATE(181)] = 3999,
  [SMALL_STATE(182)] = 4012,
  [SMALL_STATE(183)] = 4025,
  [SMALL_STATE(184)] = 4038,
  [SMALL_STATE(185)] = 4051,
  [SMALL_STATE(186)] = 4064,
  [SMALL_STATE(187)] = 4077,
  [SMALL_STATE(188)] = 4090,
  [SMALL_STATE(189)] = 4103,
  [SMALL_STATE(190)] = 4116,
  [SMALL_STATE(191)] = 4129,
  [SMALL_STATE(192)] = 4142,
  [SMALL_STATE(193)] = 4155,
  [SMALL_STATE(194)] = 4168,
  [SMALL_STATE(195)] = 4181,
  [SMALL_STATE(196)] = 4194,
  [SMALL_STATE(197)] = 4207,
  [SMALL_STATE(198)] = 4220,
  [SMALL_STATE(199)] = 4233,
  [SMALL_STATE(200)] = 4246,
  [SMALL_STATE(201)] = 4259,
  [SMALL_STATE(202)] = 4272,
  [SMALL_STATE(203)] = 4285,
  [SMALL_STATE(204)] = 4298,
  [SMALL_STATE(205)] = 4311,
  [SMALL_STATE(206)] = 4324,
  [SMALL_STATE(207)] = 4337,
  [SMALL_STATE(208)] = 4350,
  [SMALL_STATE(209)] = 4363,
  [SMALL_STATE(210)] = 4376,
  [SMALL_STATE(211)] = 4389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 4, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 23),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 14),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 31),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 30),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0), REDUCE(sym__rule_priority, 1, 0, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_priority, 1, 0, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_modifier, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat1, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(57),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat2, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, 0, 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 1, 0, 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, 0, 25),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, 0, 25),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, 0, 25),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, 0, 25),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 16),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 16),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 17),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 17),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 5, 0, 6),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 5, 0, 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 7),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 7),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 20),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 20),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 21),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 21),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 22),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 22),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 11),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 11),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 24),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 24),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 9),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 26),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 26),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 27),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 27),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 15),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 15),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 4, 0, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 4, 0, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 13),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 13),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 29),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 29),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_field, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_field, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 5, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 5, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4, 0, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 4, 0, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4, 0, 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 4, 0, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__def, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_repeat2, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat2, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 28),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 28),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_const_decl, 4, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 14),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 4, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 30),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 31),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_constructor_decl, 3, 0, 8),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_primitive, 4, 0, 18),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 4, 0, 19),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor_decl, 4, 0, 12),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 23),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor_decl, 3, 0, 8),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
