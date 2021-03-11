#include "Ellipse.h"
#define PI 3.14159265 

Ellipse::Ellipse(double a, double b) {
    _name = "Ellipse";
    _ra = a;
    _rb = b;

    assert(
        (a > 0) && (b > 0)
    );
}

double Ellipse::calculateP() const {
    return (4 * (PI * _ra * _rb
        + (_ra - _rb) * (_ra - _rb))
        / (_ra + _rb)
        );
}

double Ellipse::calculateS() const {
    return _ra * _rb * PI;
}
