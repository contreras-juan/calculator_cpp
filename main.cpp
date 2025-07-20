#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <limits> 
#include <string>

/*
    TODO
    - Add interactive loop
    - Allow additional operators (e.g. Square root)
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
    while (true) {
        std::string input;
        float a, b;
        char operation;
        
        std::cout << "Enter first number (or 'q' to quit): ";
        
        std::cin >> input;
        
        if (input == "q") {
            std::cout << "Bye Bye!\n";
            return 0;
            }
            
        try {
            a = std::stof(input);
            } catch (...) {
                std::cerr << "Invalid input for first number.\n";
                continue;
                }

        std::cout << "Enter second number: ";
        std::cin >> input;

        try {
            b = std::stof(input);
            } catch (...) {
                std::cerr << "Invalid input for second number.\n";
                continue;
                }
                
        std::cout << "Enter operation (+, -, *, /): ";
        std::cin >> operation;
        
        if (std::cin.fail()) {
            std::cerr << "Invalid operation.\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
            }
            
        try {
            float result = calculate(a, b, operation);
            if (!std::isnan(result)) {
                std::cout << a << " " << operation << " " << b << " = " << result << '\n';
                } else {
                    std::cerr << "Error calculating.\n";
                    }
                } 
                catch (const std::runtime_error& e) {
                    std::cerr << "Error: " << e.what() << '\n';
                    }
                }
    return 0;
}