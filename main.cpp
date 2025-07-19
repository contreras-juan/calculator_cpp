#include "add.h"
#include "substract.h"
#include "multiply.h"
#include "divide.h"
#include <iostream>

int main()
{
    float a {};
    float b {};
    char operation {};

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    if (operation == '+') {
        std::cout << add(a, b) << '\n';
    } else if (operation == '-') {
        std::cout << substract(a, b) << '\n';
    } else if (operation == '*') {
        std::cout << multiply(a, b) << '\n';
    } else if (operation == '/') {
        std::cout << divide(a, b) << '\n';
    } else {
        std::cout << "Operation not valid. Choose from +, -, *, /" << '\n';
    }

    return 0;
}