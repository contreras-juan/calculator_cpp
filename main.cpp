#include "add.h"
#include "substract.h"
#include "multiply.h"
#include "divide.h"
#include <iostream>
#include <stdexcept>
#include <cmath>

float calculate(float a, float b, char operation)
{
    if(operation == '+'){
        return add(a, b);
    } else if (operation == '-'){
        return substract (a, b);
        } else if (operation == '*'){
            return multiply(a, b);
            } else if (operation == '/'){
                try{
                    return divide(a, b);
                } catch (const std::runtime_error& e){
                    std::cerr << "Error: " << e.what() << '\n';
                    return NAN;
                    }
                    } else {
                        std::cerr << "Operación no válida.\n";
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

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    try {
        float result = calculate(a, b, operation);
        std::cout << a << " " << operation << " " << b << " = " << result << '\n';
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << '\n';
            }

    return 0;
}