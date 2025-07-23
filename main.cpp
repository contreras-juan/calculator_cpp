#include "calculate.h"
#include "utils.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <limits> 
#include <string>
#include <iomanip>
#include <sstream> 
#include <cctype>
#include <regex>

int main()
{
    double ans = 0.0;  // memoria del último resultado

    while (true) {
        std::cout << std::fixed << std::setprecision(6);

        std::string line;
        std::string a_str, b_str;
        double a, b;
        char operation;

        std::cout << "Enter operation (e.g. 3.5 + 2 or 'q' to quit): ";
        std::getline(std::cin, line);
        line = Calculator::normalize_expression(line);


        if (line == "q" || line == "Q") {
            std::cout << "Bye Bye!\n";
            break;
        }

        std::istringstream iss(line);
        if (!(iss >> a_str >> operation >> b_str)) {
            std::cerr << "Invalid input format. Try: <number|ans> <operator> <number|ans>\n";
            continue;
        }

        std::string extra;
        if (iss >> extra) {
            std::cerr << "Too many inputs. Use format: <number> <operator> <number>\n";
            continue;
        }

        // Reemplazo de 'ans' por el último valor
        try {
            a = (a_str == "ans" || a_str == "ANS") ? ans : std::stod(a_str);
            b = (b_str == "ans" || b_str == "ANS") ? ans : std::stod(b_str);
        } catch (...) {
            std::cerr << "Invalid number format.\n";
            continue;
        }

        try {
            double result = Calculator::calculate(a, b, operation);
            if (!std::isnan(result)) {
                std::cout << a << " " << operation << " " << b << " = " << result << '\n';
                ans = result;  // almacena el resultado para la próxima vez
            } else {
                std::cerr << "Calculation error.\n";
            }
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << '\n';
        }
    }

    return 0;
}
