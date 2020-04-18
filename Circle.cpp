#include <cmath>
#include <iostream>
#include "Circle.h"


    circle::circle() {
        xCenter_ = 0;
        yCenter_ = 0;
        r_ = 0;
        mass_ = 0;
    }

    circle::circle (double xCenter, double yCenter, double r, double mass) {
        xCenter_ = xCenter;
        yCenter_ = yCenter;
        r_ = r;
        mass_ = mass;
    }

    void circle::initFromDialog() {
        std::cout << "Enter coordinates of a center of the circle :\n";
        std::cin >>xCenter_ >> yCenter_;
        std::cout << "Enter radius : \n";
        std::cin >> r_;
        std::cout << "Enter mass :\n";
        std::cin >> mass_;
    }

    double circle::square() {
        return M_PI * r_ * r_;
    }

    double circle::perimeter() {
        return 2 * M_PI * r_;
    }

    double circle::mass() const {
        return mass_;
    }

    Vector2D circle::position() {
        Vector2D ans;
        ans.x = xCenter_;
        ans.y = yCenter_;
        return ans;
    }

    bool circle::operator== (const PhysObject& ob) const {
        return (mass_ == ob.mass());
    }

    bool circle::operator< (const PhysObject& ob) const {
        return (mass_ < ob.mass());
    }

    void circle::draw() {
        std::cout << "Coordinates of a center: (" << xCenter_ << ", " << yCenter_  << ")\n";
        std::cout << "radius = : " << r_ << " b = " << "\n";
        std::cout << "Mass: " << mass_ << "\n";
    }

    const char* circle::classname() {
        return "circle!";
    }

    int circle::size() {
        return 8*2 + 8*2 + 8;
    }

