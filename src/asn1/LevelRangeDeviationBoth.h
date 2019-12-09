/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_LevelRangeDeviationBoth_H_
#define	_LevelRangeDeviationBoth_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LevelRangeDeviationCeiling.h"
#include "LevelRangeDeviationFloor.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LevelRangeDeviationBoth */
typedef struct LevelRangeDeviationBoth {
	LevelRangeDeviationCeiling_t	 ceiling;
	LevelRangeDeviationFloor_t	 floor;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LevelRangeDeviationBoth_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LevelRangeDeviationBoth;

#ifdef __cplusplus
}
#endif

#endif	/* _LevelRangeDeviationBoth_H_ */
#include "asn_internal.h"
