// Copyright 2022 UNN-CS
#include <cstdint>
#include <cmath>
#include "circle.h"


Circle::Circle(double rad) {
    radius = rad;
    ference = 2 * rad * 3.14;
    area = 3.14 * rad * rad;
}

void Circle::setRadius(double rad) {
    radius = rad;
    ference = 2 * rad * 3.14;
    area = 3.14 * rad * rad;
}

void Circle::setFerence(double fer) {
    ference = fer;
    radius = fer / 2 / 3.14;
    area = 3.14 * radius * radius;
}

void Circle::setArea(double ar) {
    area = ar;
    radius = sqrt(ar / 3.14);
    ference = radius * 2 * 3.14;
}

double Circle::getRadius() {
    return radius;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getArea() {
    return area;
}
