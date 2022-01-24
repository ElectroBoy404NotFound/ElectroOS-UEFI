#pragma once

#include "stdint.h"

#include "../graphics/print.h"

struct UtilClasses {
    Print print;
};

const char* intToString(int64_t value);
const char* uintToString(uint64_t value);
const char* hexToString(uint64_t value);
const char* hexToString32(uint32_t value);
const char* hexToString16(uint16_t value);
const char* hexToString8(uint8_t value);
const char* doubleToString(double value, uint8_t decimalPlaces);
const char* doubleToString(double value);