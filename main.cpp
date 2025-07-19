#include "add.h"
#include "substract.h"
#include "multiply.h"
#include "divide.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <limits>  // para std::numeric_limits

float calculate(float a, float b, char operation)
{
    if (operation == '+') {
        return add(a, b);
    } else if (operation == '-') {
        return substract(a, b);
    } else if (operation == '*') {
        return multiply(a, b);
    } else if (operation == '/') {
        return divide(a, b);  // puede lanzar excepción
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
    if (std::cin.fail()) {
        std::cerr << "Entrada inválida para el primer número.\n";
        return 1;
    }

    std::cout << "Enter second number: ";
    std::cin >> b;
    if (std::cin.fail()) {
        std::cerr << "Entrada inválida para el segundo número.\n";
        return 1;
    }

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    if (std::cin.fail()) {
        std::cerr << "Entrada inválida para la operación.\n";
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
