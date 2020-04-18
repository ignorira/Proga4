#include <cmath>
#include <iostream>
#include "Rectangle.h"


    Rectangle::Rectangle() {
        v1.x = 0;
        v1.y = 0;
        v2.x = 0;
        v2.y = 0;
        mass_ = 0;
    }

    Rectangle::Rectangle(const double& x1, const double& y1, const double& x2, const double& y2, double mass) {
        v1.x = x1;
        v1.y = y1;
        v2.x = x2;
        v2.y = y2;
        mass_ = mass;
    }

    void Rectangle::initFromDialog() {
        std::cout << "Enter coordinates of corner points:\n";
        std::cin >> v1.x >> v1.y >> v2.x >> v2.y;
        std::cout << "Enter mass of the object: \n";
        std::cin >> mass_;
    }

    double Rectangle::square() {
        return abs(v1.x - v2.x) * abs(v2.y - v2.y);
    }

    double Rectangle::perimeter() {
        return 2 *(abs(v1.x - v2.x) + abs(v2.y - v2.y));
    }

    double Rectangle::mass() const {
        return mass_;
    }

    Vector2D Rectangle::position() {
        Vector2D ans;
        ans.x = (v1.x + v2.x) / 2;
        ans.y = (v1.y + v2.y) / 2;
        return ans;
    }

    bool Rectangle::operator== (const PhysObject& ob) const {
        return (mass_ == ob.mass());
    }

    bool Rectangle::operator< (const PhysObject& ob) const {
        return (mass_ < ob.mass());
    }

    void Rectangle::draw() {
        std::cout << "Coordinates: (" << v1.x << ", " << v1.y << ") (" << v2.x << ", " << v2.y << ")\n";
        std::cout << "Mass: " << mass_ << "\n";
    }

    const char* Rectangle::classname() {
        return "Rectangle!";
    }

    int Rectangle::size() {
        return 8*2 + 8*2 + 8;
    }


