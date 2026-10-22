#include "calculator.h"
#include <cmath>

void Calculator::Set(Number number) {
    current_number_ = number;
}

Number Calculator::GetNumber() const {
    return current_number_;
}

void Calculator::Add(Number number) {
    current_number_ += number;
}

void Calculator::Sub(Number number) {
    current_number_ -= number;
}

void Calculator::Mul(Number number) {
    current_number_ *= number;
}

void Calculator::Div(Number number) {
    current_number_ /= number;
}

void Calculator::Pow(Number number) {
    current_number_ = std::pow(current_number_, number);
}