/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message.proto */

#ifndef PROTOBUF_C_message_2eproto__INCLUDED
#define PROTOBUF_C_message_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _ProtoEvent ProtoEvent;
typedef struct _ProtoCommand ProtoCommand;
typedef struct _ProtoCarSensor ProtoCarSensor;
typedef struct _ProtoStintData ProtoStintData;
typedef struct _ProtoLap ProtoLap;
typedef struct _ProtoLapData ProtoLapData;
typedef struct _ProtoGpsData ProtoGpsData;
typedef struct _ProtoLoraConfig ProtoLoraConfig;
typedef struct _ProtoOdb2Data ProtoOdb2Data;
typedef struct _ProtoLoraStats ProtoLoraStats;
typedef struct _ProtoShiftlightConfig ProtoShiftlightConfig;
typedef struct _ProtoButton ProtoButton;
typedef struct _ProtoMcuData ProtoMcuData;
typedef struct _ProtoUpdateData ProtoUpdateData;
typedef struct _ProtoAckData ProtoAckData;
typedef struct _ProtoLoRaData ProtoLoRaData;
typedef struct _ProtoMessage ProtoMessage;


/* --- enums --- */

typedef enum _ProtoSeverity {
  PROTO__SEVERITY__POSITIVE = 1,
  PROTO__SEVERITY__NORMAL = 2,
  PROTO__SEVERITY__WARN = 3,
  PROTO__SEVERITY__CRIT = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTO__SEVERITY)
} ProtoSeverity;
typedef enum _ProtoEventType {
  PROTO__EVENT__TYPE__EVT_NONE = 1,
  PROTO__EVENT__TYPE__EVT_LAP = 2,
  PROTO__EVENT__TYPE__EVT_TIME_REMAIN = 3,
  PROTO__EVENT__TYPE__EVT_STATE_CHANGE = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTO__EVENT__TYPE)
} ProtoEventType;
typedef enum _ProtoCommandType {
  PROTO__COMMAND__TYPE__COM_NONE = 1,
  PROTO__COMMAND__TYPE__COM_PIT = 2,
  PROTO__COMMAND__TYPE__COM_STINT_OVER = 3,
  PROTO__COMMAND__TYPE__COM_FCK = 4,
  PROTO__COMMAND__TYPE__COM_FUEL = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTO__COMMAND__TYPE)
} ProtoCommandType;
typedef enum _ProtoLoraType {
  PROTO__LORA__TYPE__LORA_ACK = 1,
  PROTO__LORA__TYPE__LORA_OIL = 2,
  PROTO__LORA__TYPE__LORA_WATER = 3,
  PROTO__LORA__TYPE__LORA_GAS = 4,
  PROTO__LORA__TYPE__LORA_LAP = 5,
  PROTO__LORA__TYPE__LORA_STINT = 6,
  PROTO__LORA__TYPE__LORA_COMMAND = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTO__LORA__TYPE)
} ProtoLoraType;
typedef enum _ShiftlightMode {
  SHIFTLIGHT__MODE__LEFT_RIGHT = 1,
  SHIFTLIGHT__MODE__BOTH_SIDES = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SHIFTLIGHT__MODE)
} ShiftlightMode;
typedef enum _ButtonName {
  BUTTON__NAME__PIT = 1,
  BUTTON__NAME__FUEL = 2,
  BUTTON__NAME__FCK = 3,
  BUTTON__NAME__STINT = 4,
  BUTTON__NAME__ALARM = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(BUTTON__NAME)
} ButtonName;
typedef enum _ButtonState {
  BUTTON__STATE__PRESSED = 1,
  BUTTON__STATE__DEPRESSED = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(BUTTON__STATE)
} ButtonState;

/* --- messages --- */

struct  _ProtoEvent
{
  ProtobufCMessage base;
  protobuf_c_boolean has_id;
  int32_t id;
  protobuf_c_boolean has_type;
  ProtoEventType type;
  protobuf_c_boolean has_severity;
  ProtoSeverity severity;
  protobuf_c_boolean has_created_at;
  int64_t created_at;
  protobuf_c_boolean has_displayed_since;
  int64_t displayed_since;
  char *text;
};
#define PROTO__EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__event__descriptor) \
    , 0, 0, 0, PROTO__EVENT__TYPE__EVT_NONE, 0, PROTO__SEVERITY__POSITIVE, 0, 0, 0, 0, NULL }


struct  _ProtoCommand
{
  ProtobufCMessage base;
  protobuf_c_boolean has_type;
  ProtoCommandType type;
  protobuf_c_boolean has_id;
  int32_t id;
  protobuf_c_boolean has_created;
  int64_t created;
  protobuf_c_boolean has_handled;
  int64_t handled;
};
#define PROTO__COMMAND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__command__descriptor) \
    , 0, PROTO__COMMAND__TYPE__COM_NONE, 0, 0, 0, 0, 0, 0 }


struct  _ProtoCarSensor
{
  ProtobufCMessage base;
  protobuf_c_boolean has_temp;
  uint32_t temp;
  protobuf_c_boolean has_preassure;
  double preassure;
};
#define PROTO__CAR__SENSOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__car__sensor__descriptor) \
    , 0, 0u, 0, 0 }


struct  _ProtoStintData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_running;
  protobuf_c_boolean running;
  protobuf_c_boolean has_enabled;
  protobuf_c_boolean enabled;
  protobuf_c_boolean has_target;
  uint32_t target;
  protobuf_c_boolean has_elapsed;
  uint32_t elapsed;
  protobuf_c_boolean has_elapsed_timestamp;
  uint32_t elapsed_timestamp;
};
#define PROTO__STINT__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__stint__data__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  _ProtoLap
{
  ProtobufCMessage base;
  protobuf_c_boolean has_lap_no;
  int32_t lap_no;
  protobuf_c_boolean has_lap_time_ms;
  int64_t lap_time_ms;
};
#define PROTO__LAP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__lap__descriptor) \
    , 0, 0, 0, 0 }


struct  _ProtoLapData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_lap_no;
  int32_t lap_no;
  protobuf_c_boolean has_best_lap_ms;
  uint32_t best_lap_ms;
  protobuf_c_boolean has_current_lap_ms;
  uint32_t current_lap_ms;
  protobuf_c_boolean has_current_lap_snapshot_time;
  uint32_t current_lap_snapshot_time;
  size_t n_laps;
  ProtoLap **laps;
};
#define PROTO__LAP__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__lap__data__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL }


struct  _ProtoGpsData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_spd;
  int32_t spd;
  protobuf_c_boolean has_lat;
  double lat;
  protobuf_c_boolean has_lon;
  double lon;
};
#define PROTO__GPS__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__gps__data__descriptor) \
    , 0, 0, 0, 0, 0, 0 }


struct  _ProtoLoraConfig
{
  ProtobufCMessage base;
  protobuf_c_boolean has_bandwidth;
  double bandwidth;
  protobuf_c_boolean has_spreading_factor;
  uint32_t spreading_factor;
  protobuf_c_boolean has_output_power;
  int32_t output_power;
};
#define PROTO__LORA__CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__lora__config__descriptor) \
    , 0, 0, 0, 0, 0, 0 }


struct  _ProtoOdb2Data
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rpm;
  uint32_t rpm;
  protobuf_c_boolean has_coolant;
  int32_t coolant;
};
#define PROTO__ODB2__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__odb2__data__descriptor) \
    , 0, 0, 0, 0 }


struct  _ProtoLoraStats
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rssi;
  double rssi;
  protobuf_c_boolean has_snr;
  double snr;
  protobuf_c_boolean has_receive_time;
  int32_t receive_time;
};
#define PROTO__LORA__STATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__lora__stats__descriptor) \
    , 0, 0, 0, 0, 0, 0 }


struct  _ProtoShiftlightConfig
{
  ProtobufCMessage base;
  protobuf_c_boolean has_mode;
  ShiftlightMode mode;
  protobuf_c_boolean has_rpm_red_flash;
  int32_t rpm_red_flash;
  protobuf_c_boolean has_brightness;
  int32_t brightness;
  size_t n_rpm_limits;
  int32_t *rpm_limits;
};
#define PROTO__SHIFTLIGHT__CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__shiftlight__config__descriptor) \
    , 0, SHIFTLIGHT__MODE__LEFT_RIGHT, 0, 0, 0, 0, 0,NULL }


struct  _ProtoButton
{
  ProtobufCMessage base;
  protobuf_c_boolean has_name;
  ButtonName name;
  protobuf_c_boolean has_state;
  ButtonState state;
  protobuf_c_boolean has_state_since;
  int32_t state_since;
};
#define PROTO__BUTTON__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__button__descriptor) \
    , 0, BUTTON__NAME__PIT, 0, BUTTON__STATE__PRESSED, 0, 0 }


struct  _ProtoMcuData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_network_time_adjustment;
  uint32_t network_time_adjustment;
  protobuf_c_boolean has_send_timestamp;
  uint32_t send_timestamp;
  ProtoCarSensor *water;
  ProtoCarSensor *oil;
  ProtoCarSensor *gas;
  ProtoStintData *stint;
  ProtoLapData *lap_data;
  size_t n_events;
  ProtoEvent **events;
  size_t n_outgoing_commands;
  ProtoCommand **outgoing_commands;
  size_t n_incoming_commands;
  ProtoCommand **incoming_commands;
  ProtoGpsData *gps;
  ProtoCarSensor *gas_warn;
  ProtoCarSensor *oil_warn;
  ProtoLoraConfig *lora_config;
  ProtoOdb2Data *odb2;
  ProtoShiftlightConfig *shiftlight_config;
};
#define PROTO__MCU__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__mcu__data__descriptor) \
    , 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0,NULL, 0,NULL, 0,NULL, NULL, NULL, NULL, NULL, NULL, NULL }


struct  _ProtoUpdateData
{
  ProtobufCMessage base;
  ProtoCarSensor *water_sensor;
  ProtoCarSensor *oil_sensor;
  ProtoCarSensor *gas_sensor;
  ProtoLapData *lap_data;
  ProtoStintData *stint_data;
  ProtoGpsData *gps_data;
  ProtoOdb2Data *odb2;
};
#define PROTO__UPDATE__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__update__data__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL, NULL }


struct  _ProtoAckData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_seq_nr;
  uint32_t seq_nr;
};
#define PROTO__ACK__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__ack__data__descriptor) \
    , 0, 0 }


struct  _ProtoLoRaData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_seq_nr;
  uint32_t seq_nr;
  protobuf_c_boolean has_requires_ack;
  protobuf_c_boolean requires_ack;
  protobuf_c_boolean has_send_timestamp;
  uint32_t send_timestamp;
  ProtoUpdateData *update_data;
  ProtoCommand *command_data;
  ProtoAckData *ack_data;
};
#define PROTO__LO_RA__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__lo_ra__data__descriptor) \
    , 0, 0u, 0, 0, 0, 0, NULL, NULL, NULL }


struct  _ProtoMessage
{
  ProtobufCMessage base;
  ProtoMcuData *mcu_data;
  ProtoLoRaData *lora_data;
  ProtoCommand *command_data;
  ProtoLoraStats *lora_stats;
  size_t n_button_state;
  ProtoButton **button_state;
};
#define PROTO__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__message__descriptor) \
    , NULL, NULL, NULL, NULL, 0,NULL }


/* ProtoEvent methods */
void   proto__event__init
                     (ProtoEvent         *message);
size_t proto__event__get_packed_size
                     (const ProtoEvent   *message);
size_t proto__event__pack
                     (const ProtoEvent   *message,
                      uint8_t             *out);
size_t proto__event__pack_to_buffer
                     (const ProtoEvent   *message,
                      ProtobufCBuffer     *buffer);
ProtoEvent *
       proto__event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__event__free_unpacked
                     (ProtoEvent *message,
                      ProtobufCAllocator *allocator);
/* ProtoCommand methods */
void   proto__command__init
                     (ProtoCommand         *message);
size_t proto__command__get_packed_size
                     (const ProtoCommand   *message);
size_t proto__command__pack
                     (const ProtoCommand   *message,
                      uint8_t             *out);
size_t proto__command__pack_to_buffer
                     (const ProtoCommand   *message,
                      ProtobufCBuffer     *buffer);
ProtoCommand *
       proto__command__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__command__free_unpacked
                     (ProtoCommand *message,
                      ProtobufCAllocator *allocator);
/* ProtoCarSensor methods */
void   proto__car__sensor__init
                     (ProtoCarSensor         *message);
size_t proto__car__sensor__get_packed_size
                     (const ProtoCarSensor   *message);
size_t proto__car__sensor__pack
                     (const ProtoCarSensor   *message,
                      uint8_t             *out);
size_t proto__car__sensor__pack_to_buffer
                     (const ProtoCarSensor   *message,
                      ProtobufCBuffer     *buffer);
ProtoCarSensor *
       proto__car__sensor__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__car__sensor__free_unpacked
                     (ProtoCarSensor *message,
                      ProtobufCAllocator *allocator);
/* ProtoStintData methods */
void   proto__stint__data__init
                     (ProtoStintData         *message);
size_t proto__stint__data__get_packed_size
                     (const ProtoStintData   *message);
size_t proto__stint__data__pack
                     (const ProtoStintData   *message,
                      uint8_t             *out);
size_t proto__stint__data__pack_to_buffer
                     (const ProtoStintData   *message,
                      ProtobufCBuffer     *buffer);
ProtoStintData *
       proto__stint__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__stint__data__free_unpacked
                     (ProtoStintData *message,
                      ProtobufCAllocator *allocator);
/* ProtoLap methods */
void   proto__lap__init
                     (ProtoLap         *message);
size_t proto__lap__get_packed_size
                     (const ProtoLap   *message);
size_t proto__lap__pack
                     (const ProtoLap   *message,
                      uint8_t             *out);
size_t proto__lap__pack_to_buffer
                     (const ProtoLap   *message,
                      ProtobufCBuffer     *buffer);
ProtoLap *
       proto__lap__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__lap__free_unpacked
                     (ProtoLap *message,
                      ProtobufCAllocator *allocator);
/* ProtoLapData methods */
void   proto__lap__data__init
                     (ProtoLapData         *message);
size_t proto__lap__data__get_packed_size
                     (const ProtoLapData   *message);
size_t proto__lap__data__pack
                     (const ProtoLapData   *message,
                      uint8_t             *out);
size_t proto__lap__data__pack_to_buffer
                     (const ProtoLapData   *message,
                      ProtobufCBuffer     *buffer);
ProtoLapData *
       proto__lap__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__lap__data__free_unpacked
                     (ProtoLapData *message,
                      ProtobufCAllocator *allocator);
/* ProtoGpsData methods */
void   proto__gps__data__init
                     (ProtoGpsData         *message);
size_t proto__gps__data__get_packed_size
                     (const ProtoGpsData   *message);
size_t proto__gps__data__pack
                     (const ProtoGpsData   *message,
                      uint8_t             *out);
size_t proto__gps__data__pack_to_buffer
                     (const ProtoGpsData   *message,
                      ProtobufCBuffer     *buffer);
ProtoGpsData *
       proto__gps__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__gps__data__free_unpacked
                     (ProtoGpsData *message,
                      ProtobufCAllocator *allocator);
/* ProtoLoraConfig methods */
void   proto__lora__config__init
                     (ProtoLoraConfig         *message);
size_t proto__lora__config__get_packed_size
                     (const ProtoLoraConfig   *message);
size_t proto__lora__config__pack
                     (const ProtoLoraConfig   *message,
                      uint8_t             *out);
size_t proto__lora__config__pack_to_buffer
                     (const ProtoLoraConfig   *message,
                      ProtobufCBuffer     *buffer);
ProtoLoraConfig *
       proto__lora__config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__lora__config__free_unpacked
                     (ProtoLoraConfig *message,
                      ProtobufCAllocator *allocator);
/* ProtoOdb2Data methods */
void   proto__odb2__data__init
                     (ProtoOdb2Data         *message);
size_t proto__odb2__data__get_packed_size
                     (const ProtoOdb2Data   *message);
size_t proto__odb2__data__pack
                     (const ProtoOdb2Data   *message,
                      uint8_t             *out);
size_t proto__odb2__data__pack_to_buffer
                     (const ProtoOdb2Data   *message,
                      ProtobufCBuffer     *buffer);
ProtoOdb2Data *
       proto__odb2__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__odb2__data__free_unpacked
                     (ProtoOdb2Data *message,
                      ProtobufCAllocator *allocator);
/* ProtoLoraStats methods */
void   proto__lora__stats__init
                     (ProtoLoraStats         *message);
size_t proto__lora__stats__get_packed_size
                     (const ProtoLoraStats   *message);
size_t proto__lora__stats__pack
                     (const ProtoLoraStats   *message,
                      uint8_t             *out);
size_t proto__lora__stats__pack_to_buffer
                     (const ProtoLoraStats   *message,
                      ProtobufCBuffer     *buffer);
ProtoLoraStats *
       proto__lora__stats__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__lora__stats__free_unpacked
                     (ProtoLoraStats *message,
                      ProtobufCAllocator *allocator);
/* ProtoShiftlightConfig methods */
void   proto__shiftlight__config__init
                     (ProtoShiftlightConfig         *message);
size_t proto__shiftlight__config__get_packed_size
                     (const ProtoShiftlightConfig   *message);
size_t proto__shiftlight__config__pack
                     (const ProtoShiftlightConfig   *message,
                      uint8_t             *out);
size_t proto__shiftlight__config__pack_to_buffer
                     (const ProtoShiftlightConfig   *message,
                      ProtobufCBuffer     *buffer);
ProtoShiftlightConfig *
       proto__shiftlight__config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__shiftlight__config__free_unpacked
                     (ProtoShiftlightConfig *message,
                      ProtobufCAllocator *allocator);
/* ProtoButton methods */
void   proto__button__init
                     (ProtoButton         *message);
size_t proto__button__get_packed_size
                     (const ProtoButton   *message);
size_t proto__button__pack
                     (const ProtoButton   *message,
                      uint8_t             *out);
size_t proto__button__pack_to_buffer
                     (const ProtoButton   *message,
                      ProtobufCBuffer     *buffer);
ProtoButton *
       proto__button__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__button__free_unpacked
                     (ProtoButton *message,
                      ProtobufCAllocator *allocator);
/* ProtoMcuData methods */
void   proto__mcu__data__init
                     (ProtoMcuData         *message);
size_t proto__mcu__data__get_packed_size
                     (const ProtoMcuData   *message);
size_t proto__mcu__data__pack
                     (const ProtoMcuData   *message,
                      uint8_t             *out);
size_t proto__mcu__data__pack_to_buffer
                     (const ProtoMcuData   *message,
                      ProtobufCBuffer     *buffer);
ProtoMcuData *
       proto__mcu__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__mcu__data__free_unpacked
                     (ProtoMcuData *message,
                      ProtobufCAllocator *allocator);
/* ProtoUpdateData methods */
void   proto__update__data__init
                     (ProtoUpdateData         *message);
size_t proto__update__data__get_packed_size
                     (const ProtoUpdateData   *message);
size_t proto__update__data__pack
                     (const ProtoUpdateData   *message,
                      uint8_t             *out);
size_t proto__update__data__pack_to_buffer
                     (const ProtoUpdateData   *message,
                      ProtobufCBuffer     *buffer);
ProtoUpdateData *
       proto__update__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__update__data__free_unpacked
                     (ProtoUpdateData *message,
                      ProtobufCAllocator *allocator);
/* ProtoAckData methods */
void   proto__ack__data__init
                     (ProtoAckData         *message);
size_t proto__ack__data__get_packed_size
                     (const ProtoAckData   *message);
size_t proto__ack__data__pack
                     (const ProtoAckData   *message,
                      uint8_t             *out);
size_t proto__ack__data__pack_to_buffer
                     (const ProtoAckData   *message,
                      ProtobufCBuffer     *buffer);
ProtoAckData *
       proto__ack__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__ack__data__free_unpacked
                     (ProtoAckData *message,
                      ProtobufCAllocator *allocator);
/* ProtoLoRaData methods */
void   proto__lo_ra__data__init
                     (ProtoLoRaData         *message);
size_t proto__lo_ra__data__get_packed_size
                     (const ProtoLoRaData   *message);
size_t proto__lo_ra__data__pack
                     (const ProtoLoRaData   *message,
                      uint8_t             *out);
size_t proto__lo_ra__data__pack_to_buffer
                     (const ProtoLoRaData   *message,
                      ProtobufCBuffer     *buffer);
ProtoLoRaData *
       proto__lo_ra__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__lo_ra__data__free_unpacked
                     (ProtoLoRaData *message,
                      ProtobufCAllocator *allocator);
/* ProtoMessage methods */
void   proto__message__init
                     (ProtoMessage         *message);
size_t proto__message__get_packed_size
                     (const ProtoMessage   *message);
size_t proto__message__pack
                     (const ProtoMessage   *message,
                      uint8_t             *out);
size_t proto__message__pack_to_buffer
                     (const ProtoMessage   *message,
                      ProtobufCBuffer     *buffer);
ProtoMessage *
       proto__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__message__free_unpacked
                     (ProtoMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ProtoEvent_Closure)
                 (const ProtoEvent *message,
                  void *closure_data);
typedef void (*ProtoCommand_Closure)
                 (const ProtoCommand *message,
                  void *closure_data);
typedef void (*ProtoCarSensor_Closure)
                 (const ProtoCarSensor *message,
                  void *closure_data);
typedef void (*ProtoStintData_Closure)
                 (const ProtoStintData *message,
                  void *closure_data);
typedef void (*ProtoLap_Closure)
                 (const ProtoLap *message,
                  void *closure_data);
typedef void (*ProtoLapData_Closure)
                 (const ProtoLapData *message,
                  void *closure_data);
typedef void (*ProtoGpsData_Closure)
                 (const ProtoGpsData *message,
                  void *closure_data);
typedef void (*ProtoLoraConfig_Closure)
                 (const ProtoLoraConfig *message,
                  void *closure_data);
typedef void (*ProtoOdb2Data_Closure)
                 (const ProtoOdb2Data *message,
                  void *closure_data);
typedef void (*ProtoLoraStats_Closure)
                 (const ProtoLoraStats *message,
                  void *closure_data);
typedef void (*ProtoShiftlightConfig_Closure)
                 (const ProtoShiftlightConfig *message,
                  void *closure_data);
typedef void (*ProtoButton_Closure)
                 (const ProtoButton *message,
                  void *closure_data);
typedef void (*ProtoMcuData_Closure)
                 (const ProtoMcuData *message,
                  void *closure_data);
typedef void (*ProtoUpdateData_Closure)
                 (const ProtoUpdateData *message,
                  void *closure_data);
typedef void (*ProtoAckData_Closure)
                 (const ProtoAckData *message,
                  void *closure_data);
typedef void (*ProtoLoRaData_Closure)
                 (const ProtoLoRaData *message,
                  void *closure_data);
typedef void (*ProtoMessage_Closure)
                 (const ProtoMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    proto__severity__descriptor;
extern const ProtobufCEnumDescriptor    proto__event__type__descriptor;
extern const ProtobufCEnumDescriptor    proto__command__type__descriptor;
extern const ProtobufCEnumDescriptor    proto__lora__type__descriptor;
extern const ProtobufCEnumDescriptor    shiftlight__mode__descriptor;
extern const ProtobufCEnumDescriptor    button__name__descriptor;
extern const ProtobufCEnumDescriptor    button__state__descriptor;
extern const ProtobufCMessageDescriptor proto__event__descriptor;
extern const ProtobufCMessageDescriptor proto__command__descriptor;
extern const ProtobufCMessageDescriptor proto__car__sensor__descriptor;
extern const ProtobufCMessageDescriptor proto__stint__data__descriptor;
extern const ProtobufCMessageDescriptor proto__lap__descriptor;
extern const ProtobufCMessageDescriptor proto__lap__data__descriptor;
extern const ProtobufCMessageDescriptor proto__gps__data__descriptor;
extern const ProtobufCMessageDescriptor proto__lora__config__descriptor;
extern const ProtobufCMessageDescriptor proto__odb2__data__descriptor;
extern const ProtobufCMessageDescriptor proto__lora__stats__descriptor;
extern const ProtobufCMessageDescriptor proto__shiftlight__config__descriptor;
extern const ProtobufCMessageDescriptor proto__button__descriptor;
extern const ProtobufCMessageDescriptor proto__mcu__data__descriptor;
extern const ProtobufCMessageDescriptor proto__update__data__descriptor;
extern const ProtobufCMessageDescriptor proto__ack__data__descriptor;
extern const ProtobufCMessageDescriptor proto__lo_ra__data__descriptor;
extern const ProtobufCMessageDescriptor proto__message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_message_2eproto__INCLUDED */
