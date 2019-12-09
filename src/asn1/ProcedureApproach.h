/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_cpdlc-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ProcedureApproach_H_
#define	_ProcedureApproach_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProcedureName.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ProcedureApproach */
typedef ProcedureName_t	 ProcedureApproach_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProcedureApproach;
asn_struct_free_f ProcedureApproach_free;
asn_struct_print_f ProcedureApproach_print;
asn_constr_check_f ProcedureApproach_constraint;
ber_type_decoder_f ProcedureApproach_decode_ber;
der_type_encoder_f ProcedureApproach_encode_der;
xer_type_decoder_f ProcedureApproach_decode_xer;
xer_type_encoder_f ProcedureApproach_encode_xer;
per_type_decoder_f ProcedureApproach_decode_uper;
per_type_encoder_f ProcedureApproach_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProcedureApproach_H_ */
#include "asn_internal.h"
