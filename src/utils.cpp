#include "utils.h"
#include <iostream> 
#include <string>

namespace Calculator{
    std::string normalize_expression(const std::string& input) {
        std::string output;
        for (size_t i = 0; i < input.length(); ++i) {
            char c = input[i];
            if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == 'r') {
                if (i > 0 && input[i - 1] != ' ')
                    output += ' ';
                output += c;
                if (i + 1 < input.length() && input[i + 1] != ' ')
                    output += ' ';
            } else {
                output += c;
            }
        }
        return output;
    }
}