#include "divide.h"
#include <stdexcept>

namespace Calculator{
    double divide(double a, double b)
    {
        if (b == 0){
            throw std::runtime_error("Division by 0!");
            } else{
                return a/b;
                }
            }
    }