#include "acceping.h"
#include "system.h"
#include "statemodel.h" // For the other states

// Create the object of the accpeting state
state_t accepting = {
    order_recieved, // order_recieved
    default_event_handler, // invalid_payment
    default_event_handler, // valid_payment
    default_event_handler, // manufacture_failed
    default_event_handler, // manufacture_completed
    default_event_handler, // shipment_arrived
    default_event_handler, // shipment_lost
    default_action,    // entry_to
    default_action    // exit_from
}

state_t* order_recieved() {
    getOrderSize();
    resetAttempts();
    return &processing;
}
