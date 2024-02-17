#include "Rectangle.h"
#include "Color.h"
#include "Shape.h"

using namespace hck2d2024;


Rectangle::Rectangle(Point topLeft, Point bottomRight) 
: topLeft_(topLeft), bottomRight_(bottomRight) {
}


Point Rectangle::bottomRight() const {
    return bottomRight_;
}


Point Rectangle::topLeft() const {
    return topLeft_;
}


Shape::Shape(std::initializer_list<Point> pts)
: points_(pts) {

}


Shape::Shape(const Shape &s) 
: points_(s.points_) {

}


Shape::Shape(Shape &&s)
: points_(std::move(s.points_)) {

}


Shape::Shape(const std::vector<Point> &pts)
: points_(pts) {

}


size_t Shape::numVertices() const { return points_.size(); }


Point &Shape::operator[](size_t idx) {
    return points_[idx];
}


Shape &Shape::operator=(const Shape &shape) {
    points_ = shape.points_;
    return *this;
}


Shape::Shape(std::vector<Point> &&pts)
: points_(std::move(pts)) {}


Color::Color(uint8_t r, uint8_t g, uint8_t b) 
: r_(r), g_(g), b_(b) {
}


uint8_t Color::r() const {
    return r_;
}


uint8_t Color::g() const {
    return g_;
}


uint8_t Color::b() const {
    return b_;
}


Color &Color::operator=(const Color &c) {
    r_ = c.r();
    g_ = c.g();
    b_ = c.b();

    return *this;
}


Point::Point(double x, double y) 
: x_(x), y_(y) {}


Point::Point(const Point &p)
: x_(p.x()), y_(p.y()) {}


double Point::x() const {
    return x_;
}


double Point::y() const {
    return y_;
}


Point &Point::operator=(Point pt) {
    x_ = pt.x();
    y_ = pt.y();
    return *this;
}


bool Point::operator==(Point pt) {
    return x_ == pt.x() && y_ == pt.y();
}