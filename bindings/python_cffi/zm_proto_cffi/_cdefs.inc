################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
# This file is intended to be included while generating cffi binding for top level library

zm_proto_cdefs = list ()
# Custom setup for zm-proto

zm_proto_cdefs.append ('''
typedef struct _zm_proto_t zm_proto_t;
typedef struct _zconfig_t zconfig_t;
typedef struct _zmsg_t zmsg_t;
typedef struct _zframe_t zframe_t;
typedef struct _zhash_t zhash_t;
typedef struct _mlm_client_t mlm_client_t;
// CLASS: zm_proto
// Create a new empty zm_proto
zm_proto_t *
    zm_proto_new (void);

// Create a new zm_proto from zpl/zconfig_t *
zm_proto_t *
    zm_proto_new_zpl (zconfig_t *config);

// Destroy a zm_proto instance
void
    zm_proto_destroy (zm_proto_t **self_p);

// Create a deep copy of a zm_proto instance
zm_proto_t *
    zm_proto_dup (zm_proto_t *self);

// Deserialize a zm_proto from the specified message, popping          
// as many frames as needed. Returns 0 if OK, -1 if there was an error.
int
    zm_proto_recv (zm_proto_t *self, zmsg_t *input);

// Serialize and append the zm_proto to the specified message
int
    zm_proto_send (zm_proto_t *self, zmsg_t *output);

// Print contents of message to stdout
void
    zm_proto_print (zm_proto_t *self);

// Export class as zconfig_t*. Caller is responsibe for destroying the instance
zconfig_t *
    zm_proto_zpl (zm_proto_t *self, zconfig_t *parent);

// Get the message routing id, as a frame
zframe_t *
    zm_proto_routing_id (zm_proto_t *self);

// Set the message routing id from a frame
void
    zm_proto_set_routing_id (zm_proto_t *self, zframe_t *routing_id);

// Get the zm_proto message id
int
    zm_proto_id (zm_proto_t *self);

// Set the zm_proto message id
void
    zm_proto_set_id (zm_proto_t *self, int id);

// Get the zm_proto message id as printable text
const char *
    zm_proto_command (zm_proto_t *self);

// Get the device field
const char *
    zm_proto_device (zm_proto_t *self);

// Set the device field
void
    zm_proto_set_device (zm_proto_t *self, const char *device);

// Get the time field
uint64_t
    zm_proto_time (zm_proto_t *self);

// Set the time field
void
    zm_proto_set_time (zm_proto_t *self, uint64_t time);

// Get the ttl field
uint32_t
    zm_proto_ttl (zm_proto_t *self);

// Set the ttl field
void
    zm_proto_set_ttl (zm_proto_t *self, uint32_t ttl);

// Get a copy of the ext field
zhash_t *
    zm_proto_ext (zm_proto_t *self);

// Get the ext field and transfer ownership to caller
zhash_t *
    zm_proto_get_ext (zm_proto_t *self);

// 
void
    zm_proto_set_ext (zm_proto_t *self, zhash_t **ext_p);

// Get the type field
const char *
    zm_proto_type (zm_proto_t *self);

// Set the type field
void
    zm_proto_set_type (zm_proto_t *self, const char *type);

// Get the value field
const char *
    zm_proto_value (zm_proto_t *self);

// Set the value field
void
    zm_proto_set_value (zm_proto_t *self, const char *value);

// Get the unit field
const char *
    zm_proto_unit (zm_proto_t *self);

// Set the unit field
void
    zm_proto_set_unit (zm_proto_t *self, const char *unit);

// Get the rule field
const char *
    zm_proto_rule (zm_proto_t *self);

// Set the rule field
void
    zm_proto_set_rule (zm_proto_t *self, const char *rule);

// Get the severity field
uint8_t
    zm_proto_severity (zm_proto_t *self);

// Set the severity field
void
    zm_proto_set_severity (zm_proto_t *self, uint8_t severity);

// Get the description field
const char *
    zm_proto_description (zm_proto_t *self);

// Set the description field
void
    zm_proto_set_description (zm_proto_t *self, const char *description);

// Get the code field
uint32_t
    zm_proto_code (zm_proto_t *self);

// Set the code field
void
    zm_proto_set_code (zm_proto_t *self, uint32_t code);

// Get string from ext attribute
const char *
    zm_proto_ext_string (zm_proto_t *self, const char *name, const char *dflt);

// Set ext attribute
void
    zm_proto_ext_set_string (zm_proto_t *self, const char *name, const char *value);

// Get a number
uint64_t
    zm_proto_ext_number (zm_proto_t *self, const char *name, uint64_t dflt);

// Set a number
void
    zm_proto_ext_set_number (zm_proto_t *self, const char *name, uint64_t value);

// Get a number
double
    zm_proto_ext_double (zm_proto_t *self, const char *name, double dflt);

// Set a number
void
    zm_proto_ext_set_double (zm_proto_t *self, const char *name, double value);

// Converts zmsg to zm_proto, this is for compatibility with zproto v1 codec
zm_proto_t *
    zm_proto_decode (zmsg_t **msg_p);

// V1 codec compatibility function, creates zm_proto_t with metric and encode it to zmsg_t
zmsg_t *
    zm_proto_encode_metric_v1 (const char *device, uint64_t time, uint32_t ttl, zhash_t *ext, const char *type, const char *value, const char *units);

// V1 codec compatibility function, creates zm_proto_t with device and encode it to zmsg_t
zmsg_t *
    zm_proto_encode_device_v1 (const char *device, uint64_t time, uint32_t ttl, zhash_t *ext);

// V1 codec compatibility function, creates zm_proto_t with device and encode it to zmsg_t
zmsg_t *
    zm_proto_encode_alert_v1 (const char *device, uint64_t time, uint32_t ttl, zhash_t *ext, const char *rule, uint8_t severity, const char *description);

// Set zm_proto_t as metric
void
    zm_proto_encode_metric (zm_proto_t *self, const char *device, uint64_t time, uint32_t ttl, zhash_t *ext, const char *type, const char *value, const char *units);

// Set zm_proto_t as device
void
    zm_proto_encode_device (zm_proto_t *self, const char *device, uint64_t time, uint32_t ttl, zhash_t *ext);

// Set zm_proto_t as alert
void
    zm_proto_encode_alert (zm_proto_t *self, const char *device, uint64_t time, uint32_t ttl, zhash_t *ext, const char *rule, uint8_t severity, const char *description);

// Set zm_proto_t as OK
void
    zm_proto_encode_ok (zm_proto_t *self);

// Set zm_proto_t as OK
void
    zm_proto_encode_error (zm_proto_t *self, uint32_t code, const char *description);

// Send STREAM DELIVER zm_proto_t message using mlm_client
int
    zm_proto_send_mlm (zm_proto_t *self, mlm_client_t *client, const char *subject);

// Send MAILBOX DELIVER zm_proto_t message using mlm_client
int
    zm_proto_sendto (zm_proto_t *self, mlm_client_t *client, const char *address, const char *subject);

// Receive zm_proto_t from mlm_client, return -1 and do not touch zm_proto_t
// if zm_proto_t was NOT delivered                                          
int
    zm_proto_recv_mlm (zm_proto_t *self, mlm_client_t *client);

// Self test of this class.
void
    zm_proto_test (bool verbose);

''')