#include "utils.h"
#include <iostream> 
#include <string>
#include <regex>

namespace Calculator {
    std::string normalize_expression(const std::string& input) {
        std::string spaced;
        for (char c : input) {
            if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == 'r') {
                spaced += ' ';
                spaced += c;
                spaced += ' ';
            } else {
                spaced += c;
            }
        }

        // Elimina espacios múltiples
        return std::regex_replace(spaced, std::regex("\\s+"), " ");
    }
}