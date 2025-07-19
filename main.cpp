#include "add.h"
#include "substract.h"
#include "multiply.h"
#include "divide.h"
#include <iostream>

int main()
{
    std::cout << "Summation: " << add(2,2) << '\n';
    std::cout << "Substraction: " << substract(2,2) << '\n';
    std::cout << "Multiplication: " << multiply(2,2) << '\n';
    std::cout << "Division: " << divide(2,2) << '\n';

    return 0;
}