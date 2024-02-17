#pragma once


namespace hck2d2024 {


class Point {
    double x_;
    double y_;
    
public:
    Point(double x, double y);

    Point(const Point &pt);

    double x() const;

    double y() const;

    Point &operator=(Point pt);

    bool operator==(Point pt);
};


}