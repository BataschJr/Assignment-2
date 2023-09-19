#include <iostream>
#include "calculator.h"
#include <assert.h>

int main()
{
    Calculator<double> calculator;

    double num1, num2;
    assert(num2 == 0); // asserting
    std::string operation;

    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter operation (+, -, *, /, %, sqrt, square, ^, ln, log): ";
    std::cin >> operation;

    if (operation != "sqrt" && operation != "square" && operation != "ln" && operation != "log")
    {
        // For operations that require two numbers, prompt for the second number
        std::cout << "Enter the second number: ";
        std::cin >> num2;
    }

    try
    {
        double result;
        if (operation == "+")
        {
            result = calculator.add(num1, num2);
        }
        else if (operation == "-")
        {
            result = calculator.subtract(num1, num2);
        }
        else if (operation == "*")
        {
            result = calculator.multiply(num1, num2);
        }
        else if (operation == "/")
        {
            assert(num2 != 0);
            result = calculator.divide(num1, num2);
        }
        else if (operation == "%")
        {
            assert(num2 != 0);
            result = calculator.percentage(num1, num2);
        }
        else if (operation == "sqrt")
        {
            assert(num1 >= 0);
            result = calculator.squareRoot(num1);
        }
        else if (operation == "square")
        {
            result = calculator.square(num1);
        }
        else if (operation == "^")
        {
            // ... (existing cases)
        }
        else if (operation == "ln")
        {
            assert(num1 > 0);
            result = calculator.naturalLog(num1);
        }
        else if (operation == "log")
        {
            result = calculator.logBase10(num1);
        }
        else
        {
            std::cout << "Invalid operation." << std::endl;
            return 1;
        }

        std::cout << "Result: " << result << std::endl;
    }
    catch (const char *msg)
    {
        std::cerr << "Error: " << msg << std::endl;
    }

    return 0;
}
