#include "power.h"
#include <cmath>
#include <iostream>

namespace Calculator{
    double power(double base, double exponent)
    {
        return std::pow(base, exponent);
    }
}