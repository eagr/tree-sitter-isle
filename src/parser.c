#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 3
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_AT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_and = 12,
  anon_sym_RPAREN = 13,
  anon_sym_pragma = 14,
  anon_sym_type = 15,
  anon_sym_extern = 16,
  anon_sym_nodebug = 17,
  anon_sym_primitive = 18,
  anon_sym_enum = 19,
  anon_sym_decl = 20,
  anon_sym_pure = 21,
  anon_sym_multi = 22,
  anon_sym_partial = 23,
  anon_sym_rule = 24,
  anon_sym_if_DASHlet = 25,
  anon_sym_if = 26,
  anon_sym_let = 27,
  anon_sym_constructor = 28,
  anon_sym_extractor = 29,
  anon_sym_infallible = 30,
  anon_sym_const = 31,
  anon_sym_convert = 32,
  sym_comment = 33,
  sym_source_file = 34,
  sym__def = 35,
  sym_ty = 36,
  sym_int = 37,
  sym_bool = 38,
  sym__pattern = 39,
  sym_pragma = 40,
  sym_type = 41,
  sym__type_opt = 42,
  sym__type_body = 43,
  sym__type_body_primitive = 44,
  sym__type_body_enum = 45,
  sym__enum_variant = 46,
  sym_decl = 47,
  sym__decl_opt = 48,
  sym_rule = 49,
  sym__rule_name = 50,
  sym__rule_priority = 51,
  sym__stmt = 52,
  sym_if_let = 53,
  sym_if = 54,
  sym__expr = 55,
  sym_let = 56,
  sym__let_binding = 57,
  sym_extractor = 58,
  sym_extern = 59,
  sym_convert = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym__pattern_repeat1 = 62,
  aux_sym__type_body_enum_repeat1 = 63,
  aux_sym_decl_repeat1 = 64,
  aux_sym_rule_repeat1 = 65,
  aux_sym__expr_repeat1 = 66,
  aux_sym_let_repeat1 = 67,
  aux_sym_extractor_repeat1 = 68,
  alias_sym__extractor_name = 69,
  anon_alias_sym__rule_name = 70,
  anon_alias_sym__rule_priority = 71,
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
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_and] = "and",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_if_DASHlet] = "if-let",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_constructor] = "constructor",
  [anon_sym_extractor] = "extractor",
  [anon_sym_infallible] = "infallible",
  [anon_sym_const] = "const",
  [anon_sym_convert] = "convert",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__def] = "_def",
  [sym_ty] = "ty",
  [sym_int] = "int",
  [sym_bool] = "bool",
  [sym__pattern] = "_pattern",
  [sym_pragma] = "pragma",
  [sym_type] = "type",
  [sym__type_opt] = "_type_opt",
  [sym__type_body] = "_type_body",
  [sym__type_body_primitive] = "_type_body_primitive",
  [sym__type_body_enum] = "_type_body_enum",
  [sym__enum_variant] = "_enum_variant",
  [sym_decl] = "decl",
  [sym__decl_opt] = "_decl_opt",
  [sym_rule] = "rule",
  [sym__rule_name] = "_rule_name",
  [sym__rule_priority] = "_rule_priority",
  [sym__stmt] = "_stmt",
  [sym_if_let] = "if_let",
  [sym_if] = "if",
  [sym__expr] = "_expr",
  [sym_let] = "let",
  [sym__let_binding] = "_let_binding",
  [sym_extractor] = "extractor",
  [sym_extern] = "extern",
  [sym_convert] = "convert",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
  [aux_sym__type_body_enum_repeat1] = "_type_body_enum_repeat1",
  [aux_sym_decl_repeat1] = "decl_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym__expr_repeat1] = "_expr_repeat1",
  [aux_sym_let_repeat1] = "let_repeat1",
  [aux_sym_extractor_repeat1] = "extractor_repeat1",
  [alias_sym__extractor_name] = "_extractor_name",
  [anon_alias_sym__rule_name] = "_rule_name",
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
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_if_DASHlet] = anon_sym_if_DASHlet,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_extractor] = anon_sym_extractor,
  [anon_sym_infallible] = anon_sym_infallible,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_convert] = anon_sym_convert,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__def] = sym__def,
  [sym_ty] = sym_ty,
  [sym_int] = sym_int,
  [sym_bool] = sym_bool,
  [sym__pattern] = sym__pattern,
  [sym_pragma] = sym_pragma,
  [sym_type] = sym_type,
  [sym__type_opt] = sym__type_opt,
  [sym__type_body] = sym__type_body,
  [sym__type_body_primitive] = sym__type_body_primitive,
  [sym__type_body_enum] = sym__type_body_enum,
  [sym__enum_variant] = sym__enum_variant,
  [sym_decl] = sym_decl,
  [sym__decl_opt] = sym__decl_opt,
  [sym_rule] = sym_rule,
  [sym__rule_name] = sym__rule_name,
  [sym__rule_priority] = sym__rule_priority,
  [sym__stmt] = sym__stmt,
  [sym_if_let] = sym_if_let,
  [sym_if] = sym_if,
  [sym__expr] = sym__expr,
  [sym_let] = sym_let,
  [sym__let_binding] = sym__let_binding,
  [sym_extractor] = sym_extractor,
  [sym_extern] = sym_extern,
  [sym_convert] = sym_convert,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__pattern_repeat1] = aux_sym__pattern_repeat1,
  [aux_sym__type_body_enum_repeat1] = aux_sym__type_body_enum_repeat1,
  [aux_sym_decl_repeat1] = aux_sym_decl_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym__expr_repeat1] = aux_sym__expr_repeat1,
  [aux_sym_let_repeat1] = aux_sym_let_repeat1,
  [aux_sym_extractor_repeat1] = aux_sym_extractor_repeat1,
  [alias_sym__extractor_name] = alias_sym__extractor_name,
  [anon_alias_sym__rule_name] = anon_alias_sym__rule_name,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_if_DASHlet] = {
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
  [sym_comment] = {
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
  [sym__pattern] = {
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
  [sym__type_opt] = {
    .visible = false,
    .named = true,
  },
  [sym__type_body] = {
    .visible = false,
    .named = true,
  },
  [sym__type_body_primitive] = {
    .visible = false,
    .named = true,
  },
  [sym__type_body_enum] = {
    .visible = false,
    .named = true,
  },
  [sym__enum_variant] = {
    .visible = false,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__decl_opt] = {
    .visible = false,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__rule_name] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_priority] = {
    .visible = false,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
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
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym__let_binding] = {
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
  [sym_convert] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_body_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extractor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym__extractor_name] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym__rule_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym__rule_priority] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym__rule_name,
  },
  [2] = {
    [0] = anon_alias_sym__rule_priority,
  },
  [3] = {
    [0] = sym_ty,
  },
  [4] = {
    [1] = alias_sym__extractor_name,
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 17,
  [20] = 10,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 28,
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
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 41,
  [54] = 54,
  [55] = 55,
  [56] = 43,
  [57] = 57,
  [58] = 42,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 75,
  [82] = 64,
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
  [117] = 88,
  [118] = 84,
  [119] = 119,
  [120] = 84,
  [121] = 121,
  [122] = 42,
  [123] = 123,
  [124] = 44,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 43,
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
  [143] = 49,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 50,
  [151] = 52,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 54,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 51,
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
  [174] = 171,
  [175] = 175,
  [176] = 131,
  [177] = 144,
  [178] = 178,
  [179] = 179,
  [180] = 41,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 169,
  [187] = 171,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '$', 106,
        '(', 115,
        ')', 116,
        '-', 6,
        '0', 108,
        ';', 136,
        '@', 114,
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
        '(', 115,
        ')', 116,
        '-', 6,
        '0', 108,
        ';', 136,
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
        '(', 115,
        '-', 6,
        '0', 108,
        ';', 136,
        '@', 114,
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
      if (lookahead == ';') ADVANCE(136);
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
      if (lookahead == ';') ADVANCE(136);
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
      if (lookahead == ')') ADVANCE(135);
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
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(119);
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
      if (lookahead == 'm') ADVANCE(123);
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
      if (lookahead == 'n') ADVANCE(117);
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
      if (lookahead == 't') ADVANCE(125);
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
        '(', 115,
        ')', 116,
        ';', 136,
        '@', 113,
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
        '@', 114,
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
        '@', 114,
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
      if (lookahead == 'e') ADVANCE(122);
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
      if (lookahead == 'f') ADVANCE(127);
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
      if (lookahead == 'g') ADVANCE(120);
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
      if (lookahead == 'm') ADVANCE(124);
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
      if (lookahead == 'n') ADVANCE(118);
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
      if (lookahead == 't') ADVANCE(126);
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
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ';') ADVANCE(8);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_nodebug);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_nodebug);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_primitive);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_primitive);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 127:
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
    case 128:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(23);
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
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
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
  [11] = {.lex_state = 1},
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
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 51},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 1},
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
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 51},
  [68] = {.lex_state = 51},
  [69] = {.lex_state = 51},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 51},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 51},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 51},
  [81] = {.lex_state = 51},
  [82] = {.lex_state = 51},
  [83] = {.lex_state = 51},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 51},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 51},
  [93] = {.lex_state = 51},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 51},
  [96] = {.lex_state = 51},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 51},
  [101] = {.lex_state = 51},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 51},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 51},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 51},
  [109] = {.lex_state = 51},
  [110] = {.lex_state = 51},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 51},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 51},
  [122] = {.lex_state = 51},
  [123] = {.lex_state = 51},
  [124] = {.lex_state = 51},
  [125] = {.lex_state = 51},
  [126] = {.lex_state = 51},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 51},
  [130] = {.lex_state = 51},
  [131] = {.lex_state = 51},
  [132] = {.lex_state = 51},
  [133] = {.lex_state = 51},
  [134] = {.lex_state = 51},
  [135] = {.lex_state = 51},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 51},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 51},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 51},
  [145] = {.lex_state = 51},
  [146] = {.lex_state = 51},
  [147] = {.lex_state = 51},
  [148] = {.lex_state = 51},
  [149] = {.lex_state = 51},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 51},
  [155] = {.lex_state = 51},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 51},
  [161] = {.lex_state = 51},
  [162] = {.lex_state = 51},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 51},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 51},
  [167] = {.lex_state = 51},
  [168] = {.lex_state = 51},
  [169] = {.lex_state = 51},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 51},
  [172] = {.lex_state = 51},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 51},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 51},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 51},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 51},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 51},
  [186] = {.lex_state = 51},
  [187] = {.lex_state = 51},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_if_DASHlet] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_extractor] = ACTIONS(1),
    [anon_sym_infallible] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_convert] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(160),
    [sym__def] = STATE(39),
    [sym_pragma] = STATE(39),
    [sym_type] = STATE(39),
    [sym_decl] = STATE(39),
    [sym_rule] = STATE(39),
    [sym_extractor] = STATE(39),
    [sym_extern] = STATE(39),
    [sym_convert] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(3), 4,
      sym__stmt,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    STATE(166), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [33] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(32), 4,
      sym__stmt,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    STATE(172), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [66] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(5), 4,
      sym__stmt,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    STATE(172), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [99] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(32), 4,
      sym__stmt,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    STATE(133), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 4,
      sym__stmt,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    STATE(133), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(32), 4,
      sym__stmt,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    STATE(183), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(16), 4,
      sym_int,
      sym_bool,
      sym__pattern,
      aux_sym__pattern_repeat1,
  [231] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(16), 4,
      sym_int,
      sym_bool,
      sym__pattern,
      aux_sym__pattern_repeat1,
  [264] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(8), 4,
      sym_int,
      sym_bool,
      sym__pattern,
      aux_sym__pattern_repeat1,
  [297] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(11), 5,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
      aux_sym__expr_repeat1,
  [328] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(13), 4,
      sym_int,
      sym_bool,
      sym__pattern,
      aux_sym__pattern_repeat1,
  [361] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(16), 4,
      sym_int,
      sym_bool,
      sym__pattern,
      aux_sym__pattern_repeat1,
  [394] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(17), 5,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
      aux_sym__expr_repeat1,
  [425] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__rule_name,
    STATE(36), 1,
      sym__rule_priority,
    STATE(47), 1,
      sym_int,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(2), 2,
      sym_bool,
      sym__pattern,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [462] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(16), 4,
      sym_int,
      sym_bool,
      sym__pattern,
      aux_sym__pattern_repeat1,
  [495] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(11), 5,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
      aux_sym__expr_repeat1,
  [526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(19), 5,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
      aux_sym__expr_repeat1,
  [557] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(11), 5,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
      aux_sym__expr_repeat1,
  [588] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 4,
      sym_int,
      sym_bool,
      sym__pattern,
      aux_sym__pattern_repeat1,
  [621] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_ident,
    STATE(27), 1,
      sym__rule_priority,
    STATE(47), 1,
      sym_int,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(4), 2,
      sym_bool,
      sym__pattern,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [655] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      aux_sym_extractor_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(162), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [687] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      aux_sym_extractor_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(175), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [719] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(177), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(126), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(168), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [773] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(144), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_ident,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(6), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [829] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(131), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(134), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(149), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(129), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [912] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_ident,
    ACTIONS(41), 2,
      sym_const_ident,
      sym_wildcard,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(32), 4,
      sym__stmt,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(138), 8,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
  [964] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(43), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(29), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_ident,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(25), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(125), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [1049] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_ident,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      sym_const_ident,
      sym_wildcard,
    STATE(4), 3,
      sym_int,
      sym_bool,
      sym__pattern,
    ACTIONS(65), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [1078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(13), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(176), 4,
      sym_int,
      sym_bool,
      sym__expr,
      sym_let,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_AT,
    ACTIONS(149), 10,
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
  [1124] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(46), 9,
      sym__def,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym_extern,
      sym_convert,
      aux_sym_source_file_repeat1,
  [1145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(155), 10,
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
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 11,
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
  [1181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 11,
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
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 11,
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
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 11,
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
  [1232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_ident,
    STATE(45), 1,
      aux_sym_extractor_repeat1,
    ACTIONS(170), 9,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      sym_wildcard,
      anon_sym_LPAREN,
  [1253] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(46), 9,
      sym__def,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym_extern,
      sym_convert,
      aux_sym_source_file_repeat1,
  [1274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_wildcard,
    ACTIONS(177), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [1292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 10,
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
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 10,
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
  [1324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 10,
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
  [1340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 10,
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
  [1356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 10,
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
  [1372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 10,
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
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 10,
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
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [1419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      sym_ident,
      sym_const_ident,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LPAREN,
  [1464] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__type_opt,
    ACTIONS(198), 2,
      anon_sym_extern,
      anon_sym_nodebug,
    STATE(132), 3,
      sym__type_body,
      sym__type_body_primitive,
      sym__type_body_enum,
  [1483] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(202), 1,
      anon_sym_pragma,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(206), 1,
      anon_sym_extern,
    ACTIONS(208), 1,
      anon_sym_decl,
    ACTIONS(210), 1,
      anon_sym_rule,
    ACTIONS(212), 1,
      anon_sym_convert,
  [1508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_ident,
    STATE(165), 1,
      sym__decl_opt,
    ACTIONS(216), 3,
      anon_sym_pure,
      anon_sym_multi,
      anon_sym_partial,
  [1523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_ident,
    STATE(63), 1,
      sym__decl_opt,
    ACTIONS(220), 3,
      anon_sym_pure,
      anon_sym_multi,
      anon_sym_partial,
  [1538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_ident,
    STATE(61), 1,
      sym__decl_opt,
    ACTIONS(224), 3,
      anon_sym_pure,
      anon_sym_multi,
      anon_sym_partial,
  [1553] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(68), 2,
      sym__let_binding,
      aux_sym_let_repeat1,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(71), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(74), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1595] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(69), 2,
      sym__enum_variant,
      aux_sym__type_body_enum_repeat1,
  [1609] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(68), 2,
      sym__let_binding,
      aux_sym_let_repeat1,
  [1623] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(69), 2,
      sym__enum_variant,
      aux_sym__type_body_enum_repeat1,
  [1637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_ident,
    ACTIONS(252), 1,
      anon_sym_if_DASHlet,
    ACTIONS(254), 1,
      anon_sym_if,
    ACTIONS(256), 1,
      anon_sym_let,
  [1653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_ident,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(71), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(78), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(71), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(71), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1709] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(64), 2,
      sym__let_binding,
      aux_sym_let_repeat1,
  [1723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(73), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1737] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(67), 2,
      sym__enum_variant,
      aux_sym__type_body_enum_repeat1,
  [1751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(71), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(65), 2,
      sym_ty,
      aux_sym_decl_repeat1,
  [1779] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(154), 3,
      sym__type_body,
      sym__type_body_primitive,
      sym__type_body_enum,
  [1791] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym__let_binding,
      aux_sym_let_repeat1,
  [1805] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(68), 2,
      sym__let_binding,
      aux_sym_let_repeat1,
  [1819] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_constructor,
    ACTIONS(279), 1,
      anon_sym_extractor,
    ACTIONS(281), 1,
      anon_sym_const,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_ident,
      anon_sym_and,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    STATE(152), 1,
      sym_ty,
  [1850] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_primitive,
    ACTIONS(289), 1,
      anon_sym_enum,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_ident,
    ACTIONS(293), 1,
      anon_sym_infallible,
  [1870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_ident,
    ACTIONS(297), 1,
      anon_sym_let,
  [1880] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
  [1890] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      anon_sym_if_DASHlet,
  [1900] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [1910] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [1920] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
  [1930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    STATE(126), 1,
      sym_ty,
  [1940] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
  [1950] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
  [1960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    STATE(140), 1,
      sym_ty,
  [1970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    STATE(29), 1,
      sym_ty,
  [1980] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
  [1990] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
  [2000] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    STATE(145), 1,
      sym_ty,
  [2020] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
  [2030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    STATE(148), 1,
      sym_ty,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
  [2050] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
  [2060] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [2070] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
  [2080] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [2090] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
  [2100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    STATE(130), 1,
      sym_ty,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_ident,
    STATE(147), 1,
      sym_ty,
  [2120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    STATE(128), 1,
      sym_ty,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
    STATE(113), 1,
      sym_ty,
  [2140] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
  [2150] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_ident,
    ACTIONS(256), 1,
      anon_sym_let,
  [2170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      sym_ident,
      anon_sym_and,
  [2178] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
  [2188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      sym_ident,
      anon_sym_and,
  [2196] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
  [2206] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [2213] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [2220] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
  [2227] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [2234] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
  [2248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_ident,
  [2255] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
  [2262] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [2269] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [2276] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2283] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [2290] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_const_ident,
  [2297] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
  [2304] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [2311] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [2318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_ident,
  [2325] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [2332] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [2339] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
  [2346] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
  [2353] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
  [2360] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
  [2367] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [2374] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
  [2381] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [2388] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
  [2395] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [2402] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [2409] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [2416] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [2423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_ident,
  [2430] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [2437] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
  [2444] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [2451] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_ident,
  [2465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_ident,
  [2472] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
  [2479] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [2486] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [2493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_ident,
  [2500] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
  [2507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_ident,
  [2514] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
  [2521] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
  [2528] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [2535] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
  [2542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_ident,
  [2549] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_AT,
  [2556] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [2563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_ident,
  [2570] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_AT,
  [2577] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [2584] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [2591] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [2598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_ident,
  [2605] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [2612] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [2619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_ident,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_ident,
  [2633] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [2640] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
  [2647] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [2654] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
  [2661] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 425,
  [SMALL_STATE(16)] = 462,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 526,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 588,
  [SMALL_STATE(21)] = 621,
  [SMALL_STATE(22)] = 655,
  [SMALL_STATE(23)] = 687,
  [SMALL_STATE(24)] = 719,
  [SMALL_STATE(25)] = 746,
  [SMALL_STATE(26)] = 773,
  [SMALL_STATE(27)] = 800,
  [SMALL_STATE(28)] = 829,
  [SMALL_STATE(29)] = 856,
  [SMALL_STATE(30)] = 883,
  [SMALL_STATE(31)] = 912,
  [SMALL_STATE(32)] = 941,
  [SMALL_STATE(33)] = 964,
  [SMALL_STATE(34)] = 993,
  [SMALL_STATE(35)] = 1022,
  [SMALL_STATE(36)] = 1049,
  [SMALL_STATE(37)] = 1078,
  [SMALL_STATE(38)] = 1105,
  [SMALL_STATE(39)] = 1124,
  [SMALL_STATE(40)] = 1145,
  [SMALL_STATE(41)] = 1164,
  [SMALL_STATE(42)] = 1181,
  [SMALL_STATE(43)] = 1198,
  [SMALL_STATE(44)] = 1215,
  [SMALL_STATE(45)] = 1232,
  [SMALL_STATE(46)] = 1253,
  [SMALL_STATE(47)] = 1274,
  [SMALL_STATE(48)] = 1292,
  [SMALL_STATE(49)] = 1308,
  [SMALL_STATE(50)] = 1324,
  [SMALL_STATE(51)] = 1340,
  [SMALL_STATE(52)] = 1356,
  [SMALL_STATE(53)] = 1372,
  [SMALL_STATE(54)] = 1388,
  [SMALL_STATE(55)] = 1404,
  [SMALL_STATE(56)] = 1419,
  [SMALL_STATE(57)] = 1434,
  [SMALL_STATE(58)] = 1449,
  [SMALL_STATE(59)] = 1464,
  [SMALL_STATE(60)] = 1483,
  [SMALL_STATE(61)] = 1508,
  [SMALL_STATE(62)] = 1523,
  [SMALL_STATE(63)] = 1538,
  [SMALL_STATE(64)] = 1553,
  [SMALL_STATE(65)] = 1567,
  [SMALL_STATE(66)] = 1581,
  [SMALL_STATE(67)] = 1595,
  [SMALL_STATE(68)] = 1609,
  [SMALL_STATE(69)] = 1623,
  [SMALL_STATE(70)] = 1637,
  [SMALL_STATE(71)] = 1653,
  [SMALL_STATE(72)] = 1667,
  [SMALL_STATE(73)] = 1681,
  [SMALL_STATE(74)] = 1695,
  [SMALL_STATE(75)] = 1709,
  [SMALL_STATE(76)] = 1723,
  [SMALL_STATE(77)] = 1737,
  [SMALL_STATE(78)] = 1751,
  [SMALL_STATE(79)] = 1765,
  [SMALL_STATE(80)] = 1779,
  [SMALL_STATE(81)] = 1791,
  [SMALL_STATE(82)] = 1805,
  [SMALL_STATE(83)] = 1819,
  [SMALL_STATE(84)] = 1832,
  [SMALL_STATE(85)] = 1840,
  [SMALL_STATE(86)] = 1850,
  [SMALL_STATE(87)] = 1860,
  [SMALL_STATE(88)] = 1870,
  [SMALL_STATE(89)] = 1880,
  [SMALL_STATE(90)] = 1890,
  [SMALL_STATE(91)] = 1900,
  [SMALL_STATE(92)] = 1910,
  [SMALL_STATE(93)] = 1920,
  [SMALL_STATE(94)] = 1930,
  [SMALL_STATE(95)] = 1940,
  [SMALL_STATE(96)] = 1950,
  [SMALL_STATE(97)] = 1960,
  [SMALL_STATE(98)] = 1970,
  [SMALL_STATE(99)] = 1980,
  [SMALL_STATE(100)] = 1990,
  [SMALL_STATE(101)] = 2000,
  [SMALL_STATE(102)] = 2010,
  [SMALL_STATE(103)] = 2020,
  [SMALL_STATE(104)] = 2030,
  [SMALL_STATE(105)] = 2040,
  [SMALL_STATE(106)] = 2050,
  [SMALL_STATE(107)] = 2060,
  [SMALL_STATE(108)] = 2070,
  [SMALL_STATE(109)] = 2080,
  [SMALL_STATE(110)] = 2090,
  [SMALL_STATE(111)] = 2100,
  [SMALL_STATE(112)] = 2110,
  [SMALL_STATE(113)] = 2120,
  [SMALL_STATE(114)] = 2130,
  [SMALL_STATE(115)] = 2140,
  [SMALL_STATE(116)] = 2150,
  [SMALL_STATE(117)] = 2160,
  [SMALL_STATE(118)] = 2170,
  [SMALL_STATE(119)] = 2178,
  [SMALL_STATE(120)] = 2188,
  [SMALL_STATE(121)] = 2196,
  [SMALL_STATE(122)] = 2206,
  [SMALL_STATE(123)] = 2213,
  [SMALL_STATE(124)] = 2220,
  [SMALL_STATE(125)] = 2227,
  [SMALL_STATE(126)] = 2234,
  [SMALL_STATE(127)] = 2241,
  [SMALL_STATE(128)] = 2248,
  [SMALL_STATE(129)] = 2255,
  [SMALL_STATE(130)] = 2262,
  [SMALL_STATE(131)] = 2269,
  [SMALL_STATE(132)] = 2276,
  [SMALL_STATE(133)] = 2283,
  [SMALL_STATE(134)] = 2290,
  [SMALL_STATE(135)] = 2297,
  [SMALL_STATE(136)] = 2304,
  [SMALL_STATE(137)] = 2311,
  [SMALL_STATE(138)] = 2318,
  [SMALL_STATE(139)] = 2325,
  [SMALL_STATE(140)] = 2332,
  [SMALL_STATE(141)] = 2339,
  [SMALL_STATE(142)] = 2346,
  [SMALL_STATE(143)] = 2353,
  [SMALL_STATE(144)] = 2360,
  [SMALL_STATE(145)] = 2367,
  [SMALL_STATE(146)] = 2374,
  [SMALL_STATE(147)] = 2381,
  [SMALL_STATE(148)] = 2388,
  [SMALL_STATE(149)] = 2395,
  [SMALL_STATE(150)] = 2402,
  [SMALL_STATE(151)] = 2409,
  [SMALL_STATE(152)] = 2416,
  [SMALL_STATE(153)] = 2423,
  [SMALL_STATE(154)] = 2430,
  [SMALL_STATE(155)] = 2437,
  [SMALL_STATE(156)] = 2444,
  [SMALL_STATE(157)] = 2451,
  [SMALL_STATE(158)] = 2458,
  [SMALL_STATE(159)] = 2465,
  [SMALL_STATE(160)] = 2472,
  [SMALL_STATE(161)] = 2479,
  [SMALL_STATE(162)] = 2486,
  [SMALL_STATE(163)] = 2493,
  [SMALL_STATE(164)] = 2500,
  [SMALL_STATE(165)] = 2507,
  [SMALL_STATE(166)] = 2514,
  [SMALL_STATE(167)] = 2521,
  [SMALL_STATE(168)] = 2528,
  [SMALL_STATE(169)] = 2535,
  [SMALL_STATE(170)] = 2542,
  [SMALL_STATE(171)] = 2549,
  [SMALL_STATE(172)] = 2556,
  [SMALL_STATE(173)] = 2563,
  [SMALL_STATE(174)] = 2570,
  [SMALL_STATE(175)] = 2577,
  [SMALL_STATE(176)] = 2584,
  [SMALL_STATE(177)] = 2591,
  [SMALL_STATE(178)] = 2598,
  [SMALL_STATE(179)] = 2605,
  [SMALL_STATE(180)] = 2612,
  [SMALL_STATE(181)] = 2619,
  [SMALL_STATE(182)] = 2626,
  [SMALL_STATE(183)] = 2633,
  [SMALL_STATE(184)] = 2640,
  [SMALL_STATE(185)] = 2647,
  [SMALL_STATE(186)] = 2654,
  [SMALL_STATE(187)] = 2661,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_name, 1, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0), REDUCE(sym__rule_priority, 1, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_priority, 1, 0, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type_body_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_body_enum_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 7, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 7, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 6, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 6, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 10, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 10, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_variant, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_variant, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 11, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 11, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__let_binding, 5, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__let_binding, 5, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 4, 0, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 4, 0, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 5, 0, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 5, 0, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_body_enum, 6, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_body_primitive, 4, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_body_enum, 4, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_body_enum, 7, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
