#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter first integer: ";
    std::cin >> num1;

    std::cout << "Enter second integer: ";
    std::cin >> num2;
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;  
    int modulo = num1 % num2;    

    std::cout << "Addition: " << addition << std::endl;
    std::cout << "Subtraction: " << subtraction << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl;
    std::cout << "Division: " << division << std::endl;
    std::cout << "Modulo: " << modulo << std::endl;

    return 0;
}
