#include <iostream>
#include "functions.h"

double Operations::Add (double a, double b)
{
    return a + b;
}

double Operations::Sub (double a, double b)
{
    return a - b;
}

double Operations::Mul (double a, double b)
{
    return a * b;
}

double Operations::Div (double a, double b) 
{
    if (b == 0) 
    {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

double Operations::Average(double a, double b) {
    return (a + b) / 2.0;
}

double Operations::Square(double a) {
    return a * a;
}
