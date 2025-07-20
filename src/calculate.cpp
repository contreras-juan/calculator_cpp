#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"
#include "power.h"
#include "radical.h"
#include <iostream>
#include <stdexcept>
#include <cmath>

double calculate(double a, double b, char operation)
{
    switch(operation){
        case '+':
            return add(a, b);

        case '-':
            return subtract(a, b);

        case '*':
            return multiply(a, b);

        case '/':
            return divide(a, b);

        case '^':
            return power(a, b);

        case 'r':
            return radical(a, b);
            
        default:
            std::cerr << "Operation not valid! \n";
            return NAN;
    }
}
