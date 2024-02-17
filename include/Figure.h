#pragma once

#include "Shape.h"
#include "Color.h"

namespace hck2d2024 {


class Figure {
    Shape geometry_;
    Color color_;

public:
    Figure(const Shape &shape, Color color);

    Color color() const;
    const Shape &shape() const;
};


}