#include <zephyr/kernel.h>
#include <zephyr/toolchain/common.h>
#include <stdint.h>
#include <zmk/status_advertisement.h>

int scanner_msg_send_keyboard_data(const struct zmk_status_adv_data *prospector_data,
                                   int8_t rssi,
                                   const char *device_name,
                                   const uint8_t *ble_addr,
                                   uint8_t ble_addr_type) {
    ARG_UNUSED(prospector_data);
    ARG_UNUSED(rssi);
    ARG_UNUSED(device_name);
    ARG_UNUSED(ble_addr);
    ARG_UNUSED(ble_addr_type);
    return 0;
}

int scanner_msg_send_timeout_check(void) {
    return 0;
}
