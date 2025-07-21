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
        
        std::string input;
        double first_digit, second_digit;
        char operation;
        
        std::cout << "Enter operation:";
        std::cin >> first_digit >> operation >> second_digit;
        
        if (std::cin.fail()) {
            std::cerr << "Invalid operation.\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
            }
            
        try {
            double result = Calculator::calculate(first_digit, second_digit, operation);
            if (!std::isnan(result)) {
                std::cout << first_digit << " " << operation << " " << second_digit << " = " << result << '\n';
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