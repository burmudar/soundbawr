/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Sat Mar 30 18:56:46 2019. */

#ifndef PB_DEVICE_DEVICE_PB_H_INCLUDED
#define PB_DEVICE_DEVICE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _Device_Command_DeviceType {
    Device_Command_DeviceType_TV = 0,
    Device_Command_DeviceType_SOUNDBAR = 1
} Device_Command_DeviceType;
#define _Device_Command_DeviceType_MIN Device_Command_DeviceType_TV
#define _Device_Command_DeviceType_MAX Device_Command_DeviceType_SOUNDBAR
#define _Device_Command_DeviceType_ARRAYSIZE ((Device_Command_DeviceType)(Device_Command_DeviceType_SOUNDBAR+1))

typedef enum _Device_Command_Action {
    Device_Command_Action_TURN_OFF = 0,
    Device_Command_Action_TURN_ON = 1
} Device_Command_Action;
#define _Device_Command_Action_MIN Device_Command_Action_TURN_OFF
#define _Device_Command_Action_MAX Device_Command_Action_TURN_ON
#define _Device_Command_Action_ARRAYSIZE ((Device_Command_Action)(Device_Command_Action_TURN_ON+1))

/* Struct definitions */
typedef struct _Device_Command {
    Device_Command_DeviceType device;
    Device_Command_Action action;
/* @@protoc_insertion_point(struct:Device_Command) */
} Device_Command;

/* Default values for struct fields */

/* Initializer values for message structs */
#define Device_Command_init_default              {_Device_Command_DeviceType_MIN, _Device_Command_Action_MIN}
#define Device_Command_init_zero                 {_Device_Command_DeviceType_MIN, _Device_Command_Action_MIN}

/* Field tags (for use in manual encoding/decoding) */
#define Device_Command_device_tag                1
#define Device_Command_action_tag                2

/* Struct field encoding specification for nanopb */
extern const pb_field_t Device_Command_fields[3];

/* Maximum encoded size of messages (where known) */
#define Device_Command_size                      4

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define DEVICE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
