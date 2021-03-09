 #include "RTriangle.h"

 RTriangle::RTriangle(double a, double b) 
        : Triangle(a, b, std::sqrt(a*a + b*b)) 
    {
        _name = "RTriangle";
    }