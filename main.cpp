#include <iostream>
#include "functions.h"

int main(){
	double a, b;
	
	greeting();
	
	std::cout << "Enter A: ";
	std::cin >> a;
	std::cout << "Enter B: ";
	std::cin >> b;
	
	Operations oper;
	
	std::cout << "Add: " << oper.Add(a, b) << std::endl;
	std::cout << "Sub: " << oper.Sub(a, b) << std::endl;
	std::cout << "Mul: " << oper.Mul(a, b) << std::endl;
	std::cout << "Div: " << oper.Div(a, b) << std::endl;
	std::cout << "Average: " << oper.Average(a, b) << std::endl;
	std::cout << "Square: " << oper.Square(a) << std::endl;
	
	return 0;
}
