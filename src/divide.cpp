#include "divide.h"
#include <stdexcept>

namespace Calculator{
    float divide(float a, float b)
    {
        if (b == 0){
            throw std::runtime_error("Division by 0!");
            } else{
                return a/b;
                }
            }
    }