#pragma once

#include "Point.h"

namespace hck2d2024 {


class Rectangle {
    Point topLeft_;
    Point bottomRight_;
    
public:
    Rectangle(const Rectangle &r);
    Rectangle(Point topLeft, Point bottomRight);

    Point topLeft() const;
    Point bottomRight() const;

    Rectangle &operator=(Rectangle rct) {
        topLeft_ = rct.topLeft();
        bottomRight_ = rct.bottomRight();
        return *this;
    }
};


};