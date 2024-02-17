#pragma once


#include <initializer_list>
#include "Point.h"
#include <vector>


namespace hck2d2024 {


class Shape {
    std::vector<Point> points_;

public:
    Shape(std::initializer_list<Point> pts);

    Shape(const Shape &s);

    Shape(Shape &&s);

    Shape(const std::vector<Point> &pts);

    Shape(std::vector<Point> &&pts);

    size_t numVertices() const;

    Point &operator[](size_t idx);

    Shape &operator=(const Shape &sh);
};


}