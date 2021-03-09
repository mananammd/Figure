#pragma once
#include <string>
#include <iostream>
#include <cassert>
#include <cmath>


class Figure {
public:
    //Figure() = delete;
    //virtual ~Figure() = default;

    virtual double calculateS() const = 0;
    virtual double calculateP() const = 0;

    std::string getName() const {
        return _name;
    }

protected:
    std::string _name;
};