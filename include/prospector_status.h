#pragma once

#include <stdbool.h>
#include <stdint.h>

bool prospector_status_has_data(void);
const char *prospector_status_get_keyboard_name(void);
const char *prospector_status_get_layer_name(void);
uint8_t prospector_status_get_battery(void);
