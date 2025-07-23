#include "calculate.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <limits> 
#include <string>
#include <iomanip>

/*
    TODO
    - Allow additional operators (e.g. Square root)
*/

int main()
{
    while (true) {
        std::cout << std::fixed << std::setprecision(6);

        std::string line;
        double first_digit, second_digit;
        char operation;

        std::cout << "Enter operation (e.g. 3.5 + 2 or 'q' to quit): ";
        std::getline(std::cin, line);

        if (line == "q" || line == "Q") {
            std::cout << "Bye Bye!\n";
            break;
        }

        std::istringstream iss(line);
        if (!(iss >> first_digit >> operation >> second_digit)) {
            std::cerr << "Invalid input format. Try again.\n";
            continue;
        }

        // Detecta si hay tokens adicionales luego de la operación
        std::string extra;
        if (iss >> extra) {
            std::cerr << "Too many inputs. Format must be: <number> <operator> <number>\n";
            continue;
        }

        try {
            double result = Calculator::calculate(first_digit, second_digit, operation);
            if (!std::isnan(result)) {
                std::cout << first_digit << " " << operation << " " << second_digit << " = " << result << '\n';
            } else {
                std::cerr << "Calculation error.\n";
            }
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << '\n';
        }
    }

    return 0;
}