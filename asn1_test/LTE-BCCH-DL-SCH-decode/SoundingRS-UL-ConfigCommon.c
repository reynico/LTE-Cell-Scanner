/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SoundingRS-UL-ConfigCommon.h"

static int
srs_BandwidthConfig_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
srs_BandwidthConfig_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
srs_BandwidthConfig_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
srs_BandwidthConfig_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
srs_BandwidthConfig_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
srs_BandwidthConfig_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
srs_BandwidthConfig_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
srs_BandwidthConfig_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
srs_BandwidthConfig_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
srs_BandwidthConfig_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	srs_BandwidthConfig_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
srs_SubframeConfig_13_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
srs_SubframeConfig_13_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
srs_SubframeConfig_13_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
srs_SubframeConfig_13_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
srs_SubframeConfig_13_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
srs_SubframeConfig_13_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
srs_SubframeConfig_13_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
srs_SubframeConfig_13_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
srs_SubframeConfig_13_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
srs_SubframeConfig_13_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	srs_SubframeConfig_13_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
srs_MaxUpPts_31_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
srs_MaxUpPts_31_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
srs_MaxUpPts_31_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
srs_MaxUpPts_31_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
srs_MaxUpPts_31_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
srs_MaxUpPts_31_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
srs_MaxUpPts_31_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
srs_MaxUpPts_31_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
srs_MaxUpPts_31_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
srs_MaxUpPts_31_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	srs_MaxUpPts_31_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_srs_BandwidthConfig_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_SubframeConfig_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_MaxUpPts_constr_31 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigCommon_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_srs_BandwidthConfig_value2enum_4[] = {
	{ 0,	3,	"bw0" },
	{ 1,	3,	"bw1" },
	{ 2,	3,	"bw2" },
	{ 3,	3,	"bw3" },
	{ 4,	3,	"bw4" },
	{ 5,	3,	"bw5" },
	{ 6,	3,	"bw6" },
	{ 7,	3,	"bw7" }
};
static unsigned int asn_MAP_srs_BandwidthConfig_enum2value_4[] = {
	0,	/* bw0(0) */
	1,	/* bw1(1) */
	2,	/* bw2(2) */
	3,	/* bw3(3) */
	4,	/* bw4(4) */
	5,	/* bw5(5) */
	6,	/* bw6(6) */
	7	/* bw7(7) */
};
static asn_INTEGER_specifics_t asn_SPC_srs_BandwidthConfig_specs_4 = {
	asn_MAP_srs_BandwidthConfig_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_BandwidthConfig_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_srs_BandwidthConfig_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_BandwidthConfig_4 = {
	"srs-BandwidthConfig",
	"srs-BandwidthConfig",
	srs_BandwidthConfig_4_free,
	srs_BandwidthConfig_4_print,
	srs_BandwidthConfig_4_constraint,
	srs_BandwidthConfig_4_decode_ber,
	srs_BandwidthConfig_4_encode_der,
	srs_BandwidthConfig_4_decode_xer,
	srs_BandwidthConfig_4_encode_xer,
	srs_BandwidthConfig_4_decode_uper,
	srs_BandwidthConfig_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_BandwidthConfig_tags_4,
	sizeof(asn_DEF_srs_BandwidthConfig_tags_4)
		/sizeof(asn_DEF_srs_BandwidthConfig_tags_4[0]) - 1, /* 1 */
	asn_DEF_srs_BandwidthConfig_tags_4,	/* Same as above */
	sizeof(asn_DEF_srs_BandwidthConfig_tags_4)
		/sizeof(asn_DEF_srs_BandwidthConfig_tags_4[0]), /* 2 */
	&asn_PER_type_srs_BandwidthConfig_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_BandwidthConfig_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_srs_SubframeConfig_value2enum_13[] = {
	{ 0,	3,	"sc0" },
	{ 1,	3,	"sc1" },
	{ 2,	3,	"sc2" },
	{ 3,	3,	"sc3" },
	{ 4,	3,	"sc4" },
	{ 5,	3,	"sc5" },
	{ 6,	3,	"sc6" },
	{ 7,	3,	"sc7" },
	{ 8,	3,	"sc8" },
	{ 9,	3,	"sc9" },
	{ 10,	4,	"sc10" },
	{ 11,	4,	"sc11" },
	{ 12,	4,	"sc12" },
	{ 13,	4,	"sc13" },
	{ 14,	4,	"sc14" },
	{ 15,	4,	"sc15" }
};
static unsigned int asn_MAP_srs_SubframeConfig_enum2value_13[] = {
	0,	/* sc0(0) */
	1,	/* sc1(1) */
	10,	/* sc10(10) */
	11,	/* sc11(11) */
	12,	/* sc12(12) */
	13,	/* sc13(13) */
	14,	/* sc14(14) */
	15,	/* sc15(15) */
	2,	/* sc2(2) */
	3,	/* sc3(3) */
	4,	/* sc4(4) */
	5,	/* sc5(5) */
	6,	/* sc6(6) */
	7,	/* sc7(7) */
	8,	/* sc8(8) */
	9	/* sc9(9) */
};
static asn_INTEGER_specifics_t asn_SPC_srs_SubframeConfig_specs_13 = {
	asn_MAP_srs_SubframeConfig_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_SubframeConfig_enum2value_13,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_srs_SubframeConfig_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_SubframeConfig_13 = {
	"srs-SubframeConfig",
	"srs-SubframeConfig",
	srs_SubframeConfig_13_free,
	srs_SubframeConfig_13_print,
	srs_SubframeConfig_13_constraint,
	srs_SubframeConfig_13_decode_ber,
	srs_SubframeConfig_13_encode_der,
	srs_SubframeConfig_13_decode_xer,
	srs_SubframeConfig_13_encode_xer,
	srs_SubframeConfig_13_decode_uper,
	srs_SubframeConfig_13_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_SubframeConfig_tags_13,
	sizeof(asn_DEF_srs_SubframeConfig_tags_13)
		/sizeof(asn_DEF_srs_SubframeConfig_tags_13[0]) - 1, /* 1 */
	asn_DEF_srs_SubframeConfig_tags_13,	/* Same as above */
	sizeof(asn_DEF_srs_SubframeConfig_tags_13)
		/sizeof(asn_DEF_srs_SubframeConfig_tags_13[0]), /* 2 */
	&asn_PER_type_srs_SubframeConfig_constr_13,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_SubframeConfig_specs_13	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_srs_MaxUpPts_value2enum_31[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_srs_MaxUpPts_enum2value_31[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_srs_MaxUpPts_specs_31 = {
	asn_MAP_srs_MaxUpPts_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_MaxUpPts_enum2value_31,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_srs_MaxUpPts_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_MaxUpPts_31 = {
	"srs-MaxUpPts",
	"srs-MaxUpPts",
	srs_MaxUpPts_31_free,
	srs_MaxUpPts_31_print,
	srs_MaxUpPts_31_constraint,
	srs_MaxUpPts_31_decode_ber,
	srs_MaxUpPts_31_encode_der,
	srs_MaxUpPts_31_decode_xer,
	srs_MaxUpPts_31_encode_xer,
	srs_MaxUpPts_31_decode_uper,
	srs_MaxUpPts_31_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_MaxUpPts_tags_31,
	sizeof(asn_DEF_srs_MaxUpPts_tags_31)
		/sizeof(asn_DEF_srs_MaxUpPts_tags_31[0]) - 1, /* 1 */
	asn_DEF_srs_MaxUpPts_tags_31,	/* Same as above */
	sizeof(asn_DEF_srs_MaxUpPts_tags_31)
		/sizeof(asn_DEF_srs_MaxUpPts_tags_31[0]), /* 2 */
	&asn_PER_type_srs_MaxUpPts_constr_31,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_MaxUpPts_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon__setup, srs_BandwidthConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_BandwidthConfig_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-BandwidthConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon__setup, srs_SubframeConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_SubframeConfig_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-SubframeConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon__setup, ackNackSRS_SimultaneousTransmission),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ackNackSRS-SimultaneousTransmission"
		},
	{ ATF_POINTER, 1, offsetof(struct SoundingRS_UL_ConfigCommon__setup, srs_MaxUpPts),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_MaxUpPts_31,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-MaxUpPts"
		},
};
static int asn_MAP_setup_oms_3[] = { 3 };
static ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-BandwidthConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-SubframeConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ackNackSRS-SimultaneousTransmission */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srs-MaxUpPts */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SoundingRS_UL_ConfigCommon__setup),
	offsetof(struct SoundingRS_UL_ConfigCommon__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	4,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_SoundingRS_UL_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigCommon_specs_1 = {
	sizeof(struct SoundingRS_UL_ConfigCommon),
	offsetof(struct SoundingRS_UL_ConfigCommon, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigCommon, present),
	sizeof(((struct SoundingRS_UL_ConfigCommon *)0)->present),
	asn_MAP_SoundingRS_UL_ConfigCommon_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigCommon = {
	"SoundingRS-UL-ConfigCommon",
	"SoundingRS-UL-ConfigCommon",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_SoundingRS_UL_ConfigCommon_constr_1,
	asn_MBR_SoundingRS_UL_ConfigCommon_1,
	2,	/* Elements count */
	&asn_SPC_SoundingRS_UL_ConfigCommon_specs_1	/* Additional specs */
};
