/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_ulcs.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_Application_context_name_H_
#define	_Application_context_name_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OBJECT_IDENTIFIER.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Application-context-name */
typedef OBJECT_IDENTIFIER_t	 Application_context_name_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Application_context_name;
asn_struct_free_f Application_context_name_free;
asn_struct_print_f Application_context_name_print;
asn_constr_check_f Application_context_name_constraint;
ber_type_decoder_f Application_context_name_decode_ber;
der_type_encoder_f Application_context_name_encode_der;
xer_type_decoder_f Application_context_name_decode_xer;
xer_type_encoder_f Application_context_name_encode_xer;
per_type_decoder_f Application_context_name_decode_uper;
per_type_encoder_f Application_context_name_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Application_context_name_H_ */
#include "asn_internal.h"
