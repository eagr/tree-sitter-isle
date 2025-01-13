#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 330
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 171
#define ALIAS_COUNT 1
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 32

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
  sym_unit = 34,
  aux_sym_enum_variant_token1 = 35,
  anon_sym_bv = 36,
  aux_sym_bv_const_token1 = 37,
  aux_sym_bv_const_token2 = 38,
  anon_sym_args = 39,
  anon_sym_ret = 40,
  anon_sym_canon = 41,
  anon_sym_model = 42,
  anon_sym_Bool = 43,
  anon_sym_Int = 44,
  anon_sym_Unit = 45,
  anon_sym_form = 46,
  anon_sym_spec = 47,
  anon_sym_provide = 48,
  anon_sym_require = 49,
  anon_sym_switch = 50,
  anon_sym_EQ_GT = 51,
  anon_sym_LT_EQ = 52,
  anon_sym_GT_EQ = 53,
  anon_sym_LT = 54,
  anon_sym_GT = 55,
  anon_sym_EQ = 56,
  anon_sym_not = 57,
  anon_sym_or = 58,
  anon_sym_bvand = 59,
  anon_sym_bvnot = 60,
  anon_sym_bvor = 61,
  anon_sym_bvxor = 62,
  anon_sym_bvadd = 63,
  anon_sym_bvsub = 64,
  anon_sym_bvmul = 65,
  anon_sym_bvneg = 66,
  anon_sym_bvudiv = 67,
  anon_sym_bvurem = 68,
  anon_sym_bvsdiv = 69,
  anon_sym_bvsrem = 70,
  anon_sym_bvuaddo = 71,
  anon_sym_bvsaddo = 72,
  anon_sym_bvusubo = 73,
  anon_sym_bvssubo = 74,
  anon_sym_bvshl = 75,
  anon_sym_bvlshr = 76,
  anon_sym_bvashr = 77,
  anon_sym_bvule = 78,
  anon_sym_bvult = 79,
  anon_sym_bvugt = 80,
  anon_sym_bvuge = 81,
  anon_sym_bvslt = 82,
  anon_sym_bvsle = 83,
  anon_sym_bvsgt = 84,
  anon_sym_bvsge = 85,
  anon_sym_rotl = 86,
  anon_sym_rotr = 87,
  anon_sym_extract = 88,
  anon_sym_concat = 89,
  anon_sym_conv_to = 90,
  anon_sym_int2bv = 91,
  anon_sym_bv2int = 92,
  anon_sym_zero_ext = 93,
  anon_sym_sign_ext = 94,
  anon_sym_widthof = 95,
  anon_sym_subs = 96,
  anon_sym_popcnt = 97,
  anon_sym_rev = 98,
  anon_sym_cls = 99,
  anon_sym_clz = 100,
  anon_sym_load_effect = 101,
  anon_sym_store_effect = 102,
  anon_sym_instantiate = 103,
  sym_source = 104,
  sym__def = 105,
  sym_bool = 106,
  sym_int = 107,
  sym_ty = 108,
  sym_if_let = 109,
  sym_if = 110,
  sym_let = 111,
  sym_let_binding = 112,
  sym__pattern = 113,
  sym_pattern_bind = 114,
  sym_pattern_and = 115,
  sym_pattern_term = 116,
  sym__expr = 117,
  sym_expr_term = 118,
  sym_pragma = 119,
  sym_type = 120,
  sym_type_primitive = 121,
  sym_type_enum = 122,
  sym_type_enum_variant = 123,
  sym_type_enum_variant_field = 124,
  sym_decl = 125,
  sym_decl_params = 126,
  sym_rule = 127,
  sym_extractor = 128,
  sym__extern = 129,
  sym_extern_const = 130,
  sym_extern_constructor = 131,
  sym_extern_extractor = 132,
  sym_convert = 133,
  sym_enum_variant = 134,
  sym_bv_ty = 135,
  sym_bv_const = 136,
  sym_sig = 137,
  sym_sig_args = 138,
  sym_sig_ret = 139,
  sym_sig_canon = 140,
  sym_model = 141,
  sym_model_type = 142,
  sym_model_ty = 143,
  sym_model_enum = 144,
  sym_model_enum_variant = 145,
  sym_form = 146,
  sym_spec = 147,
  sym_spec_term = 148,
  sym_provide = 149,
  sym_require = 150,
  sym__spec_expr = 151,
  sym_switch = 152,
  sym_spec_expr_pair = 153,
  sym_spec_operation = 154,
  sym__spec_op = 155,
  sym_instantiate = 156,
  aux_sym_source_repeat1 = 157,
  aux_sym_let_repeat1 = 158,
  aux_sym_pattern_and_repeat1 = 159,
  aux_sym_expr_term_repeat1 = 160,
  aux_sym_type_enum_repeat1 = 161,
  aux_sym_type_enum_variant_repeat1 = 162,
  aux_sym_decl_params_repeat1 = 163,
  aux_sym_rule_repeat1 = 164,
  aux_sym_extractor_repeat1 = 165,
  aux_sym_sig_args_repeat1 = 166,
  aux_sym_model_enum_repeat1 = 167,
  aux_sym_form_repeat1 = 168,
  aux_sym_provide_repeat1 = 169,
  aux_sym_switch_repeat1 = 170,
  anon_alias_sym_ty = 171,
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
  [sym_unit] = "unit",
  [aux_sym_enum_variant_token1] = "enum_variant_token1",
  [anon_sym_bv] = "bv",
  [aux_sym_bv_const_token1] = "bv_const_token1",
  [aux_sym_bv_const_token2] = "bv_const_token2",
  [anon_sym_args] = "args",
  [anon_sym_ret] = "ret",
  [anon_sym_canon] = "canon",
  [anon_sym_model] = "model",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Int] = "Int",
  [anon_sym_Unit] = "Unit",
  [anon_sym_form] = "form",
  [anon_sym_spec] = "spec",
  [anon_sym_provide] = "provide",
  [anon_sym_require] = "require",
  [anon_sym_switch] = "switch",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_not] = "not",
  [anon_sym_or] = "or",
  [anon_sym_bvand] = "bvand",
  [anon_sym_bvnot] = "bvnot",
  [anon_sym_bvor] = "bvor",
  [anon_sym_bvxor] = "bvxor",
  [anon_sym_bvadd] = "bvadd",
  [anon_sym_bvsub] = "bvsub",
  [anon_sym_bvmul] = "bvmul",
  [anon_sym_bvneg] = "bvneg",
  [anon_sym_bvudiv] = "bvudiv",
  [anon_sym_bvurem] = "bvurem",
  [anon_sym_bvsdiv] = "bvsdiv",
  [anon_sym_bvsrem] = "bvsrem",
  [anon_sym_bvuaddo] = "bvuaddo",
  [anon_sym_bvsaddo] = "bvsaddo",
  [anon_sym_bvusubo] = "bvusubo",
  [anon_sym_bvssubo] = "bvssubo",
  [anon_sym_bvshl] = "bvshl",
  [anon_sym_bvlshr] = "bvlshr",
  [anon_sym_bvashr] = "bvashr",
  [anon_sym_bvule] = "bvule",
  [anon_sym_bvult] = "bvult",
  [anon_sym_bvugt] = "bvugt",
  [anon_sym_bvuge] = "bvuge",
  [anon_sym_bvslt] = "bvslt",
  [anon_sym_bvsle] = "bvsle",
  [anon_sym_bvsgt] = "bvsgt",
  [anon_sym_bvsge] = "bvsge",
  [anon_sym_rotl] = "rotl",
  [anon_sym_rotr] = "rotr",
  [anon_sym_extract] = "extract",
  [anon_sym_concat] = "concat",
  [anon_sym_conv_to] = "conv_to",
  [anon_sym_int2bv] = "int2bv",
  [anon_sym_bv2int] = "bv2int",
  [anon_sym_zero_ext] = "zero_ext",
  [anon_sym_sign_ext] = "sign_ext",
  [anon_sym_widthof] = "widthof",
  [anon_sym_subs] = "subs",
  [anon_sym_popcnt] = "popcnt",
  [anon_sym_rev] = "rev",
  [anon_sym_cls] = "cls",
  [anon_sym_clz] = "clz",
  [anon_sym_load_effect] = "load_effect",
  [anon_sym_store_effect] = "store_effect",
  [anon_sym_instantiate] = "instantiate",
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
  [sym_type_enum_variant] = "type_enum_variant",
  [sym_type_enum_variant_field] = "type_enum_variant_field",
  [sym_decl] = "decl",
  [sym_decl_params] = "decl_params",
  [sym_rule] = "rule",
  [sym_extractor] = "extractor",
  [sym__extern] = "_extern",
  [sym_extern_const] = "extern_const",
  [sym_extern_constructor] = "extern_constructor",
  [sym_extern_extractor] = "extern_extractor",
  [sym_convert] = "convert",
  [sym_enum_variant] = "enum_variant",
  [sym_bv_ty] = "bv_ty",
  [sym_bv_const] = "bv_const",
  [sym_sig] = "sig",
  [sym_sig_args] = "sig_args",
  [sym_sig_ret] = "sig_ret",
  [sym_sig_canon] = "sig_canon",
  [sym_model] = "model",
  [sym_model_type] = "model_type",
  [sym_model_ty] = "model_ty",
  [sym_model_enum] = "model_enum",
  [sym_model_enum_variant] = "model_enum_variant",
  [sym_form] = "form",
  [sym_spec] = "spec",
  [sym_spec_term] = "spec_term",
  [sym_provide] = "provide",
  [sym_require] = "require",
  [sym__spec_expr] = "_spec_expr",
  [sym_switch] = "switch",
  [sym_spec_expr_pair] = "spec_expr_pair",
  [sym_spec_operation] = "spec_operation",
  [sym__spec_op] = "_spec_op",
  [sym_instantiate] = "instantiate",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_let_repeat1] = "let_repeat1",
  [aux_sym_pattern_and_repeat1] = "pattern_and_repeat1",
  [aux_sym_expr_term_repeat1] = "expr_term_repeat1",
  [aux_sym_type_enum_repeat1] = "type_enum_repeat1",
  [aux_sym_type_enum_variant_repeat1] = "type_enum_variant_repeat1",
  [aux_sym_decl_params_repeat1] = "decl_params_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_extractor_repeat1] = "extractor_repeat1",
  [aux_sym_sig_args_repeat1] = "sig_args_repeat1",
  [aux_sym_model_enum_repeat1] = "model_enum_repeat1",
  [aux_sym_form_repeat1] = "form_repeat1",
  [aux_sym_provide_repeat1] = "provide_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
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
  [sym_unit] = sym_unit,
  [aux_sym_enum_variant_token1] = aux_sym_enum_variant_token1,
  [anon_sym_bv] = anon_sym_bv,
  [aux_sym_bv_const_token1] = aux_sym_bv_const_token1,
  [aux_sym_bv_const_token2] = aux_sym_bv_const_token2,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_canon] = anon_sym_canon,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Unit] = anon_sym_Unit,
  [anon_sym_form] = anon_sym_form,
  [anon_sym_spec] = anon_sym_spec,
  [anon_sym_provide] = anon_sym_provide,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_bvand] = anon_sym_bvand,
  [anon_sym_bvnot] = anon_sym_bvnot,
  [anon_sym_bvor] = anon_sym_bvor,
  [anon_sym_bvxor] = anon_sym_bvxor,
  [anon_sym_bvadd] = anon_sym_bvadd,
  [anon_sym_bvsub] = anon_sym_bvsub,
  [anon_sym_bvmul] = anon_sym_bvmul,
  [anon_sym_bvneg] = anon_sym_bvneg,
  [anon_sym_bvudiv] = anon_sym_bvudiv,
  [anon_sym_bvurem] = anon_sym_bvurem,
  [anon_sym_bvsdiv] = anon_sym_bvsdiv,
  [anon_sym_bvsrem] = anon_sym_bvsrem,
  [anon_sym_bvuaddo] = anon_sym_bvuaddo,
  [anon_sym_bvsaddo] = anon_sym_bvsaddo,
  [anon_sym_bvusubo] = anon_sym_bvusubo,
  [anon_sym_bvssubo] = anon_sym_bvssubo,
  [anon_sym_bvshl] = anon_sym_bvshl,
  [anon_sym_bvlshr] = anon_sym_bvlshr,
  [anon_sym_bvashr] = anon_sym_bvashr,
  [anon_sym_bvule] = anon_sym_bvule,
  [anon_sym_bvult] = anon_sym_bvult,
  [anon_sym_bvugt] = anon_sym_bvugt,
  [anon_sym_bvuge] = anon_sym_bvuge,
  [anon_sym_bvslt] = anon_sym_bvslt,
  [anon_sym_bvsle] = anon_sym_bvsle,
  [anon_sym_bvsgt] = anon_sym_bvsgt,
  [anon_sym_bvsge] = anon_sym_bvsge,
  [anon_sym_rotl] = anon_sym_rotl,
  [anon_sym_rotr] = anon_sym_rotr,
  [anon_sym_extract] = anon_sym_extract,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_conv_to] = anon_sym_conv_to,
  [anon_sym_int2bv] = anon_sym_int2bv,
  [anon_sym_bv2int] = anon_sym_bv2int,
  [anon_sym_zero_ext] = anon_sym_zero_ext,
  [anon_sym_sign_ext] = anon_sym_sign_ext,
  [anon_sym_widthof] = anon_sym_widthof,
  [anon_sym_subs] = anon_sym_subs,
  [anon_sym_popcnt] = anon_sym_popcnt,
  [anon_sym_rev] = anon_sym_rev,
  [anon_sym_cls] = anon_sym_cls,
  [anon_sym_clz] = anon_sym_clz,
  [anon_sym_load_effect] = anon_sym_load_effect,
  [anon_sym_store_effect] = anon_sym_store_effect,
  [anon_sym_instantiate] = anon_sym_instantiate,
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
  [sym_type_enum_variant] = sym_type_enum_variant,
  [sym_type_enum_variant_field] = sym_type_enum_variant_field,
  [sym_decl] = sym_decl,
  [sym_decl_params] = sym_decl_params,
  [sym_rule] = sym_rule,
  [sym_extractor] = sym_extractor,
  [sym__extern] = sym__extern,
  [sym_extern_const] = sym_extern_const,
  [sym_extern_constructor] = sym_extern_constructor,
  [sym_extern_extractor] = sym_extern_extractor,
  [sym_convert] = sym_convert,
  [sym_enum_variant] = sym_enum_variant,
  [sym_bv_ty] = sym_bv_ty,
  [sym_bv_const] = sym_bv_const,
  [sym_sig] = sym_sig,
  [sym_sig_args] = sym_sig_args,
  [sym_sig_ret] = sym_sig_ret,
  [sym_sig_canon] = sym_sig_canon,
  [sym_model] = sym_model,
  [sym_model_type] = sym_model_type,
  [sym_model_ty] = sym_model_ty,
  [sym_model_enum] = sym_model_enum,
  [sym_model_enum_variant] = sym_model_enum_variant,
  [sym_form] = sym_form,
  [sym_spec] = sym_spec,
  [sym_spec_term] = sym_spec_term,
  [sym_provide] = sym_provide,
  [sym_require] = sym_require,
  [sym__spec_expr] = sym__spec_expr,
  [sym_switch] = sym_switch,
  [sym_spec_expr_pair] = sym_spec_expr_pair,
  [sym_spec_operation] = sym_spec_operation,
  [sym__spec_op] = sym__spec_op,
  [sym_instantiate] = sym_instantiate,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_let_repeat1] = aux_sym_let_repeat1,
  [aux_sym_pattern_and_repeat1] = aux_sym_pattern_and_repeat1,
  [aux_sym_expr_term_repeat1] = aux_sym_expr_term_repeat1,
  [aux_sym_type_enum_repeat1] = aux_sym_type_enum_repeat1,
  [aux_sym_type_enum_variant_repeat1] = aux_sym_type_enum_variant_repeat1,
  [aux_sym_decl_params_repeat1] = aux_sym_decl_params_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_extractor_repeat1] = aux_sym_extractor_repeat1,
  [aux_sym_sig_args_repeat1] = aux_sym_sig_args_repeat1,
  [aux_sym_model_enum_repeat1] = aux_sym_model_enum_repeat1,
  [aux_sym_form_repeat1] = aux_sym_form_repeat1,
  [aux_sym_provide_repeat1] = aux_sym_provide_repeat1,
  [aux_sym_switch_repeat1] = aux_sym_switch_repeat1,
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
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_enum_variant_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bv] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bv_const_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bv_const_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_canon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_form] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvadd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvsub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvmul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvneg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvudiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvurem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvsdiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvsrem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvuaddo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvsaddo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvusubo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvssubo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvshl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvlshr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvashr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvugt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvuge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvslt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvsle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvsgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvsge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conv_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int2bv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bv2int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zero_ext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sign_ext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widthof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load_effect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store_effect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instantiate] = {
    .visible = true,
    .named = false,
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
  [sym_type_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_type_enum_variant_field] = {
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
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_bv_ty] = {
    .visible = true,
    .named = true,
  },
  [sym_bv_const] = {
    .visible = true,
    .named = true,
  },
  [sym_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_sig_args] = {
    .visible = true,
    .named = true,
  },
  [sym_sig_ret] = {
    .visible = true,
    .named = true,
  },
  [sym_sig_canon] = {
    .visible = true,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_model_type] = {
    .visible = true,
    .named = true,
  },
  [sym_model_ty] = {
    .visible = true,
    .named = true,
  },
  [sym_model_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_model_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_form] = {
    .visible = true,
    .named = true,
  },
  [sym_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_term] = {
    .visible = true,
    .named = true,
  },
  [sym_provide] = {
    .visible = true,
    .named = true,
  },
  [sym_require] = {
    .visible = true,
    .named = true,
  },
  [sym__spec_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_expr_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__spec_op] = {
    .visible = false,
    .named = true,
  },
  [sym_instantiate] = {
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
  [aux_sym_type_enum_variant_repeat1] = {
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
  [aux_sym_sig_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_form_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_provide_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_repeat1] = {
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
  field_val = 19,
  field_variants = 20,
  field_width = 21,
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
  [field_val] = "val",
  [field_variants] = "variants",
  [field_width] = "width",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 4},
  [7] = {.index = 12, .length = 4},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 4},
  [11] = {.index = 22, .length = 5},
  [12] = {.index = 27, .length = 4},
  [13] = {.index = 31, .length = 2},
  [14] = {.index = 33, .length = 4},
  [15] = {.index = 37, .length = 1},
  [16] = {.index = 38, .length = 2},
  [17] = {.index = 40, .length = 5},
  [18] = {.index = 45, .length = 5},
  [19] = {.index = 50, .length = 5},
  [20] = {.index = 55, .length = 3},
  [21] = {.index = 58, .length = 3},
  [22] = {.index = 61, .length = 6},
  [23] = {.index = 67, .length = 6},
  [24] = {.index = 73, .length = 6},
  [25] = {.index = 79, .length = 4},
  [26] = {.index = 83, .length = 7},
  [27] = {.index = 90, .length = 4},
  [28] = {.index = 94, .length = 2},
  [29] = {.index = 96, .length = 2},
  [30] = {.index = 98, .length = 5},
  [31] = {.index = 103, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 1},
  [1] =
    {field_name, 2},
    {field_op, 1},
  [3] =
    {field_op, 1},
    {field_term, 2},
  [5] =
    {field_body, 3},
    {field_name, 2},
    {field_op, 1},
  [8] =
    {field_fn, 3},
    {field_kind, 1},
    {field_name, 2},
    {field_op, 0},
  [12] =
    {field_kind, 1},
    {field_name, 2},
    {field_op, 0},
    {field_ty, 3},
  [16] =
    {field_name, 1},
  [17] =
    {field_name, 0},
  [18] =
    {field_body, 4},
    {field_modifier, 3},
    {field_name, 2},
    {field_op, 1},
  [22] =
    {field_fn, 4},
    {field_kind, 1},
    {field_modifier, 2},
    {field_name, 3},
    {field_op, 0},
  [27] =
    {field_name, 2},
    {field_op, 1},
    {field_params, 3},
    {field_ret, 4},
  [31] =
    {field_op, 1},
    {field_priority, 2},
  [33] =
    {field_inner, 2},
    {field_name, 4},
    {field_op, 1},
    {field_outer, 3},
  [37] =
    {field_kind, 1},
  [38] =
    {field_op, 1},
    {field_variants, 2},
  [40] =
    {field_modifier_pure, 2},
    {field_name, 3},
    {field_op, 1},
    {field_params, 4},
    {field_ret, 5},
  [45] =
    {field_modifier_multi, 2},
    {field_name, 3},
    {field_op, 1},
    {field_params, 4},
    {field_ret, 5},
  [50] =
    {field_modifier_partial, 2},
    {field_name, 3},
    {field_op, 1},
    {field_params, 4},
    {field_ret, 5},
  [55] =
    {field_name, 2},
    {field_op, 1},
    {field_priority, 3},
  [58] =
    {field_op, 1},
    {field_template, 5},
    {field_term, 3},
  [61] =
    {field_modifier_multi, 3},
    {field_modifier_pure, 2},
    {field_name, 4},
    {field_op, 1},
    {field_params, 5},
    {field_ret, 6},
  [67] =
    {field_modifier_partial, 3},
    {field_modifier_pure, 2},
    {field_name, 4},
    {field_op, 1},
    {field_params, 5},
    {field_ret, 6},
  [73] =
    {field_modifier_multi, 2},
    {field_modifier_partial, 3},
    {field_name, 4},
    {field_op, 1},
    {field_params, 5},
    {field_ret, 6},
  [79] =
    {field_op, 1},
    {field_params, 4},
    {field_template, 6},
    {field_term, 3},
  [83] =
    {field_modifier_multi, 3},
    {field_modifier_partial, 4},
    {field_modifier_pure, 2},
    {field_name, 5},
    {field_op, 1},
    {field_params, 6},
    {field_ret, 7},
  [90] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_body, 4},
    {field_op, 1},
  [94] =
    {field_op, 1},
    {field_width, 2},
  [96] =
    {field_name, 1},
    {field_val, 2},
  [98] =
    {field_bindings, 2},
    {field_bindings, 3},
    {field_bindings, 4},
    {field_body, 5},
    {field_op, 1},
  [103] =
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 22,
  [23] = 16,
  [24] = 18,
  [25] = 15,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 36,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
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
  [66] = 63,
  [67] = 61,
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
  [109] = 77,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 107,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 112,
  [120] = 98,
  [121] = 121,
  [122] = 101,
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
  [158] = 158,
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
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 63,
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
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 77,
  [199] = 199,
  [200] = 200,
  [201] = 62,
  [202] = 202,
  [203] = 203,
  [204] = 64,
  [205] = 57,
  [206] = 56,
  [207] = 207,
  [208] = 58,
  [209] = 59,
  [210] = 60,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 191,
  [218] = 218,
  [219] = 215,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 61,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 72,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 74,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 73,
  [287] = 287,
  [288] = 71,
  [289] = 289,
  [290] = 70,
  [291] = 75,
  [292] = 292,
  [293] = 68,
  [294] = 65,
  [295] = 295,
  [296] = 69,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 238,
  [318] = 318,
  [319] = 319,
  [320] = 263,
  [321] = 315,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 257,
  [329] = 329,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(379);
      ADVANCE_MAP(
        '#', 161,
        '$', 609,
        '(', 610,
        ')', 614,
        '-', 140,
        '0', 380,
        ';', 648,
        '<', 687,
        '=', 691,
        '>', 689,
        '@', 620,
        'B', 537,
        'I', 512,
        'U', 519,
        'a', 513,
        'b', 592,
        'c', 405,
        'd', 443,
        'e', 515,
        'f', 532,
        'i', 471,
        'l', 524,
        'm', 533,
        'n', 525,
        'o', 545,
        'p', 526,
        'r', 444,
        's', 487,
        't', 600,
        'w', 489,
        'z', 457,
        0x200b, 392,
        0x2028, 392,
        0x2029, 392,
        0x2060, 392,
        0xfeff, 392,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 161,
        '(', 610,
        ')', 614,
        '-', 140,
        '0', 380,
        ';', 648,
        0x200b, 393,
        0x2028, 393,
        0x2029, 393,
        0x2060, 393,
        0xfeff, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(608);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 609,
        '(', 611,
        ')', 614,
        '-', 140,
        '0', 380,
        ';', 648,
        '@', 620,
        0x200b, 390,
        0x2028, 390,
        0x2029, 390,
        0x2060, 390,
        0xfeff, 390,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(608);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '$', 609,
        '(', 611,
        ')', 614,
        '-', 140,
        '0', 380,
        ';', 648,
        0x200b, 391,
        0x2028, 391,
        0x2029, 391,
        0x2060, 391,
        0xfeff, 391,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(608);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 611,
        ')', 614,
        ';', 648,
        'B', 292,
        'I', 273,
        'U', 275,
        'a', 310,
        'b', 363,
        'c', 154,
        'd', 208,
        'e', 269,
        'f', 291,
        'i', 223,
        'm', 290,
        'n', 295,
        'p', 306,
        'r', 197,
        's', 298,
        't', 369,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(611);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ';') ADVANCE(648);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(608);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ';') ADVANCE(648);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(608);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ';') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(397);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(608);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(647);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '.', 138,
        '2', 73,
        'a', 36,
        'l', 110,
        'm', 127,
        'n', 50,
        'o', 101,
        's', 18,
        'u', 20,
        'x', 97,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '.', 138,
        'a', 39,
        'd', 72,
        'g', 42,
        'h', 79,
        'l', 43,
        'r', 44,
        's', 128,
        'u', 21,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(715);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(712);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(772);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 't') ADVANCE(760);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(618);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(807);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(721);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(781);
      if (lookahead == 'r') ADVANCE(784);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(718);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(748);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(733);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(727);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 86:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 87:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 89:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(745);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 97:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(697);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 101:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(706);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 102:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 's') ADVANCE(819);
      if (lookahead == 'z') ADVANCE(822);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 's') ADVANCE(810);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 110:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 112:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 113:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(799);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 116:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(813);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 119:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 120:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(801);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 122:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(828);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 129:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(816);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(724);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(796);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 138:
      if (lookahead == '.') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '0') ADVANCE(380);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 141:
      ADVANCE_MAP(
        '2', 240,
        'a', 182,
        'l', 322,
        'm', 351,
        'n', 206,
        'o', 302,
        's', 155,
        'u', 158,
        'x', 288,
      );
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == ';') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(196);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(215);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        'a', 185,
        'd', 239,
        'g', 191,
        'h', 252,
        'l', 192,
        'r', 193,
        's', 353,
        'u', 162,
      );
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(370);
      if (lookahead == 'x') ADVANCE(371);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(714);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(318);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(354);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(672);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 't') ADVANCE(774);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead == 't') ADVANCE(768);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(765);
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == 't') ADVANCE(759);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(615);
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(806);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(617);
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 224:
      if (lookahead == 'f') ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(216);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(720);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(780);
      if (lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(717);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(747);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 258:
      if (lookahead == 'm') ADVANCE(732);
      END_STATE();
    case 259:
      if (lookahead == 'm') ADVANCE(726);
      END_STATE();
    case 260:
      if (lookahead == 'm') ADVANCE(634);
      END_STATE();
    case 261:
      if (lookahead == 'm') ADVANCE(670);
      END_STATE();
    case 262:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 263:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(660);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == 'x') ADVANCE(336);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 297:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 298:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 299:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 300:
      if (lookahead == 'q') ADVANCE(355);
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == 'z') ADVANCE(821);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 'v') ADVANCE(213);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(827);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 358:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 359:
      if (lookahead == 'v') ADVANCE(815);
      END_STATE();
    case 360:
      if (lookahead == 'v') ADVANCE(729);
      END_STATE();
    case 361:
      if (lookahead == 'v') ADVANCE(723);
      END_STATE();
    case 362:
      if (lookahead == 'v') ADVANCE(795);
      END_STATE();
    case 363:
      if (lookahead == 'v') ADVANCE(652);
      END_STATE();
    case 364:
      if (lookahead == 'v') ADVANCE(202);
      END_STATE();
    case 365:
      if (lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 366:
      if (lookahead == 'x') ADVANCE(343);
      END_STATE();
    case 367:
      if (lookahead == 'x') ADVANCE(331);
      END_STATE();
    case 368:
      if (lookahead == 'x') ADVANCE(332);
      END_STATE();
    case 369:
      if (lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 370:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(372);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(654);
      END_STATE();
    case 371:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(655);
      END_STATE();
    case 372:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(654);
      END_STATE();
    case 373:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(388);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(655);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 377:
      if (eof) ADVANCE(379);
      ADVANCE_MAP(
        '$', 609,
        '(', 611,
        ')', 614,
        '-', 140,
        '0', 380,
        ';', 648,
        '<', 688,
        '=', 692,
        '>', 690,
        '@', 619,
        'a', 82,
        'b', 130,
        'c', 76,
        'e', 135,
        'i', 58,
        'l', 87,
        'n', 95,
        'o', 100,
        'p', 88,
        'r', 48,
        's', 70,
        'w', 71,
        'z', 49,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'y')) ADVANCE(139);
      END_STATE();
    case 378:
      if (eof) ADVANCE(379);
      ADVANCE_MAP(
        '$', 609,
        '(', 611,
        ')', 614,
        '-', 140,
        '0', 380,
        ';', 648,
        '<', 688,
        '=', 692,
        '>', 690,
        '@', 619,
        'a', 264,
        'b', 358,
        'c', 249,
        'e', 366,
        'i', 221,
        'l', 277,
        'n', 285,
        'o', 301,
        'p', 278,
        'r', 204,
        's', 237,
        'w', 238,
        'z', 205,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(608);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 608,
        '$', 608,
        '-', 394,
        '0', 381,
        '@', 620,
        0x200b, 390,
        0x2028, 390,
        0x2029, 390,
        0x2060, 390,
        0xfeff, 390,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 608,
        '$', 608,
        '-', 394,
        '0', 381,
        '@', 608,
        0x200b, 391,
        0x2028, 391,
        0x2029, 391,
        0x2060, 391,
        0xfeff, 391,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 414,
        '$', 608,
        '-', 394,
        '0', 381,
        '<', 687,
        '=', 691,
        '>', 689,
        '@', 620,
        'B', 537,
        'I', 512,
        'U', 519,
        'a', 513,
        'b', 592,
        'c', 405,
        'd', 443,
        'e', 515,
        'f', 532,
        'i', 471,
        'l', 524,
        'm', 533,
        'n', 525,
        'o', 545,
        'p', 526,
        'r', 444,
        's', 487,
        't', 600,
        'w', 489,
        'z', 457,
        0x200b, 392,
        0x2028, 392,
        0x2029, 392,
        0x2060, 392,
        0xfeff, 392,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(608);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 414,
        '$', 608,
        '-', 394,
        '0', 381,
        '@', 608,
        0x200b, 393,
        0x2028, 393,
        0x2029, 393,
        0x2060, 393,
        0xfeff, 393,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(381);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(608);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(396);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(608);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(397);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(608);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(398);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(582);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'a', 438,
        'd', 488,
        'g', 447,
        'h', 502,
        'l', 448,
        'r', 461,
        's', 589,
        'u', 415,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'g') ADVANCE(449);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(601);
      if (lookahead == 'x') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == 's') ADVANCE(567);
      if (lookahead == 'v') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(564);
      if (lookahead == 'u') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == 't') ADVANCE(776);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(773);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(767);
      if (lookahead == 't') ADVANCE(764);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(831);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(616);
      if (lookahead == 'n') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(722);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead == 't') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == 'w') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead == 'r') ADVANCE(785);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(719);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(749);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(671);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(734);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(728);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(585);
      if (lookahead == 'x') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(737);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(794);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(587);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead == 'v') ADVANCE(817);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(707);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(710);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(752);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead == 'z') ADVANCE(823);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(811);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(704);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(814);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(788);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(805);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(826);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(829);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(731);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(725);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(797);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(603);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(608);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(608);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(608);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_const_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(649);
      if (lookahead == ';') ADVANCE(144);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ';') ADVANCE(144);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_pragma);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_nodebug);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_nodebug);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_primitive);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_primitive);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_decl);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_decl);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_extractor);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_convert);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_convert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_enum_variant_token1);
      if (lookahead == '.') ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(651);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_enum_variant_token1);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_bv);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_bv);
      ADVANCE_MAP(
        'a', 436,
        'l', 561,
        'm', 586,
        'n', 459,
        'o', 546,
        's', 409,
        'u', 413,
        'x', 539,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_bv_const_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_bv_const_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_args);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_canon);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_canon);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_model);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_Int);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_form);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_form);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_spec);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_spec);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_provide);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_provide);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(684);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(683);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(685);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(681);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_bvand);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_bvand);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_bvand);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_bvnot);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_bvnot);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_bvnot);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_bvor);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_bvor);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_bvor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_bvxor);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_bvxor);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_bvxor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_bvadd);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_bvadd);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_bvadd);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_bvsub);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_bvsub);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_bvsub);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_bvmul);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_bvmul);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_bvmul);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_bvneg);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_bvneg);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_bvneg);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_bvudiv);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_bvudiv);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_bvudiv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_bvurem);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_bvurem);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_bvurem);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_bvsdiv);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_bvsdiv);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_bvsdiv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_bvsrem);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_bvsrem);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_bvsrem);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_bvuaddo);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_bvuaddo);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_bvuaddo);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_bvsaddo);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_bvsaddo);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_bvsaddo);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_bvusubo);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_bvusubo);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_bvusubo);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_bvssubo);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_bvssubo);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_bvssubo);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_bvshl);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_bvshl);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_bvshl);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_bvlshr);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_bvlshr);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_bvlshr);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_bvashr);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_bvashr);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_bvashr);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_bvule);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_bvule);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_bvule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_bvult);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_bvult);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_bvult);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_bvugt);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_bvugt);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_bvugt);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_bvuge);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_bvuge);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_bvuge);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_bvslt);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_bvslt);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_bvslt);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_bvsle);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_bvsle);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_bvsle);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_bvsgt);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_bvsgt);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_bvsgt);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_bvsge);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_bvsge);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_bvsge);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_rotl);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_rotl);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_rotl);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_rotr);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_rotr);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_rotr);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_conv_to);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_conv_to);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_conv_to);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_int2bv);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_int2bv);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_int2bv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_bv2int);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_bv2int);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_zero_ext);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_zero_ext);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_zero_ext);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_sign_ext);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_sign_ext);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_sign_ext);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_widthof);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_widthof);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_widthof);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_subs);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_subs);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_subs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_popcnt);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_popcnt);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_rev);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_rev);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_rev);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_cls);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_cls);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_cls);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_clz);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_clz);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_clz);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_load_effect);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_load_effect);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_load_effect);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_store_effect);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_store_effect);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(139);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_store_effect);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_instantiate);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_instantiate);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(608);
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
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
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
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_infallible);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 377},
  [2] = {.lex_state = 377},
  [3] = {.lex_state = 377},
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
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 377},
  [46] = {.lex_state = 377},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 377},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 377},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 377},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 377},
  [102] = {.lex_state = 377},
  [103] = {.lex_state = 377},
  [104] = {.lex_state = 377},
  [105] = {.lex_state = 377},
  [106] = {.lex_state = 377},
  [107] = {.lex_state = 377},
  [108] = {.lex_state = 377},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 377},
  [111] = {.lex_state = 377},
  [112] = {.lex_state = 377},
  [113] = {.lex_state = 377},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 377},
  [116] = {.lex_state = 377},
  [117] = {.lex_state = 377},
  [118] = {.lex_state = 377},
  [119] = {.lex_state = 377},
  [120] = {.lex_state = 377},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 377},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 377},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 377},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 377},
  [137] = {.lex_state = 377},
  [138] = {.lex_state = 377},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 377},
  [141] = {.lex_state = 377},
  [142] = {.lex_state = 377},
  [143] = {.lex_state = 377},
  [144] = {.lex_state = 377},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 377},
  [147] = {.lex_state = 377},
  [148] = {.lex_state = 377},
  [149] = {.lex_state = 377},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 377},
  [152] = {.lex_state = 377},
  [153] = {.lex_state = 377},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 377},
  [156] = {.lex_state = 377},
  [157] = {.lex_state = 377},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 377},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 377},
  [163] = {.lex_state = 377},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 377},
  [167] = {.lex_state = 377},
  [168] = {.lex_state = 377},
  [169] = {.lex_state = 377},
  [170] = {.lex_state = 377},
  [171] = {.lex_state = 377},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 377},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 377},
  [177] = {.lex_state = 377},
  [178] = {.lex_state = 377},
  [179] = {.lex_state = 377},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 377},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 377},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 377},
  [187] = {.lex_state = 377},
  [188] = {.lex_state = 377},
  [189] = {.lex_state = 377},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 377},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 377},
  [195] = {.lex_state = 377},
  [196] = {.lex_state = 377},
  [197] = {.lex_state = 377},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 377},
  [200] = {.lex_state = 377},
  [201] = {.lex_state = 377},
  [202] = {.lex_state = 377},
  [203] = {.lex_state = 377},
  [204] = {.lex_state = 377},
  [205] = {.lex_state = 377},
  [206] = {.lex_state = 377},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 377},
  [209] = {.lex_state = 377},
  [210] = {.lex_state = 377},
  [211] = {.lex_state = 377},
  [212] = {.lex_state = 377},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 377},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 377},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 377},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 377},
  [223] = {.lex_state = 377},
  [224] = {.lex_state = 377},
  [225] = {.lex_state = 377},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 377},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 377},
  [231] = {.lex_state = 377},
  [232] = {.lex_state = 377},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 377},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 377},
  [238] = {.lex_state = 377},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 377},
  [243] = {.lex_state = 377},
  [244] = {.lex_state = 377},
  [245] = {.lex_state = 377},
  [246] = {.lex_state = 377},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 377},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 377},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 377},
  [253] = {.lex_state = 377},
  [254] = {.lex_state = 377},
  [255] = {.lex_state = 377},
  [256] = {.lex_state = 377},
  [257] = {.lex_state = 377},
  [258] = {.lex_state = 377},
  [259] = {.lex_state = 377},
  [260] = {.lex_state = 377},
  [261] = {.lex_state = 377},
  [262] = {.lex_state = 377},
  [263] = {.lex_state = 377},
  [264] = {.lex_state = 377},
  [265] = {.lex_state = 377},
  [266] = {.lex_state = 377},
  [267] = {.lex_state = 377},
  [268] = {.lex_state = 377},
  [269] = {.lex_state = 377},
  [270] = {.lex_state = 377},
  [271] = {.lex_state = 377},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 377},
  [274] = {.lex_state = 377},
  [275] = {.lex_state = 377},
  [276] = {.lex_state = 377},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 377},
  [279] = {.lex_state = 377},
  [280] = {.lex_state = 377},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 377},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 377},
  [285] = {.lex_state = 377},
  [286] = {.lex_state = 377},
  [287] = {.lex_state = 377},
  [288] = {.lex_state = 377},
  [289] = {.lex_state = 377},
  [290] = {.lex_state = 377},
  [291] = {.lex_state = 377},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 377},
  [294] = {.lex_state = 377},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 377},
  [297] = {.lex_state = 377},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 377},
  [300] = {.lex_state = 377},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 377},
  [303] = {.lex_state = 377},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 377},
  [306] = {.lex_state = 377},
  [307] = {.lex_state = 377},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 377},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 377},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 377},
  [315] = {.lex_state = 377},
  [316] = {.lex_state = 377},
  [317] = {.lex_state = 377},
  [318] = {.lex_state = 377},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 377},
  [321] = {.lex_state = 377},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 377},
  [324] = {.lex_state = 377},
  [325] = {.lex_state = 377},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 377},
  [328] = {.lex_state = 377},
  [329] = {.lex_state = 377},
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
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_infallible] = ACTIONS(1),
    [anon_sym_convert] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_unit] = ACTIONS(1),
    [anon_sym_bv] = ACTIONS(1),
    [aux_sym_bv_const_token1] = ACTIONS(1),
    [aux_sym_bv_const_token2] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_canon] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [anon_sym_form] = ACTIONS(1),
    [anon_sym_spec] = ACTIONS(1),
    [anon_sym_provide] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_bvand] = ACTIONS(1),
    [anon_sym_bvnot] = ACTIONS(1),
    [anon_sym_bvor] = ACTIONS(1),
    [anon_sym_bvxor] = ACTIONS(1),
    [anon_sym_bvadd] = ACTIONS(1),
    [anon_sym_bvsub] = ACTIONS(1),
    [anon_sym_bvmul] = ACTIONS(1),
    [anon_sym_bvneg] = ACTIONS(1),
    [anon_sym_bvudiv] = ACTIONS(1),
    [anon_sym_bvurem] = ACTIONS(1),
    [anon_sym_bvsdiv] = ACTIONS(1),
    [anon_sym_bvsrem] = ACTIONS(1),
    [anon_sym_bvuaddo] = ACTIONS(1),
    [anon_sym_bvsaddo] = ACTIONS(1),
    [anon_sym_bvusubo] = ACTIONS(1),
    [anon_sym_bvssubo] = ACTIONS(1),
    [anon_sym_bvshl] = ACTIONS(1),
    [anon_sym_bvlshr] = ACTIONS(1),
    [anon_sym_bvashr] = ACTIONS(1),
    [anon_sym_bvule] = ACTIONS(1),
    [anon_sym_bvult] = ACTIONS(1),
    [anon_sym_bvugt] = ACTIONS(1),
    [anon_sym_bvuge] = ACTIONS(1),
    [anon_sym_bvslt] = ACTIONS(1),
    [anon_sym_bvsle] = ACTIONS(1),
    [anon_sym_bvsgt] = ACTIONS(1),
    [anon_sym_bvsge] = ACTIONS(1),
    [anon_sym_rotl] = ACTIONS(1),
    [anon_sym_rotr] = ACTIONS(1),
    [anon_sym_extract] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_conv_to] = ACTIONS(1),
    [anon_sym_int2bv] = ACTIONS(1),
    [anon_sym_zero_ext] = ACTIONS(1),
    [anon_sym_sign_ext] = ACTIONS(1),
    [anon_sym_widthof] = ACTIONS(1),
    [anon_sym_subs] = ACTIONS(1),
    [anon_sym_popcnt] = ACTIONS(1),
    [anon_sym_rev] = ACTIONS(1),
    [anon_sym_cls] = ACTIONS(1),
    [anon_sym_clz] = ACTIONS(1),
    [anon_sym_load_effect] = ACTIONS(1),
    [anon_sym_store_effect] = ACTIONS(1),
    [anon_sym_instantiate] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(250),
    [sym__def] = STATE(45),
    [sym_pragma] = STATE(45),
    [sym_type] = STATE(45),
    [sym_decl] = STATE(45),
    [sym_rule] = STATE(45),
    [sym_extractor] = STATE(45),
    [sym__extern] = STATE(45),
    [sym_convert] = STATE(45),
    [sym_model] = STATE(45),
    [sym_form] = STATE(45),
    [sym_spec] = STATE(45),
    [sym_instantiate] = STATE(45),
    [aux_sym_source_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_enum_variant_token1,
    ACTIONS(15), 1,
      anon_sym_switch,
    STATE(10), 1,
      sym__spec_op,
    ACTIONS(17), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(11), 51,
      anon_sym_if,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_not,
      anon_sym_or,
      anon_sym_bvand,
      anon_sym_bvnot,
      anon_sym_bvor,
      anon_sym_bvxor,
      anon_sym_bvadd,
      anon_sym_bvsub,
      anon_sym_bvmul,
      anon_sym_bvneg,
      anon_sym_bvudiv,
      anon_sym_bvurem,
      anon_sym_bvsdiv,
      anon_sym_bvsrem,
      anon_sym_bvuaddo,
      anon_sym_bvsaddo,
      anon_sym_bvusubo,
      anon_sym_bvssubo,
      anon_sym_bvshl,
      anon_sym_bvlshr,
      anon_sym_bvashr,
      anon_sym_bvule,
      anon_sym_bvult,
      anon_sym_bvugt,
      anon_sym_bvuge,
      anon_sym_bvslt,
      anon_sym_bvsle,
      anon_sym_bvsgt,
      anon_sym_bvsge,
      anon_sym_rotl,
      anon_sym_rotr,
      anon_sym_extract,
      anon_sym_concat,
      anon_sym_conv_to,
      anon_sym_int2bv,
      anon_sym_bv2int,
      anon_sym_zero_ext,
      anon_sym_sign_ext,
      anon_sym_widthof,
      anon_sym_subs,
      anon_sym_popcnt,
      anon_sym_rev,
      anon_sym_cls,
      anon_sym_clz,
      anon_sym_load_effect,
      anon_sym_store_effect,
  [71] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_enum_variant_token1,
    ACTIONS(23), 1,
      anon_sym_switch,
    STATE(6), 1,
      sym__spec_op,
    ACTIONS(25), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(19), 51,
      anon_sym_if,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_not,
      anon_sym_or,
      anon_sym_bvand,
      anon_sym_bvnot,
      anon_sym_bvor,
      anon_sym_bvxor,
      anon_sym_bvadd,
      anon_sym_bvsub,
      anon_sym_bvmul,
      anon_sym_bvneg,
      anon_sym_bvudiv,
      anon_sym_bvurem,
      anon_sym_bvsdiv,
      anon_sym_bvsrem,
      anon_sym_bvuaddo,
      anon_sym_bvsaddo,
      anon_sym_bvusubo,
      anon_sym_bvssubo,
      anon_sym_bvshl,
      anon_sym_bvlshr,
      anon_sym_bvashr,
      anon_sym_bvule,
      anon_sym_bvult,
      anon_sym_bvugt,
      anon_sym_bvuge,
      anon_sym_bvslt,
      anon_sym_bvsle,
      anon_sym_bvsgt,
      anon_sym_bvsge,
      anon_sym_rotl,
      anon_sym_rotr,
      anon_sym_extract,
      anon_sym_concat,
      anon_sym_conv_to,
      anon_sym_int2bv,
      anon_sym_bv2int,
      anon_sym_zero_ext,
      anon_sym_sign_ext,
      anon_sym_widthof,
      anon_sym_subs,
      anon_sym_popcnt,
      anon_sym_rev,
      anon_sym_cls,
      anon_sym_clz,
      anon_sym_load_effect,
      anon_sym_store_effect,
  [142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_ident,
      sym_unit,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(39), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(8), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [218] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(43), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(11), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [256] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(47), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [294] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(47), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [332] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      sym_ident,
      sym_unit,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(59), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [370] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(70), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(12), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [408] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(47), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [446] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(47), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 8,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [484] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 2,
      sym_ident,
      sym_unit,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(245), 7,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [521] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(90), 2,
      sym_ident,
      sym_unit,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(112), 7,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [555] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(19), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [591] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(17), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [627] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(19), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [663] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(15), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [699] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(120), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(19), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [735] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(131), 2,
      sym_ident,
      sym_unit,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(282), 7,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [769] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(19), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [805] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(135), 2,
      sym_ident,
      sym_unit,
    ACTIONS(31), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(20), 7,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [839] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(137), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(21), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [875] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(141), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(25), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [911] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(19), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [947] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(147), 2,
      sym_ident,
      sym_unit,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(119), 7,
      sym_bool,
      sym_int,
      sym_enum_variant,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      sym_ident,
      sym_const_ident,
    STATE(55), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(285), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1014] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      sym_ident,
      sym_const_ident,
    STATE(32), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(268), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1047] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 2,
      sym_ident,
      sym_const_ident,
    STATE(55), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(279), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1080] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 2,
      sym_ident,
      sym_const_ident,
    STATE(34), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(253), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1113] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(159), 2,
      sym_ident,
      sym_const_ident,
    STATE(27), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(228), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1146] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 2,
      sym_ident,
      sym_const_ident,
    STATE(55), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(280), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1179] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_ident,
      sym_const_ident,
    STATE(29), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(260), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 2,
      sym_ident,
      sym_const_ident,
    STATE(55), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(271), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1245] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(167), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(52), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1277] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(37), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1309] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(178), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(37), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1341] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(191), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(325), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1373] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(42), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1405] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(68), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(293), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1469] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(37), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1501] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(96), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(36), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(209), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(300), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1565] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(46), 13,
      sym__def,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
      sym_model,
      sym_form,
      sym_spec,
      sym_instantiate,
      aux_sym_source_repeat1,
  [1590] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(46), 13,
      sym__def,
      sym_pragma,
      sym_type,
      sym_decl,
      sym_rule,
      sym_extractor,
      sym__extern,
      sym_convert,
      sym_model,
      sym_form,
      sym_spec,
      sym_instantiate,
      aux_sym_source_repeat1,
  [1615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(218), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(320), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1643] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_pragma,
    ACTIONS(224), 1,
      anon_sym_type,
    ACTIONS(226), 1,
      anon_sym_extern,
    ACTIONS(228), 1,
      anon_sym_decl,
    ACTIONS(230), 1,
      anon_sym_rule,
    ACTIONS(232), 1,
      anon_sym_extractor,
    ACTIONS(234), 1,
      anon_sym_convert,
    ACTIONS(236), 1,
      anon_sym_model,
    ACTIONS(238), 1,
      anon_sym_form,
    ACTIONS(240), 1,
      anon_sym_spec,
    ACTIONS(242), 1,
      anon_sym_instantiate,
    STATE(269), 3,
      sym_extern_const,
      sym_extern_constructor,
      sym_extern_extractor,
  [1685] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(244), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(263), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(274), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(248), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(306), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1769] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(289), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(238), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(254), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(317), 5,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
  [1853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    STATE(55), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(256), 8,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
  [1875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [1893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [1911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [1965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [1983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_AT,
    ACTIONS(273), 11,
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
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 12,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unit,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
  [2039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 11,
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
  [2056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 11,
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
  [2073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 11,
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
  [2090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 11,
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
  [2107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 11,
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
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 11,
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
  [2141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 11,
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
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 10,
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
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 10,
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
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 10,
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
  [2206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 10,
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
  [2222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [2237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [2267] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(83), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2287] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(86), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2307] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(82), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2327] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2347] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_ident,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_pattern_term,
    STATE(192), 1,
      sym_int,
    ACTIONS(82), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2389] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2409] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2429] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_int_token1,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_pattern_term,
    STATE(178), 1,
      sym_int,
    ACTIONS(333), 3,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2450] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(232), 2,
      sym_bv_ty,
      sym_model_ty,
    ACTIONS(309), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2466] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_int_token1,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_int,
    ACTIONS(333), 3,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2484] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 2,
      anon_sym_extern,
      anon_sym_nodebug,
    STATE(297), 2,
      sym_type_primitive,
      sym_type_enum,
  [2499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_type_enum_variant,
      aux_sym_type_enum_repeat1,
  [2516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_type_enum_variant,
      aux_sym_type_enum_repeat1,
  [2533] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 4,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_ident,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_type_enum_variant,
      aux_sym_type_enum_repeat1,
  [2563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_ident,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(118), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2580] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 4,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2593] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 4,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2606] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_ident,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [2634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_ident,
    ACTIONS(386), 1,
      anon_sym_pure,
    ACTIONS(388), 1,
      anon_sym_multi,
    ACTIONS(390), 1,
      anon_sym_partial,
  [2650] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(107), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2664] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(103), 2,
      sym_model_enum_variant,
      aux_sym_model_enum_repeat1,
  [2678] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(108), 2,
      sym_model_enum_variant,
      aux_sym_model_enum_repeat1,
  [2692] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(117), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2706] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(110), 2,
      sym_type_enum_variant_field,
      aux_sym_type_enum_variant_repeat1,
  [2720] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2734] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2748] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(108), 2,
      sym_model_enum_variant,
      aux_sym_model_enum_repeat1,
  [2762] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 3,
      anon_sym_RPAREN,
      anon_sym_extern,
      anon_sym_nodebug,
  [2774] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(113), 2,
      sym_type_enum_variant_field,
      aux_sym_type_enum_variant_repeat1,
  [2788] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2802] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(98), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2816] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(113), 2,
      sym_type_enum_variant_field,
      aux_sym_type_enum_variant_repeat1,
  [2830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_if_DASHlet,
    ACTIONS(440), 1,
      anon_sym_if,
    ACTIONS(442), 1,
      anon_sym_let,
  [2846] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2860] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2874] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2888] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2902] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(120), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2916] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_ident,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [2944] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(115), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_ident,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(121), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_ident,
    ACTIONS(469), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_ident,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_extractor_repeat1,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_ident,
    ACTIONS(477), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_ident,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_extractor_repeat1,
  [3020] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(309), 2,
      sym_type_primitive,
      sym_type_enum,
  [3031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_ident,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_extractor_repeat1,
  [3044] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym_require,
  [3057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_ident,
    ACTIONS(493), 1,
      anon_sym_multi,
    ACTIONS(495), 1,
      anon_sym_partial,
  [3070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_ident,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_extractor_repeat1,
  [3083] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_extractor,
    ACTIONS(501), 1,
      anon_sym_const,
    ACTIONS(503), 1,
      anon_sym_constructor,
  [3096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_ident,
    ACTIONS(507), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_ident,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_extractor_repeat1,
  [3120] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    STATE(329), 2,
      sym_model_type,
      sym_model_enum,
  [3131] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [3141] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(90), 1,
      sym_ty,
  [3161] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_provide,
  [3171] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
  [3181] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [3191] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [3201] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
  [3211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(231), 1,
      sym_ty,
  [3221] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
  [3231] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
  [3241] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
  [3251] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_ident,
    ACTIONS(562), 1,
      anon_sym_infallible,
  [3271] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
  [3281] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
  [3291] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
  [3301] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_primitive,
    ACTIONS(578), 1,
      anon_sym_enum,
  [3311] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
  [3321] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [3331] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(259), 1,
      sym_ty,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(314), 1,
      sym_ty,
  [3361] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
  [3371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(323), 1,
      sym_ty,
  [3381] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_decl_params,
  [3391] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym_decl_params,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_ident,
    ACTIONS(600), 1,
      anon_sym_partial,
  [3411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(261), 1,
      sym_ty,
  [3421] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_decl_params,
  [3431] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
  [3441] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
  [3451] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [3461] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
  [3471] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_decl_params,
  [3481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_ident,
    STATE(50), 1,
      sym_ty,
  [3491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(265), 1,
      sym_ty,
  [3501] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
  [3511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(270), 1,
      sym_ty,
  [3521] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [3531] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_decl_params,
  [3541] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_pattern_term,
  [3551] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
  [3561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym_ident,
    ACTIONS(634), 1,
      anon_sym_partial,
  [3571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_ident,
    STATE(220), 1,
      sym_ty,
  [3581] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [3591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(273), 1,
      sym_ty,
  [3601] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(254), 1,
      sym_ty,
  [3621] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
  [3631] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_decl_params,
  [3641] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
  [3651] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
  [3661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(136), 1,
      sym_ty,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_ident,
    ACTIONS(656), 1,
      anon_sym_let,
  [3681] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_pattern_term,
  [3691] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_type,
    ACTIONS(660), 1,
      anon_sym_enum,
  [3701] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_spec_term,
  [3711] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
  [3721] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [3731] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [3741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      sym_ident,
  [3751] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_sig_args,
  [3761] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
  [3771] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(684), 1,
      anon_sym_AT,
  [3781] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
  [3791] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(690), 1,
      ts_builtin_sym_end,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
  [3801] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [3811] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
  [3821] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [3831] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_if,
    ACTIONS(700), 1,
      anon_sym_if_DASHlet,
  [3841] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [3851] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [3861] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [3871] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
  [3881] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_sig_ret,
  [3891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(299), 1,
      sym_ty,
  [3901] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
  [3911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_ident,
    ACTIONS(720), 1,
      anon_sym_and,
  [3921] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
  [3931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(442), 1,
      anon_sym_let,
  [3941] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
  [3951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_ident,
    ACTIONS(732), 1,
      anon_sym_and,
  [3961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_ident,
    STATE(272), 1,
      sym_ty,
  [3971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ident,
    STATE(244), 1,
      sym_ty,
  [3981] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_decl_params,
  [3991] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      sym_sig_canon,
  [4001] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_decl_params,
  [4011] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
  [4021] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_canon,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_ident,
  [4035] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [4042] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_bv,
  [4049] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
  [4056] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
  [4063] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_ident,
  [4077] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_ident,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_ident,
  [4098] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
  [4105] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_ident,
  [4119] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_ret,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_ident,
  [4133] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [4140] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
  [4147] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [4154] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [4161] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
  [4168] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_args,
  [4175] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_ident,
  [4189] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(786), 1,
      ts_builtin_sym_end,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_ident,
  [4203] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
  [4210] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [4217] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
  [4224] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
  [4231] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
  [4238] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
  [4245] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [4252] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
  [4259] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [4266] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
  [4273] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [4280] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
  [4287] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
  [4294] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [4301] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
  [4308] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [4315] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
  [4322] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [4329] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
  [4336] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_ident,
  [4350] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [4357] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [4364] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [4371] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
  [4378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_ident,
  [4385] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
  [4392] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
  [4399] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [4406] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_require,
  [4413] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
  [4420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_ident,
  [4427] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_const_ident,
  [4434] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [4441] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
  [4448] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [4455] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
  [4462] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
  [4469] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
  [4476] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_ident,
  [4490] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [4497] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
  [4504] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_provide,
  [4511] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
  [4518] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
  [4525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_ident,
  [4532] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
  [4539] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym_ident,
  [4553] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [4560] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_ident,
  [4574] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
  [4581] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
  [4588] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_ident,
  [4602] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_ident,
  [4616] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_ident,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_ident,
  [4637] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [4644] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [4651] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
  [4658] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
  [4665] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_ident,
  [4679] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
  [4686] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
  [4693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_ident,
  [4700] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
  [4707] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
  [4714] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_ident,
  [4728] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
  [4735] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN,
  [4742] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 332,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 446,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 521,
  [SMALL_STATE(15)] = 555,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 627,
  [SMALL_STATE(18)] = 663,
  [SMALL_STATE(19)] = 699,
  [SMALL_STATE(20)] = 735,
  [SMALL_STATE(21)] = 769,
  [SMALL_STATE(22)] = 805,
  [SMALL_STATE(23)] = 839,
  [SMALL_STATE(24)] = 875,
  [SMALL_STATE(25)] = 911,
  [SMALL_STATE(26)] = 947,
  [SMALL_STATE(27)] = 981,
  [SMALL_STATE(28)] = 1014,
  [SMALL_STATE(29)] = 1047,
  [SMALL_STATE(30)] = 1080,
  [SMALL_STATE(31)] = 1113,
  [SMALL_STATE(32)] = 1146,
  [SMALL_STATE(33)] = 1179,
  [SMALL_STATE(34)] = 1212,
  [SMALL_STATE(35)] = 1245,
  [SMALL_STATE(36)] = 1277,
  [SMALL_STATE(37)] = 1309,
  [SMALL_STATE(38)] = 1341,
  [SMALL_STATE(39)] = 1373,
  [SMALL_STATE(40)] = 1405,
  [SMALL_STATE(41)] = 1437,
  [SMALL_STATE(42)] = 1469,
  [SMALL_STATE(43)] = 1501,
  [SMALL_STATE(44)] = 1533,
  [SMALL_STATE(45)] = 1565,
  [SMALL_STATE(46)] = 1590,
  [SMALL_STATE(47)] = 1615,
  [SMALL_STATE(48)] = 1643,
  [SMALL_STATE(49)] = 1685,
  [SMALL_STATE(50)] = 1713,
  [SMALL_STATE(51)] = 1741,
  [SMALL_STATE(52)] = 1769,
  [SMALL_STATE(53)] = 1797,
  [SMALL_STATE(54)] = 1825,
  [SMALL_STATE(55)] = 1853,
  [SMALL_STATE(56)] = 1875,
  [SMALL_STATE(57)] = 1893,
  [SMALL_STATE(58)] = 1911,
  [SMALL_STATE(59)] = 1929,
  [SMALL_STATE(60)] = 1947,
  [SMALL_STATE(61)] = 1965,
  [SMALL_STATE(62)] = 1983,
  [SMALL_STATE(63)] = 2003,
  [SMALL_STATE(64)] = 2021,
  [SMALL_STATE(65)] = 2039,
  [SMALL_STATE(66)] = 2056,
  [SMALL_STATE(67)] = 2073,
  [SMALL_STATE(68)] = 2090,
  [SMALL_STATE(69)] = 2107,
  [SMALL_STATE(70)] = 2124,
  [SMALL_STATE(71)] = 2141,
  [SMALL_STATE(72)] = 2158,
  [SMALL_STATE(73)] = 2174,
  [SMALL_STATE(74)] = 2190,
  [SMALL_STATE(75)] = 2206,
  [SMALL_STATE(76)] = 2222,
  [SMALL_STATE(77)] = 2237,
  [SMALL_STATE(78)] = 2252,
  [SMALL_STATE(79)] = 2267,
  [SMALL_STATE(80)] = 2287,
  [SMALL_STATE(81)] = 2307,
  [SMALL_STATE(82)] = 2327,
  [SMALL_STATE(83)] = 2347,
  [SMALL_STATE(84)] = 2367,
  [SMALL_STATE(85)] = 2389,
  [SMALL_STATE(86)] = 2409,
  [SMALL_STATE(87)] = 2429,
  [SMALL_STATE(88)] = 2450,
  [SMALL_STATE(89)] = 2466,
  [SMALL_STATE(90)] = 2484,
  [SMALL_STATE(91)] = 2499,
  [SMALL_STATE(92)] = 2516,
  [SMALL_STATE(93)] = 2533,
  [SMALL_STATE(94)] = 2546,
  [SMALL_STATE(95)] = 2563,
  [SMALL_STATE(96)] = 2580,
  [SMALL_STATE(97)] = 2593,
  [SMALL_STATE(98)] = 2606,
  [SMALL_STATE(99)] = 2620,
  [SMALL_STATE(100)] = 2634,
  [SMALL_STATE(101)] = 2650,
  [SMALL_STATE(102)] = 2664,
  [SMALL_STATE(103)] = 2678,
  [SMALL_STATE(104)] = 2692,
  [SMALL_STATE(105)] = 2706,
  [SMALL_STATE(106)] = 2720,
  [SMALL_STATE(107)] = 2734,
  [SMALL_STATE(108)] = 2748,
  [SMALL_STATE(109)] = 2762,
  [SMALL_STATE(110)] = 2774,
  [SMALL_STATE(111)] = 2788,
  [SMALL_STATE(112)] = 2802,
  [SMALL_STATE(113)] = 2816,
  [SMALL_STATE(114)] = 2830,
  [SMALL_STATE(115)] = 2846,
  [SMALL_STATE(116)] = 2860,
  [SMALL_STATE(117)] = 2874,
  [SMALL_STATE(118)] = 2888,
  [SMALL_STATE(119)] = 2902,
  [SMALL_STATE(120)] = 2916,
  [SMALL_STATE(121)] = 2930,
  [SMALL_STATE(122)] = 2944,
  [SMALL_STATE(123)] = 2958,
  [SMALL_STATE(124)] = 2972,
  [SMALL_STATE(125)] = 2983,
  [SMALL_STATE(126)] = 2996,
  [SMALL_STATE(127)] = 3007,
  [SMALL_STATE(128)] = 3020,
  [SMALL_STATE(129)] = 3031,
  [SMALL_STATE(130)] = 3044,
  [SMALL_STATE(131)] = 3057,
  [SMALL_STATE(132)] = 3070,
  [SMALL_STATE(133)] = 3083,
  [SMALL_STATE(134)] = 3096,
  [SMALL_STATE(135)] = 3107,
  [SMALL_STATE(136)] = 3120,
  [SMALL_STATE(137)] = 3131,
  [SMALL_STATE(138)] = 3141,
  [SMALL_STATE(139)] = 3151,
  [SMALL_STATE(140)] = 3161,
  [SMALL_STATE(141)] = 3171,
  [SMALL_STATE(142)] = 3181,
  [SMALL_STATE(143)] = 3191,
  [SMALL_STATE(144)] = 3201,
  [SMALL_STATE(145)] = 3211,
  [SMALL_STATE(146)] = 3221,
  [SMALL_STATE(147)] = 3231,
  [SMALL_STATE(148)] = 3241,
  [SMALL_STATE(149)] = 3251,
  [SMALL_STATE(150)] = 3261,
  [SMALL_STATE(151)] = 3271,
  [SMALL_STATE(152)] = 3281,
  [SMALL_STATE(153)] = 3291,
  [SMALL_STATE(154)] = 3301,
  [SMALL_STATE(155)] = 3311,
  [SMALL_STATE(156)] = 3321,
  [SMALL_STATE(157)] = 3331,
  [SMALL_STATE(158)] = 3341,
  [SMALL_STATE(159)] = 3351,
  [SMALL_STATE(160)] = 3361,
  [SMALL_STATE(161)] = 3371,
  [SMALL_STATE(162)] = 3381,
  [SMALL_STATE(163)] = 3391,
  [SMALL_STATE(164)] = 3401,
  [SMALL_STATE(165)] = 3411,
  [SMALL_STATE(166)] = 3421,
  [SMALL_STATE(167)] = 3431,
  [SMALL_STATE(168)] = 3441,
  [SMALL_STATE(169)] = 3451,
  [SMALL_STATE(170)] = 3461,
  [SMALL_STATE(171)] = 3471,
  [SMALL_STATE(172)] = 3481,
  [SMALL_STATE(173)] = 3491,
  [SMALL_STATE(174)] = 3501,
  [SMALL_STATE(175)] = 3511,
  [SMALL_STATE(176)] = 3521,
  [SMALL_STATE(177)] = 3531,
  [SMALL_STATE(178)] = 3541,
  [SMALL_STATE(179)] = 3551,
  [SMALL_STATE(180)] = 3561,
  [SMALL_STATE(181)] = 3571,
  [SMALL_STATE(182)] = 3581,
  [SMALL_STATE(183)] = 3591,
  [SMALL_STATE(184)] = 3601,
  [SMALL_STATE(185)] = 3611,
  [SMALL_STATE(186)] = 3621,
  [SMALL_STATE(187)] = 3631,
  [SMALL_STATE(188)] = 3641,
  [SMALL_STATE(189)] = 3651,
  [SMALL_STATE(190)] = 3661,
  [SMALL_STATE(191)] = 3671,
  [SMALL_STATE(192)] = 3681,
  [SMALL_STATE(193)] = 3691,
  [SMALL_STATE(194)] = 3701,
  [SMALL_STATE(195)] = 3711,
  [SMALL_STATE(196)] = 3721,
  [SMALL_STATE(197)] = 3731,
  [SMALL_STATE(198)] = 3741,
  [SMALL_STATE(199)] = 3751,
  [SMALL_STATE(200)] = 3761,
  [SMALL_STATE(201)] = 3771,
  [SMALL_STATE(202)] = 3781,
  [SMALL_STATE(203)] = 3791,
  [SMALL_STATE(204)] = 3801,
  [SMALL_STATE(205)] = 3811,
  [SMALL_STATE(206)] = 3821,
  [SMALL_STATE(207)] = 3831,
  [SMALL_STATE(208)] = 3841,
  [SMALL_STATE(209)] = 3851,
  [SMALL_STATE(210)] = 3861,
  [SMALL_STATE(211)] = 3871,
  [SMALL_STATE(212)] = 3881,
  [SMALL_STATE(213)] = 3891,
  [SMALL_STATE(214)] = 3901,
  [SMALL_STATE(215)] = 3911,
  [SMALL_STATE(216)] = 3921,
  [SMALL_STATE(217)] = 3931,
  [SMALL_STATE(218)] = 3941,
  [SMALL_STATE(219)] = 3951,
  [SMALL_STATE(220)] = 3961,
  [SMALL_STATE(221)] = 3971,
  [SMALL_STATE(222)] = 3981,
  [SMALL_STATE(223)] = 3991,
  [SMALL_STATE(224)] = 4001,
  [SMALL_STATE(225)] = 4011,
  [SMALL_STATE(226)] = 4021,
  [SMALL_STATE(227)] = 4028,
  [SMALL_STATE(228)] = 4035,
  [SMALL_STATE(229)] = 4042,
  [SMALL_STATE(230)] = 4049,
  [SMALL_STATE(231)] = 4056,
  [SMALL_STATE(232)] = 4063,
  [SMALL_STATE(233)] = 4070,
  [SMALL_STATE(234)] = 4077,
  [SMALL_STATE(235)] = 4084,
  [SMALL_STATE(236)] = 4091,
  [SMALL_STATE(237)] = 4098,
  [SMALL_STATE(238)] = 4105,
  [SMALL_STATE(239)] = 4112,
  [SMALL_STATE(240)] = 4119,
  [SMALL_STATE(241)] = 4126,
  [SMALL_STATE(242)] = 4133,
  [SMALL_STATE(243)] = 4140,
  [SMALL_STATE(244)] = 4147,
  [SMALL_STATE(245)] = 4154,
  [SMALL_STATE(246)] = 4161,
  [SMALL_STATE(247)] = 4168,
  [SMALL_STATE(248)] = 4175,
  [SMALL_STATE(249)] = 4182,
  [SMALL_STATE(250)] = 4189,
  [SMALL_STATE(251)] = 4196,
  [SMALL_STATE(252)] = 4203,
  [SMALL_STATE(253)] = 4210,
  [SMALL_STATE(254)] = 4217,
  [SMALL_STATE(255)] = 4224,
  [SMALL_STATE(256)] = 4231,
  [SMALL_STATE(257)] = 4238,
  [SMALL_STATE(258)] = 4245,
  [SMALL_STATE(259)] = 4252,
  [SMALL_STATE(260)] = 4259,
  [SMALL_STATE(261)] = 4266,
  [SMALL_STATE(262)] = 4273,
  [SMALL_STATE(263)] = 4280,
  [SMALL_STATE(264)] = 4287,
  [SMALL_STATE(265)] = 4294,
  [SMALL_STATE(266)] = 4301,
  [SMALL_STATE(267)] = 4308,
  [SMALL_STATE(268)] = 4315,
  [SMALL_STATE(269)] = 4322,
  [SMALL_STATE(270)] = 4329,
  [SMALL_STATE(271)] = 4336,
  [SMALL_STATE(272)] = 4343,
  [SMALL_STATE(273)] = 4350,
  [SMALL_STATE(274)] = 4357,
  [SMALL_STATE(275)] = 4364,
  [SMALL_STATE(276)] = 4371,
  [SMALL_STATE(277)] = 4378,
  [SMALL_STATE(278)] = 4385,
  [SMALL_STATE(279)] = 4392,
  [SMALL_STATE(280)] = 4399,
  [SMALL_STATE(281)] = 4406,
  [SMALL_STATE(282)] = 4413,
  [SMALL_STATE(283)] = 4420,
  [SMALL_STATE(284)] = 4427,
  [SMALL_STATE(285)] = 4434,
  [SMALL_STATE(286)] = 4441,
  [SMALL_STATE(287)] = 4448,
  [SMALL_STATE(288)] = 4455,
  [SMALL_STATE(289)] = 4462,
  [SMALL_STATE(290)] = 4469,
  [SMALL_STATE(291)] = 4476,
  [SMALL_STATE(292)] = 4483,
  [SMALL_STATE(293)] = 4490,
  [SMALL_STATE(294)] = 4497,
  [SMALL_STATE(295)] = 4504,
  [SMALL_STATE(296)] = 4511,
  [SMALL_STATE(297)] = 4518,
  [SMALL_STATE(298)] = 4525,
  [SMALL_STATE(299)] = 4532,
  [SMALL_STATE(300)] = 4539,
  [SMALL_STATE(301)] = 4546,
  [SMALL_STATE(302)] = 4553,
  [SMALL_STATE(303)] = 4560,
  [SMALL_STATE(304)] = 4567,
  [SMALL_STATE(305)] = 4574,
  [SMALL_STATE(306)] = 4581,
  [SMALL_STATE(307)] = 4588,
  [SMALL_STATE(308)] = 4595,
  [SMALL_STATE(309)] = 4602,
  [SMALL_STATE(310)] = 4609,
  [SMALL_STATE(311)] = 4616,
  [SMALL_STATE(312)] = 4623,
  [SMALL_STATE(313)] = 4630,
  [SMALL_STATE(314)] = 4637,
  [SMALL_STATE(315)] = 4644,
  [SMALL_STATE(316)] = 4651,
  [SMALL_STATE(317)] = 4658,
  [SMALL_STATE(318)] = 4665,
  [SMALL_STATE(319)] = 4672,
  [SMALL_STATE(320)] = 4679,
  [SMALL_STATE(321)] = 4686,
  [SMALL_STATE(322)] = 4693,
  [SMALL_STATE(323)] = 4700,
  [SMALL_STATE(324)] = 4707,
  [SMALL_STATE(325)] = 4714,
  [SMALL_STATE(326)] = 4721,
  [SMALL_STATE(327)] = 4728,
  [SMALL_STATE(328)] = 4735,
  [SMALL_STATE(329)] = 4742,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_operation, 3, 0, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4, 0, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_operation, 4, 0, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5, 0, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bv_const, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 27),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 30),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_args_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sig_args_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sig_args_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_ty, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_ty, 1, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bv_ty, 3, 0, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bv_ty, 3, 0, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bv_ty, 4, 0, 28),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bv_ty, 4, 0, 28),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_enum_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_enum_variant_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant, 1, 0, 9),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant, 1, 0, 9),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant, 3, 0, 8),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant, 3, 0, 8),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant, 4, 0, 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant, 4, 0, 8),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_provide, 4, 0, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provide, 4, 0, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_provide, 3, 0, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provide, 3, 0, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 6, 0, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec, 6, 0, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 5, 0, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec, 5, 0, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instantiate, 5, 0, 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instantiate, 5, 0, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 17),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 17),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 18),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 18),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 19),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 19),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 20),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 20),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern, 3, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extern, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 13),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 13),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 10),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 10),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 7, 0, 21),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 7, 0, 21),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, 0, 12),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 6, 0, 12),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 22),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 22),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 23),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 23),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 24),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 24),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 20),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 20),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 8, 0, 25),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 8, 0, 25),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_enum_variant, 3, 0, 8),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum_variant, 3, 0, 8),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig, 5, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig, 5, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 26),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 26),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 13),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 13),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_enum_variant, 4, 0, 29),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum_variant, 4, 0, 29),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant_field, 4, 0, 31),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant_field, 4, 0, 31),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 5, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 5, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_expr_pair, 4, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_expr_pair, 4, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 4, 0, 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form, 4, 0, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 5, 0, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model, 5, 0, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bv_const, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_operation, 3, 0, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4, 0, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_operation, 4, 0, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5, 0, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instantiate, 4, 0, 4),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instantiate, 4, 0, 4),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 14),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 14),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 5),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 5, 0, 3),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form, 5, 0, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 5, 0, 11),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum, 3, 0, 15),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 3, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_term, 4, 0, 8),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_args, 4, 0, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_ret, 3, 0, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [786] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_primitive, 4, 0, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require, 4, 0, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 4, 0, 16),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 27),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_term, 3, 0, 8),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_ret, 4, 0, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_canon, 3, 0, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 30),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_canon, 4, 0, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 4, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_type, 4, 0, 15),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum, 4, 0, 15),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_args, 3, 0, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 4, 0, 6),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_const, 4, 0, 7),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_constructor, 4, 0, 6),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 2, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 3, 0, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require, 3, 0, 2),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
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
