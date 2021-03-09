#pragma once
#include "Figure.h"


class Parallelogram : public Figure {
public:
    Parallelogram(double a, double b, double ang);
    double calculateP() const override;
    double calculateS() const override;

protected:
    double _a1, _b1, _ang;
};
