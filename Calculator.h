#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath> // Include the cmath library for math functions

template <typename T>
class Calculator
{
public:
    T add(T a, T b);
    T subtract(T a, T b);
    T multiply(T a, T b);
    T divide(T a, T b);
    T percentage(T a, T b);
    T squareRoot(T a);
    T square(T a);
    T power(T base, T exponent);
    T naturalLog(T a);
    T logBase10(T a);
};

#include "calculator.cpp" // Include the implementation file

#endif
