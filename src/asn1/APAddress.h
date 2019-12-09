/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CMMessageSetVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_cm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_APAddress_H_
#define	_APAddress_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LongTsap.h"
#include "ShortTsap.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum APAddress_PR {
	APAddress_PR_NOTHING,	/* No components present */
	APAddress_PR_longTsap,
	APAddress_PR_shortTsap
} APAddress_PR;

/* APAddress */
typedef struct APAddress {
	APAddress_PR present;
	union APAddress_u {
		LongTsap_t	 longTsap;
		ShortTsap_t	 shortTsap;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} APAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_APAddress;

#ifdef __cplusplus
}
#endif

#endif	/* _APAddress_H_ */
#include "asn_internal.h"
