#include"Circle.h"

Circle::Circle(){
    center = Point2D(0,0);
    radius = 1;
}

Circle::Circle(std::string color, Point2D center, double radius) : Shape(color){
    this->center = center;
    this->radius = radius;
}

Point2D Circle::get_center() const{
    return center;
}

void Circle::set_center(Point2D p){
    center = p;
}

double Circle::get_radius() const{
    return radius;
}

void Circle::set_radius(double r){
    radius = r;
}

std::ostream& operator<<(std::ostream &out, const Circle &c){
    out << "Circle: " << c.center << ", " << c.radius << ", " << c.color;
    return out;
}

double Circle::area() const {
    return 3.1416 * radius * radius;
}

double Circle::perimeter() const {
    return 2 * 3.1416 * radius;
}

void Circle::translate(double incX, double incY){
    center.set_x(center.get_x() + incX);
    center.set_y(center.get_y() + incY);
}

virtual void Circle::print() override{
    std::cout << *this << std::endl;
}

