 #include "ITriangle.h"

 ITriangle::ITriangle(double a, double b) 
        : Triangle(a, b, a) 
    {
        _name = "ITriangle";
    }