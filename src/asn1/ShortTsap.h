/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CMMessageSetVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_cm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ShortTsap_H_
#define	_ShortTsap_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARS.h"
#include "LocSysNselTsel.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ShortTsap */
typedef struct ShortTsap {
	ARS_t	*aRS	/* OPTIONAL */;
	LocSysNselTsel_t	 locSysNselTsel;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ShortTsap_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ShortTsap;

#ifdef __cplusplus
}
#endif

#endif	/* _ShortTsap_H_ */
#include "asn_internal.h"
