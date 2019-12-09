/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_cpdlc-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_PlaceBearingDistance_H_
#define	_PlaceBearingDistance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PublishedIdentifier.h"
#include "Degrees.h"
#include "Distance.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PlaceBearingDistance */
typedef struct PlaceBearingDistance {
	PublishedIdentifier_t	 publishedIdentifier;
	Degrees_t	 degrees;
	Distance_t	 distance;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PlaceBearingDistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlaceBearingDistance;

#ifdef __cplusplus
}
#endif

#endif	/* _PlaceBearingDistance_H_ */
#include "asn_internal.h"
