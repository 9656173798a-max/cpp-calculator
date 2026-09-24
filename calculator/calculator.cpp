#include "calculator.h"
#include <cmath>
#include <iostream>
#include <string>

bool ReadNumber(Number& result) {
    if (std::cin >> result) {
        return true;
    }
    else {
        std::cerr << "Error: Numeric operand expected" << std::endl;
        return false;
    }
}

bool RunCalculatorCycle() {
    std::string command;
    Number memory_value = 0;
    bool is_memory_set = false;
    Number current_value;

    if (!ReadNumber(current_value)) {
        return false;
    }

    while (std::cin >> command) {
        if (command == "+") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value += operand;
        }
        else if (command == "-") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value -= operand;
        }
        else if (command == "*") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value *= operand;
        }
        else if (command == "/") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value /= operand;
        }
        else if (command == "**") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value = pow(current_value, operand);
        }
        else if (command == ":") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value = operand;
        }
        else if (command == "=") {
            std::cout << current_value << std::endl;
        }
        else if (command == "c") {
            current_value = 0;
        }
        else if (command == "s") {
            memory_value = current_value;
            is_memory_set = true;
        }
        else if (command == "l") {
            if (is_memory_set) {
                current_value = memory_value;
            }
            else {
                std::cerr << "Error: Memory is empty" << std::endl;
                return false;
            }
        }
        else if (command == "q") {
            return true;
        }
        else {
            std::cerr << "Error: Unknown token " << command << std::endl;
            return false;
        }
    }

    return false;
}

