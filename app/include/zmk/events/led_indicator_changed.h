/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zmk/led_indicator_types.h>
#include <zmk/event_manager.h>

struct zmk_led_indicator_changed {
    zmk_leds_flags_t leds;
};

ZMK_EVENT_DECLARE(zmk_led_indicator_changed);