/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_cpdlc-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_VerticalDirection_H_
#define	_VerticalDirection_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VerticalDirection {
	VerticalDirection_up	= 0,
	VerticalDirection_down	= 1
} e_VerticalDirection;

/* VerticalDirection */
typedef long	 VerticalDirection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VerticalDirection;
asn_struct_free_f VerticalDirection_free;
asn_struct_print_f VerticalDirection_print;
asn_constr_check_f VerticalDirection_constraint;
ber_type_decoder_f VerticalDirection_decode_ber;
der_type_encoder_f VerticalDirection_encode_der;
xer_type_decoder_f VerticalDirection_decode_xer;
xer_type_encoder_f VerticalDirection_encode_xer;
per_type_decoder_f VerticalDirection_decode_uper;
per_type_encoder_f VerticalDirection_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VerticalDirection_H_ */
#include "asn_internal.h"
