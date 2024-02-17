#pragma once

#include <stdint.h>

namespace hck2d2024 {


class Color {
    uint8_t r_;
    uint8_t g_;
    uint8_t b_;

public:
    Color(uint8_t r, uint8_t g, uint8_t b);

    uint8_t r() const;
    uint8_t g() const;
    uint8_t b() const;

    Color &operator=(const Color &c);  
};


}