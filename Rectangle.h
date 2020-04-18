#pragma once

#include "interface.h"

class Rectangle: public IAllTheInterfaces
         {

private:
    Vector2D v1, v2;
    double mass_;

public:
    Rectangle();
    Rectangle(const double& x1, const double& y1, const double& x2, const double& y2, double mass);

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

