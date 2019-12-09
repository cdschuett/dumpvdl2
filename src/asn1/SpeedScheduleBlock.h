/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_SpeedScheduleBlock_H_
#define	_SpeedScheduleBlock_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedScheduleSingle;

/* SpeedScheduleBlock */
typedef struct SpeedScheduleBlock {
	A_SEQUENCE_OF(struct SpeedScheduleSingle) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedScheduleBlock_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedScheduleBlock;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedScheduleSingle.h"

#endif	/* _SpeedScheduleBlock_H_ */
#include "asn_internal.h"
