/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_ulcs.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "ABRT-diagnostic.h"

int
ABRT_diagnostic_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ABRT_diagnostic_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
ABRT_diagnostic_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
ABRT_diagnostic_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
ABRT_diagnostic_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
ABRT_diagnostic_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
ABRT_diagnostic_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
ABRT_diagnostic_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
ABRT_diagnostic_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
ABRT_diagnostic_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ABRT_diagnostic_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_ABRT_diagnostic_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ABRT_diagnostic_value2enum_1[] = {
	{ 1,	15,	"no-reason-given" },
	{ 2,	14,	"protocol-error" },
	{ 3,	44,	"authentication-mechanism-name-not-recognized" },
	{ 4,	38,	"authentication-mechanism-name-required" },
	{ 5,	22,	"authentication-failure" },
	{ 6,	23,	"authentication-required" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ABRT_diagnostic_enum2value_1[] = {
	4,	/* authentication-failure(5) */
	2,	/* authentication-mechanism-name-not-recognized(3) */
	3,	/* authentication-mechanism-name-required(4) */
	5,	/* authentication-required(6) */
	0,	/* no-reason-given(1) */
	1	/* protocol-error(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ABRT_diagnostic_specs_1 = {
	asn_MAP_ABRT_diagnostic_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ABRT_diagnostic_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ABRT_diagnostic_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ABRT_diagnostic = {
	"ABRT-diagnostic",
	"ABRT-diagnostic",
	ABRT_diagnostic_free,
	ABRT_diagnostic_print,
	ABRT_diagnostic_constraint,
	ABRT_diagnostic_decode_ber,
	ABRT_diagnostic_encode_der,
	ABRT_diagnostic_decode_xer,
	ABRT_diagnostic_encode_xer,
	ABRT_diagnostic_decode_uper,
	ABRT_diagnostic_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ABRT_diagnostic_tags_1,
	sizeof(asn_DEF_ABRT_diagnostic_tags_1)
		/sizeof(asn_DEF_ABRT_diagnostic_tags_1[0]), /* 1 */
	asn_DEF_ABRT_diagnostic_tags_1,	/* Same as above */
	sizeof(asn_DEF_ABRT_diagnostic_tags_1)
		/sizeof(asn_DEF_ABRT_diagnostic_tags_1[0]), /* 1 */
	&asn_PER_type_ABRT_diagnostic_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ABRT_diagnostic_specs_1	/* Additional specs */
};

