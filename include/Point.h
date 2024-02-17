#pragma once

#include <initializer_list>
namespace hck2d2024 {


class Point {

public:
    Point(double x, double y);

    Point(const Point &pt);

    Point(double coords[2]);

    double x() const;

    double y() const;

    Point &operator=(Point pt);

    bool operator==(Point pt);
};


}