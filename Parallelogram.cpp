#include "Parallelogram.h"
#define PI 3.14159265 
double _a1, _b1, _ang;

Parallelogram::Parallelogram(double a, double b, double ang) {
    _name = "Parallelogram";
    _a1 = a;
    _b1 = b;
    _ang = ang;

    assert(ang > 0);
}

double Parallelogram::calculateP() const {
    return 2*_a1 + 2*_b1;
}

double Parallelogram::calculateS() const {
    const double p = calculateP() / 2;
    return _a1 * _b1 * sin(_ang * PI / 180);
}

