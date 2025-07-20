#include <cmath>
#include <iostream>

namespace Calculator{
    double radical(double base, double index) {
        if (index == 0.0) {
            throw std::invalid_argument("Root index cannot be zero.");
            }
        if (base < 0 && std::fmod(index, 2.0) == 0.0) {
            throw std::domain_error("Even root of a negative number is not real.");
            }
            
        return std::pow(base, 1.0 / index);
        }
    }