#pragma once

using Number = double;

class Calculator {
public:
    void Set(Number number);
    Number GetNumber() const;

    void Add(Number number);
    void Sub(Number number);
    void Mul(Number number);
    void Div(Number number);
    void Pow(Number number);

private:
    Number current_number_ = 0;
};