#pragma once

#include <initializer_list>
#include "Point.h"
#include <vector>


namespace hck2d2024 {


class Shape {

public:
    Shape(std::initializer_list<Point> pts);

    Shape(const Shape &s);

    Shape(Shape &&s);

    Shape(const std::vector<Point> &pts);

    Shape(std::vector<Point> &&pts);

    size_t numVertices() const;

    Point operator[](size_t idx) const;

    Shape &operator=(const Shape &sh);
    Shape &operator=(Shape &&sh);
    Shape &operator=(const std::vector<Point> &pts);
    Shape &operator=(std::vector<Point> &&pts);
};


}