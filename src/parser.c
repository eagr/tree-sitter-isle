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
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 1
#define TOKEN_COUNT 103
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
  anon_sym_bv = 35,
  aux_sym_bv_const_token1 = 36,
  aux_sym_bv_const_token2 = 37,
  anon_sym_args = 38,
  anon_sym_ret = 39,
  anon_sym_canon = 40,
  anon_sym_model = 41,
  anon_sym_Bool = 42,
  anon_sym_Int = 43,
  anon_sym_Unit = 44,
  anon_sym_form = 45,
  anon_sym_spec = 46,
  anon_sym_provide = 47,
  anon_sym_require = 48,
  anon_sym_switch = 49,
  anon_sym_EQ_GT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_LT = 53,
  anon_sym_GT = 54,
  anon_sym_EQ = 55,
  anon_sym_not = 56,
  anon_sym_or = 57,
  anon_sym_bvand = 58,
  anon_sym_bvnot = 59,
  anon_sym_bvor = 60,
  anon_sym_bvxor = 61,
  anon_sym_bvadd = 62,
  anon_sym_bvsub = 63,
  anon_sym_bvmul = 64,
  anon_sym_bvneg = 65,
  anon_sym_bvudiv = 66,
  anon_sym_bvurem = 67,
  anon_sym_bvsdiv = 68,
  anon_sym_bvsrem = 69,
  anon_sym_bvuaddo = 70,
  anon_sym_bvsaddo = 71,
  anon_sym_bvusubo = 72,
  anon_sym_bvssubo = 73,
  anon_sym_bvshl = 74,
  anon_sym_bvlshr = 75,
  anon_sym_bvashr = 76,
  anon_sym_bvule = 77,
  anon_sym_bvult = 78,
  anon_sym_bvugt = 79,
  anon_sym_bvuge = 80,
  anon_sym_bvslt = 81,
  anon_sym_bvsle = 82,
  anon_sym_bvsgt = 83,
  anon_sym_bvsge = 84,
  anon_sym_rotl = 85,
  anon_sym_rotr = 86,
  anon_sym_extract = 87,
  anon_sym_concat = 88,
  anon_sym_conv_to = 89,
  anon_sym_int2bv = 90,
  anon_sym_bv2int = 91,
  anon_sym_zero_ext = 92,
  anon_sym_sign_ext = 93,
  anon_sym_widthof = 94,
  anon_sym_subs = 95,
  anon_sym_popcnt = 96,
  anon_sym_rev = 97,
  anon_sym_cls = 98,
  anon_sym_clz = 99,
  anon_sym_load_effect = 100,
  anon_sym_store_effect = 101,
  anon_sym_instantiate = 102,
  sym_source = 103,
  sym__def = 104,
  sym_bool = 105,
  sym_int = 106,
  sym_ty = 107,
  sym_if_let = 108,
  sym_if = 109,
  sym_let = 110,
  sym_let_binding = 111,
  sym__pattern = 112,
  sym_pattern_bind = 113,
  sym_pattern_and = 114,
  sym_pattern_term = 115,
  sym__expr = 116,
  sym_expr_term = 117,
  sym_pragma = 118,
  sym_type = 119,
  sym_type_primitive = 120,
  sym_type_enum = 121,
  sym_type_enum_variant = 122,
  sym_type_enum_variant_field = 123,
  sym_decl = 124,
  sym_decl_params = 125,
  sym_rule = 126,
  sym_extractor = 127,
  sym__extern = 128,
  sym_extern_const = 129,
  sym_extern_constructor = 130,
  sym_extern_extractor = 131,
  sym_convert = 132,
  sym_bv_ty = 133,
  sym_bv_const = 134,
  sym_sig = 135,
  sym_sig_args = 136,
  sym_sig_ret = 137,
  sym_sig_canon = 138,
  sym_model = 139,
  sym_model_type = 140,
  sym_model_ty = 141,
  sym_model_enum = 142,
  sym_model_enum_variant = 143,
  sym_form = 144,
  sym_spec = 145,
  sym_spec_term = 146,
  sym_provide = 147,
  sym_require = 148,
  sym__spec_expr = 149,
  sym_switch = 150,
  sym_spec_expr_pair = 151,
  sym_spec_operation = 152,
  sym__spec_op = 153,
  sym_instantiate = 154,
  aux_sym_source_repeat1 = 155,
  aux_sym_let_repeat1 = 156,
  aux_sym_pattern_and_repeat1 = 157,
  aux_sym_expr_term_repeat1 = 158,
  aux_sym_type_enum_repeat1 = 159,
  aux_sym_type_enum_variant_repeat1 = 160,
  aux_sym_decl_params_repeat1 = 161,
  aux_sym_rule_repeat1 = 162,
  aux_sym_extractor_repeat1 = 163,
  aux_sym_sig_args_repeat1 = 164,
  aux_sym_model_enum_repeat1 = 165,
  aux_sym_form_repeat1 = 166,
  aux_sym_provide_repeat1 = 167,
  aux_sym_switch_repeat1 = 168,
  anon_alias_sym_ty = 169,
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
  [10] = 10,
  [11] = 8,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 13,
  [20] = 16,
  [21] = 15,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 23,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 35,
  [42] = 42,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 50,
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
  [66] = 62,
  [67] = 67,
  [68] = 61,
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
  [109] = 76,
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
  [182] = 61,
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
  [198] = 76,
  [199] = 199,
  [200] = 200,
  [201] = 64,
  [202] = 202,
  [203] = 203,
  [204] = 56,
  [205] = 57,
  [206] = 58,
  [207] = 207,
  [208] = 60,
  [209] = 55,
  [210] = 59,
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
  [225] = 62,
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
  [262] = 75,
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
  [286] = 72,
  [287] = 287,
  [288] = 65,
  [289] = 289,
  [290] = 69,
  [291] = 73,
  [292] = 292,
  [293] = 71,
  [294] = 67,
  [295] = 295,
  [296] = 70,
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
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '#', 17,
        '$', 239,
        '(', 240,
        ')', 244,
        '-', 8,
        '0', 118,
        ';', 274,
        '<', 305,
        '=', 307,
        '>', 306,
        '@', 249,
        'B', 195,
        'I', 184,
        'U', 185,
        'a', 202,
        'b', 227,
        'c', 138,
        'd', 149,
        'e', 186,
        'f', 194,
        'i', 163,
        'm', 192,
        'n', 198,
        'p', 203,
        'r', 150,
        's', 200,
        't', 230,
        0x200b, 130,
        0x2028, 130,
        0x2029, 130,
        0x2060, 130,
        0xfeff, 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 17,
        '(', 240,
        ')', 244,
        '-', 8,
        '0', 118,
        ';', 274,
        0x200b, 131,
        0x2028, 131,
        0x2029, 131,
        0x2060, 131,
        0xfeff, 131,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(238);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 239,
        '(', 241,
        ')', 244,
        '-', 8,
        '0', 118,
        ';', 274,
        '@', 249,
        0x200b, 128,
        0x2028, 128,
        0x2029, 128,
        0x2060, 128,
        0xfeff, 128,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(238);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '$', 239,
        '(', 241,
        ')', 244,
        '-', 8,
        '0', 118,
        ';', 274,
        0x200b, 129,
        0x2028, 129,
        0x2029, 129,
        0x2060, 129,
        0xfeff, 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(238);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(238);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '(', 9,
        ';', 274,
        '<', 305,
        '=', 307,
        '>', 306,
        'i', 165,
        0x200b, 133,
        0x2028, 133,
        0x2029, 133,
        0x2060, 133,
        0xfeff, 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(238);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(238);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'q') ADVANCE(102);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 105:
      if (lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 108:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 111:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      END_STATE();
    case 112:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(124);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '$', 239,
        '(', 241,
        ')', 244,
        '-', 8,
        '0', 118,
        ';', 274,
        '@', 248,
        'B', 70,
        'I', 59,
        'U', 60,
        'a', 78,
        'b', 105,
        'c', 13,
        'd', 26,
        'e', 61,
        'f', 69,
        'i', 40,
        'm', 67,
        'n', 74,
        'p', 79,
        'r', 27,
        's', 76,
        't', 108,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(238);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 238,
        '$', 238,
        '-', 132,
        '0', 119,
        '@', 249,
        0x200b, 128,
        0x2028, 128,
        0x2029, 128,
        0x2060, 128,
        0xfeff, 128,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(238);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 238,
        '$', 238,
        '-', 132,
        '0', 119,
        '@', 238,
        0x200b, 129,
        0x2028, 129,
        0x2029, 129,
        0x2060, 129,
        0xfeff, 129,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(238);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 141,
        '$', 238,
        '-', 132,
        '0', 119,
        '<', 305,
        '=', 307,
        '>', 306,
        '@', 249,
        'B', 195,
        'I', 184,
        'U', 185,
        'a', 202,
        'b', 227,
        'c', 138,
        'd', 149,
        'e', 186,
        'f', 194,
        'i', 163,
        'm', 192,
        'n', 198,
        'p', 203,
        'r', 150,
        's', 200,
        't', 230,
        0x200b, 130,
        0x2028, 130,
        0x2029, 130,
        0x2060, 130,
        0xfeff, 130,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(238);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '#', 141,
        '$', 238,
        '-', 132,
        '0', 119,
        '@', 238,
        0x200b, 131,
        0x2028, 131,
        0x2029, 131,
        0x2060, 131,
        0xfeff, 131,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(238);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '<', 305,
        '=', 307,
        '>', 306,
        '@', 238,
        'i', 165,
        0x200b, 133,
        0x2028, 133,
        0x2029, 133,
        0x2060, 133,
        0xfeff, 133,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(238);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(238);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '@') ADVANCE(238);
      if (lookahead == 0x200b ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(135);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(238);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'x') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(224);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(233);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || 'F' < lookahead)) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_const_ident);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(275);
      if (lookahead == ';') ADVANCE(10);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ';') ADVANCE(10);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_pragma);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_nodebug);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_nodebug);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_primitive);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_primitive);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_decl);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_decl);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_extractor);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_convert);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_convert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_bv);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_bv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_bv_const_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_bv_const_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_args);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_canon);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_canon);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_model);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Int);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_form);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_form);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_spec);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_spec);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_provide);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_provide);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_instantiate);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_instantiate);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@') ADVANCE(238);
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
        'b', 3,
        'c', 4,
        'e', 5,
        'f', 6,
        'i', 7,
        'l', 8,
        'm', 9,
        'n', 10,
        'o', 11,
        'p', 12,
        'r', 13,
        's', 14,
        't', 15,
        'w', 16,
        'z', 17,
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
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '2', 43,
        'a', 44,
        'l', 45,
        'm', 46,
        'n', 47,
        'o', 48,
        's', 49,
        'u', 50,
        'x', 51,
      );
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 'z') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        'a', 84,
        'd', 85,
        'g', 86,
        'h', 87,
        'l', 88,
        'r', 89,
        's', 90,
        'u', 91,
      );
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_cls);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_clz);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 58:
      if (lookahead == '2') ADVANCE(104);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_rev);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bvor);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(152);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_rotl);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_rotr);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_subs);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_bvadd);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_bvand);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_bvmul);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_bvneg);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_bvnot);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 128:
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bvsge);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_bvsgt);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_bvshl);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_bvsle);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_bvslt);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_bvsub);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 138:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_bvuge);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_bvugt);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_bvule);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_bvult);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_bvxor);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bv2int);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bvashr);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bvlshr);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_bvsdiv);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_bvsrem);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_bvudiv);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_bvurem);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_int2bv);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(192);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 180:
      if (lookahead == 'x') ADVANCE(194);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bvsaddo);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_bvssubo);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_bvuaddo);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_bvusubo);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_conv_to);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_widthof);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_sign_ext);
      END_STATE();
    case 201:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_zero_ext);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_infallible);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_load_effect);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_store_effect);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 116},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
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
  [45] = {.lex_state = 116},
  [46] = {.lex_state = 116},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 2},
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
  [79] = {.lex_state = 116},
  [80] = {.lex_state = 116},
  [81] = {.lex_state = 116},
  [82] = {.lex_state = 116},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 116},
  [85] = {.lex_state = 116},
  [86] = {.lex_state = 116},
  [87] = {.lex_state = 116},
  [88] = {.lex_state = 116},
  [89] = {.lex_state = 116},
  [90] = {.lex_state = 116},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 116},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 116},
  [97] = {.lex_state = 116},
  [98] = {.lex_state = 116},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 116},
  [102] = {.lex_state = 116},
  [103] = {.lex_state = 116},
  [104] = {.lex_state = 116},
  [105] = {.lex_state = 116},
  [106] = {.lex_state = 116},
  [107] = {.lex_state = 116},
  [108] = {.lex_state = 116},
  [109] = {.lex_state = 116},
  [110] = {.lex_state = 116},
  [111] = {.lex_state = 116},
  [112] = {.lex_state = 116},
  [113] = {.lex_state = 116},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 116},
  [116] = {.lex_state = 116},
  [117] = {.lex_state = 116},
  [118] = {.lex_state = 116},
  [119] = {.lex_state = 116},
  [120] = {.lex_state = 116},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 116},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 116},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 116},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 116},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 116},
  [137] = {.lex_state = 116},
  [138] = {.lex_state = 116},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 116},
  [141] = {.lex_state = 116},
  [142] = {.lex_state = 116},
  [143] = {.lex_state = 116},
  [144] = {.lex_state = 116},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 116},
  [147] = {.lex_state = 116},
  [148] = {.lex_state = 116},
  [149] = {.lex_state = 116},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 116},
  [152] = {.lex_state = 116},
  [153] = {.lex_state = 116},
  [154] = {.lex_state = 116},
  [155] = {.lex_state = 116},
  [156] = {.lex_state = 116},
  [157] = {.lex_state = 116},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 116},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 116},
  [163] = {.lex_state = 116},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 116},
  [167] = {.lex_state = 116},
  [168] = {.lex_state = 116},
  [169] = {.lex_state = 116},
  [170] = {.lex_state = 116},
  [171] = {.lex_state = 116},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 116},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 116},
  [177] = {.lex_state = 116},
  [178] = {.lex_state = 116},
  [179] = {.lex_state = 116},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 116},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 116},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 116},
  [187] = {.lex_state = 116},
  [188] = {.lex_state = 116},
  [189] = {.lex_state = 116},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 116},
  [193] = {.lex_state = 116},
  [194] = {.lex_state = 116},
  [195] = {.lex_state = 116},
  [196] = {.lex_state = 116},
  [197] = {.lex_state = 116},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 116},
  [200] = {.lex_state = 116},
  [201] = {.lex_state = 116},
  [202] = {.lex_state = 116},
  [203] = {.lex_state = 116},
  [204] = {.lex_state = 116},
  [205] = {.lex_state = 116},
  [206] = {.lex_state = 116},
  [207] = {.lex_state = 116},
  [208] = {.lex_state = 116},
  [209] = {.lex_state = 116},
  [210] = {.lex_state = 116},
  [211] = {.lex_state = 116},
  [212] = {.lex_state = 116},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 116},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 116},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 116},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 116},
  [223] = {.lex_state = 116},
  [224] = {.lex_state = 116},
  [225] = {.lex_state = 116},
  [226] = {.lex_state = 116},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 116},
  [229] = {.lex_state = 116},
  [230] = {.lex_state = 116},
  [231] = {.lex_state = 116},
  [232] = {.lex_state = 116},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 116},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 116},
  [238] = {.lex_state = 116},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 116},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 116},
  [243] = {.lex_state = 116},
  [244] = {.lex_state = 116},
  [245] = {.lex_state = 116},
  [246] = {.lex_state = 116},
  [247] = {.lex_state = 116},
  [248] = {.lex_state = 116},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 116},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 116},
  [253] = {.lex_state = 116},
  [254] = {.lex_state = 116},
  [255] = {.lex_state = 116},
  [256] = {.lex_state = 116},
  [257] = {.lex_state = 116},
  [258] = {.lex_state = 116},
  [259] = {.lex_state = 116},
  [260] = {.lex_state = 116},
  [261] = {.lex_state = 116},
  [262] = {.lex_state = 116},
  [263] = {.lex_state = 116},
  [264] = {.lex_state = 116},
  [265] = {.lex_state = 116},
  [266] = {.lex_state = 116},
  [267] = {.lex_state = 116},
  [268] = {.lex_state = 116},
  [269] = {.lex_state = 116},
  [270] = {.lex_state = 116},
  [271] = {.lex_state = 116},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 116},
  [274] = {.lex_state = 116},
  [275] = {.lex_state = 116},
  [276] = {.lex_state = 116},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 116},
  [279] = {.lex_state = 116},
  [280] = {.lex_state = 116},
  [281] = {.lex_state = 116},
  [282] = {.lex_state = 116},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 116},
  [285] = {.lex_state = 116},
  [286] = {.lex_state = 116},
  [287] = {.lex_state = 116},
  [288] = {.lex_state = 116},
  [289] = {.lex_state = 116},
  [290] = {.lex_state = 116},
  [291] = {.lex_state = 116},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 116},
  [294] = {.lex_state = 116},
  [295] = {.lex_state = 116},
  [296] = {.lex_state = 116},
  [297] = {.lex_state = 116},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 116},
  [300] = {.lex_state = 116},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 116},
  [303] = {.lex_state = 116},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 116},
  [306] = {.lex_state = 116},
  [307] = {.lex_state = 116},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 116},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 116},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 116},
  [315] = {.lex_state = 116},
  [316] = {.lex_state = 116},
  [317] = {.lex_state = 116},
  [318] = {.lex_state = 116},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 116},
  [321] = {.lex_state = 116},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 116},
  [324] = {.lex_state = 116},
  [325] = {.lex_state = 116},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 116},
  [328] = {.lex_state = 116},
  [329] = {.lex_state = 116},
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
    [anon_sym_bv2int] = ACTIONS(1),
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
    [sym__def] = STATE(46),
    [sym_pragma] = STATE(46),
    [sym_type] = STATE(46),
    [sym_decl] = STATE(46),
    [sym_rule] = STATE(46),
    [sym_extractor] = STATE(46),
    [sym__extern] = STATE(46),
    [sym_convert] = STATE(46),
    [sym_model] = STATE(46),
    [sym_form] = STATE(46),
    [sym_spec] = STATE(46),
    [sym_instantiate] = STATE(46),
    [aux_sym_source_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_switch,
    STATE(11), 1,
      sym__spec_op,
    ACTIONS(13), 54,
      anon_sym_if,
      anon_sym_and,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
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
  [69] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_switch,
    STATE(8), 1,
      sym__spec_op,
    ACTIONS(19), 54,
      anon_sym_if,
      anon_sym_and,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
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
  [138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      sym_ident,
      sym_unit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(5), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(35), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [212] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(39), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(10), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [249] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 2,
      sym_ident,
      sym_unit,
    ACTIONS(46), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(49), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [286] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(60), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(9), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [323] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(35), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [360] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(35), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [397] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(68), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(12), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [434] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(35), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(7), 7,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
      aux_sym_provide_repeat1,
  [471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(16), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [507] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_ident,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(92), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(14), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [543] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
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
  [579] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(14), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [615] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(14), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [651] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 2,
      sym_ident,
      sym_unit,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(117), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(245), 6,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [687] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(20), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(14), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [759] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(22), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(14), 7,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
      aux_sym_pattern_and_repeat1,
  [831] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(137), 2,
      sym_ident,
      sym_unit,
    ACTIONS(117), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(112), 6,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [864] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(139), 2,
      sym_ident,
      sym_const_ident,
    STATE(63), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [897] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_ident,
      sym_const_ident,
    STATE(28), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [930] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_ident,
      sym_const_ident,
    STATE(30), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [963] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 2,
      sym_ident,
      sym_const_ident,
    STATE(31), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [996] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      sym_ident,
      sym_const_ident,
    STATE(63), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [1029] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(151), 2,
      sym_ident,
      sym_const_ident,
    STATE(24), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [1062] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      sym_ident,
      sym_const_ident,
    STATE(63), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [1095] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 2,
      sym_ident,
      sym_const_ident,
    STATE(63), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(117), 4,
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
  [1128] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(157), 2,
      sym_ident,
      sym_unit,
    ACTIONS(27), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(33), 6,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [1161] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(159), 2,
      sym_ident,
      sym_unit,
    ACTIONS(117), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(282), 6,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [1194] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      aux_sym_bv_const_token1,
      aux_sym_bv_const_token2,
    ACTIONS(161), 2,
      sym_ident,
      sym_unit,
    ACTIONS(117), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(119), 6,
      sym_bool,
      sym_int,
      sym_bv_const,
      sym__spec_expr,
      sym_switch,
      sym_spec_operation,
  [1227] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(43), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1259] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_ident,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(171), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(71), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1323] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(183), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(38), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1355] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(191), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(38), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1387] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_ident,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1419] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(39), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(49), 6,
      sym_bool,
      sym_int,
      sym__pattern,
      sym_pattern_bind,
      sym_pattern_and,
      sym_pattern_term,
  [1483] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(191), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(78), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
    STATE(38), 6,
      sym_bool,
      sym_int,
      sym_let,
      sym__expr,
      sym_expr_term,
      aux_sym_expr_term_repeat1,
  [1515] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_ident,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      sym_wildcard,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1547] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(45), 13,
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
  [1572] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(45), 13,
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
  [1597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(218), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1653] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1681] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(222), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1709] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_pragma,
    ACTIONS(226), 1,
      anon_sym_type,
    ACTIONS(228), 1,
      anon_sym_extern,
    ACTIONS(230), 1,
      anon_sym_decl,
    ACTIONS(232), 1,
      anon_sym_rule,
    ACTIONS(234), 1,
      anon_sym_extractor,
    ACTIONS(236), 1,
      anon_sym_convert,
    ACTIONS(238), 1,
      anon_sym_model,
    ACTIONS(240), 1,
      anon_sym_form,
    ACTIONS(242), 1,
      anon_sym_spec,
    ACTIONS(244), 1,
      anon_sym_instantiate,
    STATE(269), 3,
      sym_extern_const,
      sym_extern_constructor,
      sym_extern_extractor,
  [1751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(248), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1807] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      sym_ident,
      sym_const_ident,
    ACTIONS(117), 4,
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
  [1835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 12,
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
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 12,
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
  [1871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 12,
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
  [1889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 12,
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
  [1907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 12,
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
  [1925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 12,
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
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 12,
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
  [1961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 12,
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
  [1979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    STATE(63), 3,
      sym_if_let,
      sym_if,
      aux_sym_rule_repeat1,
    ACTIONS(268), 8,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
  [2001] = 3,
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
  [2021] = 2,
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
  [2038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 11,
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
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 11,
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
  [2072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 11,
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
  [2089] = 2,
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
  [2106] = 2,
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
  [2123] = 2,
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
  [2140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 10,
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
  [2156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 10,
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
  [2172] = 2,
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
  [2188] = 2,
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
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [2219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 9,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_ident,
      sym_const_ident,
      anon_sym_LPAREN,
  [2234] = 2,
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
  [2249] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(81), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2269] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(84), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2289] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2309] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(86), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2329] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_ident,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_pattern_term,
    STATE(192), 1,
      sym_int,
    ACTIONS(117), 4,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2351] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2371] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2391] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
    STATE(85), 3,
      sym_bv_ty,
      sym_model_ty,
      aux_sym_sig_args_repeat1,
  [2411] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_int_token1,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_pattern_term,
    STATE(178), 1,
      sym_int,
    ACTIONS(329), 3,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2432] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_int_token1,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_int,
    ACTIONS(329), 3,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
  [2450] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(232), 2,
      sym_bv_ty,
      sym_model_ty,
    ACTIONS(305), 3,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2466] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 2,
      anon_sym_extern,
      anon_sym_nodebug,
    STATE(297), 2,
      sym_type_primitive,
      sym_type_enum,
  [2481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_type_enum_variant,
      aux_sym_type_enum_repeat1,
  [2498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_type_enum_variant,
      aux_sym_type_enum_repeat1,
  [2515] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 4,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_ident,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_type_enum_variant,
      aux_sym_type_enum_repeat1,
  [2545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_ident,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(118), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2562] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 4,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2575] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 4,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Unit,
  [2588] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_ident,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [2616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_ident,
    ACTIONS(382), 1,
      anon_sym_pure,
    ACTIONS(384), 1,
      anon_sym_multi,
    ACTIONS(386), 1,
      anon_sym_partial,
  [2632] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(107), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2646] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(103), 2,
      sym_model_enum_variant,
      aux_sym_model_enum_repeat1,
  [2660] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(108), 2,
      sym_model_enum_variant,
      aux_sym_model_enum_repeat1,
  [2674] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(117), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2688] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(110), 2,
      sym_type_enum_variant_field,
      aux_sym_type_enum_variant_repeat1,
  [2702] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2716] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2730] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(108), 2,
      sym_model_enum_variant,
      aux_sym_model_enum_repeat1,
  [2744] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 3,
      anon_sym_RPAREN,
      anon_sym_extern,
      anon_sym_nodebug,
  [2756] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(113), 2,
      sym_type_enum_variant_field,
      aux_sym_type_enum_variant_repeat1,
  [2770] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2784] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(98), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2798] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(113), 2,
      sym_type_enum_variant_field,
      aux_sym_type_enum_variant_repeat1,
  [2812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_ident,
    ACTIONS(434), 1,
      anon_sym_if_DASHlet,
    ACTIONS(436), 1,
      anon_sym_if,
    ACTIONS(438), 1,
      anon_sym_let,
  [2828] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2842] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2856] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2870] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_sig,
      aux_sym_form_repeat1,
  [2884] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(120), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2898] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_spec_expr_pair,
      aux_sym_switch_repeat1,
  [2912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_ident,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [2926] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(115), 2,
      sym_let_binding,
      aux_sym_let_repeat1,
  [2940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_ident,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(121), 2,
      sym_ty,
      aux_sym_decl_params_repeat1,
  [2954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_ident,
    ACTIONS(465), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_ident,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_extractor_repeat1,
  [2978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_ident,
    ACTIONS(473), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_ident,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_extractor_repeat1,
  [3002] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(309), 2,
      sym_type_primitive,
      sym_type_enum,
  [3013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_ident,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_extractor_repeat1,
  [3026] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym_require,
  [3039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_ident,
    ACTIONS(489), 1,
      anon_sym_multi,
    ACTIONS(491), 1,
      anon_sym_partial,
  [3052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_ident,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_extractor_repeat1,
  [3065] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_extractor,
    ACTIONS(497), 1,
      anon_sym_const,
    ACTIONS(499), 1,
      anon_sym_constructor,
  [3078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_ident,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_extractor_repeat1,
  [3102] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    STATE(329), 2,
      sym_model_type,
      sym_model_enum,
  [3113] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [3123] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [3133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(90), 1,
      sym_ty,
  [3143] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_provide,
  [3153] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
  [3163] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
  [3173] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [3183] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [3193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(231), 1,
      sym_ty,
  [3203] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
  [3213] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
  [3223] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
  [3233] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_ident,
    ACTIONS(558), 1,
      anon_sym_infallible,
  [3253] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
  [3263] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
  [3273] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
  [3283] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_primitive,
    ACTIONS(574), 1,
      anon_sym_enum,
  [3293] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [3303] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
  [3313] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(259), 1,
      sym_ty,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(314), 1,
      sym_ty,
  [3343] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(323), 1,
      sym_ty,
  [3363] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_decl_params,
  [3373] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym_decl_params,
  [3383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_ident,
    ACTIONS(596), 1,
      anon_sym_partial,
  [3393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(261), 1,
      sym_ty,
  [3403] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_decl_params,
  [3413] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
  [3423] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
  [3433] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
  [3443] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [3453] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_decl_params,
  [3463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_ident,
    STATE(53), 1,
      sym_ty,
  [3473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(265), 1,
      sym_ty,
  [3483] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
  [3493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(270), 1,
      sym_ty,
  [3503] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
  [3513] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_decl_params,
  [3523] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_pattern_term,
  [3533] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [3543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_ident,
    ACTIONS(630), 1,
      anon_sym_partial,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_ident,
    STATE(220), 1,
      sym_ty,
  [3563] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(273), 1,
      sym_ty,
  [3583] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
  [3593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(254), 1,
      sym_ty,
  [3603] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
  [3613] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_decl_params,
  [3623] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
  [3633] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LPAREN,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
  [3643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(136), 1,
      sym_ty,
  [3653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_ident,
    ACTIONS(652), 1,
      anon_sym_let,
  [3663] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_pattern_term,
  [3673] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_type,
    ACTIONS(656), 1,
      anon_sym_enum,
  [3683] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_spec_term,
  [3693] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
  [3703] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
  [3713] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [3723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      sym_ident,
  [3733] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_sig_args,
  [3743] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
  [3753] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      anon_sym_AT,
  [3763] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
  [3773] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
  [3783] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
  [3793] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [3803] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [3813] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_if,
    ACTIONS(696), 1,
      anon_sym_if_DASHlet,
  [3823] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [3833] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
  [3843] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [3853] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
  [3863] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_sig_ret,
  [3873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(299), 1,
      sym_ty,
  [3883] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(710), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_ident,
    ACTIONS(716), 1,
      anon_sym_and,
  [3903] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_let,
  [3923] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_ident,
    ACTIONS(728), 1,
      anon_sym_and,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_ident,
    STATE(272), 1,
      sym_ty,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(244), 1,
      sym_ty,
  [3963] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_decl_params,
  [3973] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      sym_sig_canon,
  [3983] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_decl_params,
  [3993] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
  [4003] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_canon,
  [4010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_ident,
  [4017] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
  [4024] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_bv,
  [4031] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [4038] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
  [4045] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_ident,
  [4059] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_ident,
  [4073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_ident,
  [4080] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [4087] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_ident,
  [4101] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_ret,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_ident,
  [4115] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
  [4122] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
  [4129] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [4136] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
  [4143] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
  [4150] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_args,
  [4157] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
  [4164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
  [4171] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(782), 1,
      ts_builtin_sym_end,
  [4178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_ident,
  [4185] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
  [4192] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
  [4199] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
  [4206] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [4213] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
  [4220] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
  [4227] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
  [4234] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
  [4241] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [4248] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
  [4255] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [4262] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
  [4269] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LPAREN,
  [4276] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
  [4283] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
  [4290] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [4297] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
  [4304] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [4311] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
  [4318] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_ident,
  [4332] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [4339] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
  [4346] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [4353] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [4360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_ident,
  [4367] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
  [4374] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
  [4381] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
  [4388] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_require,
  [4395] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [4402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_ident,
  [4409] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_const_ident,
  [4416] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
  [4423] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
  [4430] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [4437] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
  [4444] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [4451] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
  [4458] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
  [4465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_ident,
  [4472] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [4479] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
  [4486] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_provide,
  [4493] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
  [4500] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym_ident,
  [4514] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
  [4521] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_ident,
  [4535] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [4542] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [4549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym_ident,
  [4556] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [4563] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
  [4570] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_ident,
  [4584] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_ident,
  [4598] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_ident,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_ident,
  [4619] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
  [4626] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
  [4633] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [4640] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [4647] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
  [4654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_ident,
  [4661] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
  [4668] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_ident,
  [4682] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
  [4689] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
  [4696] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_ident,
  [4710] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
  [4717] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
  [4724] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 175,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 249,
  [SMALL_STATE(8)] = 286,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 360,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 471,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 543,
  [SMALL_STATE(16)] = 579,
  [SMALL_STATE(17)] = 615,
  [SMALL_STATE(18)] = 651,
  [SMALL_STATE(19)] = 687,
  [SMALL_STATE(20)] = 723,
  [SMALL_STATE(21)] = 759,
  [SMALL_STATE(22)] = 795,
  [SMALL_STATE(23)] = 831,
  [SMALL_STATE(24)] = 864,
  [SMALL_STATE(25)] = 897,
  [SMALL_STATE(26)] = 930,
  [SMALL_STATE(27)] = 963,
  [SMALL_STATE(28)] = 996,
  [SMALL_STATE(29)] = 1029,
  [SMALL_STATE(30)] = 1062,
  [SMALL_STATE(31)] = 1095,
  [SMALL_STATE(32)] = 1128,
  [SMALL_STATE(33)] = 1161,
  [SMALL_STATE(34)] = 1194,
  [SMALL_STATE(35)] = 1227,
  [SMALL_STATE(36)] = 1259,
  [SMALL_STATE(37)] = 1291,
  [SMALL_STATE(38)] = 1323,
  [SMALL_STATE(39)] = 1355,
  [SMALL_STATE(40)] = 1387,
  [SMALL_STATE(41)] = 1419,
  [SMALL_STATE(42)] = 1451,
  [SMALL_STATE(43)] = 1483,
  [SMALL_STATE(44)] = 1515,
  [SMALL_STATE(45)] = 1547,
  [SMALL_STATE(46)] = 1572,
  [SMALL_STATE(47)] = 1597,
  [SMALL_STATE(48)] = 1625,
  [SMALL_STATE(49)] = 1653,
  [SMALL_STATE(50)] = 1681,
  [SMALL_STATE(51)] = 1709,
  [SMALL_STATE(52)] = 1751,
  [SMALL_STATE(53)] = 1779,
  [SMALL_STATE(54)] = 1807,
  [SMALL_STATE(55)] = 1835,
  [SMALL_STATE(56)] = 1853,
  [SMALL_STATE(57)] = 1871,
  [SMALL_STATE(58)] = 1889,
  [SMALL_STATE(59)] = 1907,
  [SMALL_STATE(60)] = 1925,
  [SMALL_STATE(61)] = 1943,
  [SMALL_STATE(62)] = 1961,
  [SMALL_STATE(63)] = 1979,
  [SMALL_STATE(64)] = 2001,
  [SMALL_STATE(65)] = 2021,
  [SMALL_STATE(66)] = 2038,
  [SMALL_STATE(67)] = 2055,
  [SMALL_STATE(68)] = 2072,
  [SMALL_STATE(69)] = 2089,
  [SMALL_STATE(70)] = 2106,
  [SMALL_STATE(71)] = 2123,
  [SMALL_STATE(72)] = 2140,
  [SMALL_STATE(73)] = 2156,
  [SMALL_STATE(74)] = 2172,
  [SMALL_STATE(75)] = 2188,
  [SMALL_STATE(76)] = 2204,
  [SMALL_STATE(77)] = 2219,
  [SMALL_STATE(78)] = 2234,
  [SMALL_STATE(79)] = 2249,
  [SMALL_STATE(80)] = 2269,
  [SMALL_STATE(81)] = 2289,
  [SMALL_STATE(82)] = 2309,
  [SMALL_STATE(83)] = 2329,
  [SMALL_STATE(84)] = 2351,
  [SMALL_STATE(85)] = 2371,
  [SMALL_STATE(86)] = 2391,
  [SMALL_STATE(87)] = 2411,
  [SMALL_STATE(88)] = 2432,
  [SMALL_STATE(89)] = 2450,
  [SMALL_STATE(90)] = 2466,
  [SMALL_STATE(91)] = 2481,
  [SMALL_STATE(92)] = 2498,
  [SMALL_STATE(93)] = 2515,
  [SMALL_STATE(94)] = 2528,
  [SMALL_STATE(95)] = 2545,
  [SMALL_STATE(96)] = 2562,
  [SMALL_STATE(97)] = 2575,
  [SMALL_STATE(98)] = 2588,
  [SMALL_STATE(99)] = 2602,
  [SMALL_STATE(100)] = 2616,
  [SMALL_STATE(101)] = 2632,
  [SMALL_STATE(102)] = 2646,
  [SMALL_STATE(103)] = 2660,
  [SMALL_STATE(104)] = 2674,
  [SMALL_STATE(105)] = 2688,
  [SMALL_STATE(106)] = 2702,
  [SMALL_STATE(107)] = 2716,
  [SMALL_STATE(108)] = 2730,
  [SMALL_STATE(109)] = 2744,
  [SMALL_STATE(110)] = 2756,
  [SMALL_STATE(111)] = 2770,
  [SMALL_STATE(112)] = 2784,
  [SMALL_STATE(113)] = 2798,
  [SMALL_STATE(114)] = 2812,
  [SMALL_STATE(115)] = 2828,
  [SMALL_STATE(116)] = 2842,
  [SMALL_STATE(117)] = 2856,
  [SMALL_STATE(118)] = 2870,
  [SMALL_STATE(119)] = 2884,
  [SMALL_STATE(120)] = 2898,
  [SMALL_STATE(121)] = 2912,
  [SMALL_STATE(122)] = 2926,
  [SMALL_STATE(123)] = 2940,
  [SMALL_STATE(124)] = 2954,
  [SMALL_STATE(125)] = 2965,
  [SMALL_STATE(126)] = 2978,
  [SMALL_STATE(127)] = 2989,
  [SMALL_STATE(128)] = 3002,
  [SMALL_STATE(129)] = 3013,
  [SMALL_STATE(130)] = 3026,
  [SMALL_STATE(131)] = 3039,
  [SMALL_STATE(132)] = 3052,
  [SMALL_STATE(133)] = 3065,
  [SMALL_STATE(134)] = 3078,
  [SMALL_STATE(135)] = 3089,
  [SMALL_STATE(136)] = 3102,
  [SMALL_STATE(137)] = 3113,
  [SMALL_STATE(138)] = 3123,
  [SMALL_STATE(139)] = 3133,
  [SMALL_STATE(140)] = 3143,
  [SMALL_STATE(141)] = 3153,
  [SMALL_STATE(142)] = 3163,
  [SMALL_STATE(143)] = 3173,
  [SMALL_STATE(144)] = 3183,
  [SMALL_STATE(145)] = 3193,
  [SMALL_STATE(146)] = 3203,
  [SMALL_STATE(147)] = 3213,
  [SMALL_STATE(148)] = 3223,
  [SMALL_STATE(149)] = 3233,
  [SMALL_STATE(150)] = 3243,
  [SMALL_STATE(151)] = 3253,
  [SMALL_STATE(152)] = 3263,
  [SMALL_STATE(153)] = 3273,
  [SMALL_STATE(154)] = 3283,
  [SMALL_STATE(155)] = 3293,
  [SMALL_STATE(156)] = 3303,
  [SMALL_STATE(157)] = 3313,
  [SMALL_STATE(158)] = 3323,
  [SMALL_STATE(159)] = 3333,
  [SMALL_STATE(160)] = 3343,
  [SMALL_STATE(161)] = 3353,
  [SMALL_STATE(162)] = 3363,
  [SMALL_STATE(163)] = 3373,
  [SMALL_STATE(164)] = 3383,
  [SMALL_STATE(165)] = 3393,
  [SMALL_STATE(166)] = 3403,
  [SMALL_STATE(167)] = 3413,
  [SMALL_STATE(168)] = 3423,
  [SMALL_STATE(169)] = 3433,
  [SMALL_STATE(170)] = 3443,
  [SMALL_STATE(171)] = 3453,
  [SMALL_STATE(172)] = 3463,
  [SMALL_STATE(173)] = 3473,
  [SMALL_STATE(174)] = 3483,
  [SMALL_STATE(175)] = 3493,
  [SMALL_STATE(176)] = 3503,
  [SMALL_STATE(177)] = 3513,
  [SMALL_STATE(178)] = 3523,
  [SMALL_STATE(179)] = 3533,
  [SMALL_STATE(180)] = 3543,
  [SMALL_STATE(181)] = 3553,
  [SMALL_STATE(182)] = 3563,
  [SMALL_STATE(183)] = 3573,
  [SMALL_STATE(184)] = 3583,
  [SMALL_STATE(185)] = 3593,
  [SMALL_STATE(186)] = 3603,
  [SMALL_STATE(187)] = 3613,
  [SMALL_STATE(188)] = 3623,
  [SMALL_STATE(189)] = 3633,
  [SMALL_STATE(190)] = 3643,
  [SMALL_STATE(191)] = 3653,
  [SMALL_STATE(192)] = 3663,
  [SMALL_STATE(193)] = 3673,
  [SMALL_STATE(194)] = 3683,
  [SMALL_STATE(195)] = 3693,
  [SMALL_STATE(196)] = 3703,
  [SMALL_STATE(197)] = 3713,
  [SMALL_STATE(198)] = 3723,
  [SMALL_STATE(199)] = 3733,
  [SMALL_STATE(200)] = 3743,
  [SMALL_STATE(201)] = 3753,
  [SMALL_STATE(202)] = 3763,
  [SMALL_STATE(203)] = 3773,
  [SMALL_STATE(204)] = 3783,
  [SMALL_STATE(205)] = 3793,
  [SMALL_STATE(206)] = 3803,
  [SMALL_STATE(207)] = 3813,
  [SMALL_STATE(208)] = 3823,
  [SMALL_STATE(209)] = 3833,
  [SMALL_STATE(210)] = 3843,
  [SMALL_STATE(211)] = 3853,
  [SMALL_STATE(212)] = 3863,
  [SMALL_STATE(213)] = 3873,
  [SMALL_STATE(214)] = 3883,
  [SMALL_STATE(215)] = 3893,
  [SMALL_STATE(216)] = 3903,
  [SMALL_STATE(217)] = 3913,
  [SMALL_STATE(218)] = 3923,
  [SMALL_STATE(219)] = 3933,
  [SMALL_STATE(220)] = 3943,
  [SMALL_STATE(221)] = 3953,
  [SMALL_STATE(222)] = 3963,
  [SMALL_STATE(223)] = 3973,
  [SMALL_STATE(224)] = 3983,
  [SMALL_STATE(225)] = 3993,
  [SMALL_STATE(226)] = 4003,
  [SMALL_STATE(227)] = 4010,
  [SMALL_STATE(228)] = 4017,
  [SMALL_STATE(229)] = 4024,
  [SMALL_STATE(230)] = 4031,
  [SMALL_STATE(231)] = 4038,
  [SMALL_STATE(232)] = 4045,
  [SMALL_STATE(233)] = 4052,
  [SMALL_STATE(234)] = 4059,
  [SMALL_STATE(235)] = 4066,
  [SMALL_STATE(236)] = 4073,
  [SMALL_STATE(237)] = 4080,
  [SMALL_STATE(238)] = 4087,
  [SMALL_STATE(239)] = 4094,
  [SMALL_STATE(240)] = 4101,
  [SMALL_STATE(241)] = 4108,
  [SMALL_STATE(242)] = 4115,
  [SMALL_STATE(243)] = 4122,
  [SMALL_STATE(244)] = 4129,
  [SMALL_STATE(245)] = 4136,
  [SMALL_STATE(246)] = 4143,
  [SMALL_STATE(247)] = 4150,
  [SMALL_STATE(248)] = 4157,
  [SMALL_STATE(249)] = 4164,
  [SMALL_STATE(250)] = 4171,
  [SMALL_STATE(251)] = 4178,
  [SMALL_STATE(252)] = 4185,
  [SMALL_STATE(253)] = 4192,
  [SMALL_STATE(254)] = 4199,
  [SMALL_STATE(255)] = 4206,
  [SMALL_STATE(256)] = 4213,
  [SMALL_STATE(257)] = 4220,
  [SMALL_STATE(258)] = 4227,
  [SMALL_STATE(259)] = 4234,
  [SMALL_STATE(260)] = 4241,
  [SMALL_STATE(261)] = 4248,
  [SMALL_STATE(262)] = 4255,
  [SMALL_STATE(263)] = 4262,
  [SMALL_STATE(264)] = 4269,
  [SMALL_STATE(265)] = 4276,
  [SMALL_STATE(266)] = 4283,
  [SMALL_STATE(267)] = 4290,
  [SMALL_STATE(268)] = 4297,
  [SMALL_STATE(269)] = 4304,
  [SMALL_STATE(270)] = 4311,
  [SMALL_STATE(271)] = 4318,
  [SMALL_STATE(272)] = 4325,
  [SMALL_STATE(273)] = 4332,
  [SMALL_STATE(274)] = 4339,
  [SMALL_STATE(275)] = 4346,
  [SMALL_STATE(276)] = 4353,
  [SMALL_STATE(277)] = 4360,
  [SMALL_STATE(278)] = 4367,
  [SMALL_STATE(279)] = 4374,
  [SMALL_STATE(280)] = 4381,
  [SMALL_STATE(281)] = 4388,
  [SMALL_STATE(282)] = 4395,
  [SMALL_STATE(283)] = 4402,
  [SMALL_STATE(284)] = 4409,
  [SMALL_STATE(285)] = 4416,
  [SMALL_STATE(286)] = 4423,
  [SMALL_STATE(287)] = 4430,
  [SMALL_STATE(288)] = 4437,
  [SMALL_STATE(289)] = 4444,
  [SMALL_STATE(290)] = 4451,
  [SMALL_STATE(291)] = 4458,
  [SMALL_STATE(292)] = 4465,
  [SMALL_STATE(293)] = 4472,
  [SMALL_STATE(294)] = 4479,
  [SMALL_STATE(295)] = 4486,
  [SMALL_STATE(296)] = 4493,
  [SMALL_STATE(297)] = 4500,
  [SMALL_STATE(298)] = 4507,
  [SMALL_STATE(299)] = 4514,
  [SMALL_STATE(300)] = 4521,
  [SMALL_STATE(301)] = 4528,
  [SMALL_STATE(302)] = 4535,
  [SMALL_STATE(303)] = 4542,
  [SMALL_STATE(304)] = 4549,
  [SMALL_STATE(305)] = 4556,
  [SMALL_STATE(306)] = 4563,
  [SMALL_STATE(307)] = 4570,
  [SMALL_STATE(308)] = 4577,
  [SMALL_STATE(309)] = 4584,
  [SMALL_STATE(310)] = 4591,
  [SMALL_STATE(311)] = 4598,
  [SMALL_STATE(312)] = 4605,
  [SMALL_STATE(313)] = 4612,
  [SMALL_STATE(314)] = 4619,
  [SMALL_STATE(315)] = 4626,
  [SMALL_STATE(316)] = 4633,
  [SMALL_STATE(317)] = 4640,
  [SMALL_STATE(318)] = 4647,
  [SMALL_STATE(319)] = 4654,
  [SMALL_STATE(320)] = 4661,
  [SMALL_STATE(321)] = 4668,
  [SMALL_STATE(322)] = 4675,
  [SMALL_STATE(323)] = 4682,
  [SMALL_STATE(324)] = 4689,
  [SMALL_STATE(325)] = 4696,
  [SMALL_STATE(326)] = 4703,
  [SMALL_STATE(327)] = 4710,
  [SMALL_STATE(328)] = 4717,
  [SMALL_STATE(329)] = 4724,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_provide_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_and_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_term_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_operation, 4, 0, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bv_const, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spec_expr, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_operation, 3, 0, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5, 0, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4, 0, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 7, 0, 30),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 6, 0, 27),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1, 0, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_let, 5, 0, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_args_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sig_args_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sig_args_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_ty, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_ty, 1, 0, 0),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_enum_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bv_ty, 3, 0, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bv_ty, 3, 0, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bv_ty, 4, 0, 28),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bv_ty, 4, 0, 28),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_params_repeat1, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_repeat1, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_enum_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_enum_variant_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant, 1, 0, 9),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant, 1, 0, 9),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant, 3, 0, 8),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant, 3, 0, 8),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant, 4, 0, 8),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant, 4, 0, 8),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extractor_repeat1, 2, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_provide, 4, 0, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provide, 4, 0, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_provide, 3, 0, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provide, 3, 0, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 6, 0, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec, 6, 0, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 5, 0, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec, 5, 0, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instantiate, 5, 0, 4),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instantiate, 5, 0, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 17),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 17),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 18),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 18),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 7, 0, 19),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 7, 0, 19),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 20),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 20),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern, 3, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extern, 3, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4, 0, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 4, 0, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, 0, 13),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, 0, 13),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 2),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, 0, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 10),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 7, 0, 21),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 7, 0, 21),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, 0, 12),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 6, 0, 12),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 22),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 22),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 23),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 23),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 8, 0, 24),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 8, 0, 24),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, 0, 20),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, 0, 20),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extractor, 8, 0, 25),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extractor, 8, 0, 25),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_enum_variant, 3, 0, 8),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum_variant, 3, 0, 8),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig, 5, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig, 5, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 9, 0, 26),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 9, 0, 26),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 13),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 13),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_enum_variant, 4, 0, 29),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum_variant, 4, 0, 29),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_enum_variant_field, 4, 0, 31),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum_variant_field, 4, 0, 31),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 5, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 5, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_expr_pair, 4, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_expr_pair, 4, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 4, 0, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form, 4, 0, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 5, 0, 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model, 5, 0, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, 0, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bv_const, 1, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spec_expr, 3, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_operation, 3, 0, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4, 0, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_operation, 4, 0, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5, 0, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instantiate, 4, 0, 4),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instantiate, 4, 0, 4),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 6, 0, 14),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_convert, 6, 0, 14),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 5),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 5, 0, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form, 5, 0, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 5, 0, 11),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum, 3, 0, 15),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 3, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_term, 4, 0, 8),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_args, 4, 0, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_ret, 3, 0, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [782] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_primitive, 4, 0, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require, 4, 0, 2),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 4, 0, 16),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, 0, 27),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_term, 3, 0, 8),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_ret, 4, 0, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_canon, 3, 0, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, 0, 30),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_canon, 4, 0, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 4, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 3, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_term, 4, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_bind, 3, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 3, 0, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_and, 4, 0, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_type, 4, 0, 15),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_enum, 4, 0, 15),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_args, 3, 0, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_extractor, 4, 0, 6),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_const, 4, 0, 7),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_constructor, 4, 0, 6),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_params, 2, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_enum, 3, 0, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require, 3, 0, 2),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
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
