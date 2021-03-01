/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_NeighCellConfig_H_
#define	_NeighCellConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellConfig */
typedef BIT_STRING_t	 NeighCellConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellConfig;
asn_struct_free_f NeighCellConfig_free;
asn_struct_print_f NeighCellConfig_print;
asn_constr_check_f NeighCellConfig_constraint;
ber_type_decoder_f NeighCellConfig_decode_ber;
der_type_encoder_f NeighCellConfig_encode_der;
xer_type_decoder_f NeighCellConfig_decode_xer;
xer_type_encoder_f NeighCellConfig_encode_xer;
per_type_decoder_f NeighCellConfig_decode_uper;
per_type_encoder_f NeighCellConfig_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellConfig_H_ */
#include <asn_internal.h>