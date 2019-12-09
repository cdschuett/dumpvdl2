/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMADSCAPDUVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_pmadsc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "Report.h"

static asn_TYPE_member_t asn_MBR_Report_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Report, contract_type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ContractType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"contract-type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Report, ic_report),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ICReport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ic-report"
		},
};
static const ber_tlv_tag_t asn_DEF_Report_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Report_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* contract-type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ic-report */
};
static asn_SEQUENCE_specifics_t asn_SPC_Report_specs_1 = {
	sizeof(struct Report),
	offsetof(struct Report, _asn_ctx),
	asn_MAP_Report_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Report = {
	"Report",
	"Report",
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
	asn_DEF_Report_tags_1,
	sizeof(asn_DEF_Report_tags_1)
		/sizeof(asn_DEF_Report_tags_1[0]), /* 1 */
	asn_DEF_Report_tags_1,	/* Same as above */
	sizeof(asn_DEF_Report_tags_1)
		/sizeof(asn_DEF_Report_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Report_1,
	2,	/* Elements count */
	&asn_SPC_Report_specs_1	/* Additional specs */
};

