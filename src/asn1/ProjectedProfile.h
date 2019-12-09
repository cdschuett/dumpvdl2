/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ProjectedProfile_H_
#define	_ProjectedProfile_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ADSv2DateTimeGroup.h"
#include "WayPointSequence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ProjectedProfile */
typedef struct ProjectedProfile {
	ADSv2DateTimeGroup_t	 computation_time;
	WayPointSequence_t	 way_point_sequence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProjectedProfile_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProjectedProfile;

#ifdef __cplusplus
}
#endif

#endif	/* _ProjectedProfile_H_ */
#include "asn_internal.h"
