#include "include/add.h"
#include "include/subtract.h"
#include "include/multiply.h"
#include "include/divide.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <limits>  // para std::numeric_limits

/*
    Ask about differences between "" and ''
    Ask about -Iinclude when compiling
*/

float calculate(float a, float b, char operation)
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
            
        default:
            std::cerr << "Operation not valid! \n";
            return NAN;
    }
}

int main()
{
    float a {};
    float b {};
    char operation {};

    std::cout << "Enter first number: ";
    std::cin >> a;
    if (std::cin.fail()) {
        std::cerr << "Invalid entry (first number).\n";
        return 1;
    }

    std::cout << "Enter second number: ";
    std::cin >> b;
    if (std::cin.fail()) {
        std::cerr << "Invalid entry (second number)\n";
        return 1;
    }

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    if (std::cin.fail()) {
        std::cerr << "Invalid entry (operation)!\n";
        return 1;
    }

    try {
        float result = calculate(a, b, operation);
        if (!std::isnan(result)) {
            std::cout << a << " " << operation << " " << b << " = " << result << '\n';
        } else {
            std::cerr << "No se pudo calcular el resultado.\n";
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}