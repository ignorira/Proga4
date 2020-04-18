#pragma once

#include "interface.h"

class circle: public IAllTheInterfaces
        {

private:
    double xCenter_, yCenter_;
    double r_;
    double mass_;

public:
    circle();
    circle (double xCenter, double yCenter, double r, double mass);

    void initFromDialog() override;
    double square() override;
    double perimeter() override;
    double mass() const override;
    Vector2D position() override;
    bool operator== (const PhysObject& ob) const override;
    bool operator< (const PhysObject& ob) const override;
    void draw() override;
    const char* classname() override;
    int size() override;

};
