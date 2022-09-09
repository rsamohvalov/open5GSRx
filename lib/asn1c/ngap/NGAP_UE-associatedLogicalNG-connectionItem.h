/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_UE_associatedLogicalNG_connectionItem_H_
#define	_NGAP_UE_associatedLogicalNG_connectionItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_AMF-UE-NGAP-ID.h"
#include "NGAP_RAN-UE-NGAP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_UE-associatedLogicalNG-connectionItem */
typedef struct NGAP_UE_associatedLogicalNG_connectionItem {
	NGAP_AMF_UE_NGAP_ID_t	*aMF_UE_NGAP_ID;	/* OPTIONAL */
	NGAP_RAN_UE_NGAP_ID_t	*rAN_UE_NGAP_ID;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UE_associatedLogicalNG_connectionItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UE_associatedLogicalNG_connectionItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_UE_associatedLogicalNG_connectionItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_UE_associatedLogicalNG_connectionItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UE_associatedLogicalNG_connectionItem_H_ */
#include <asn_internal.h>
