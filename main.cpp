
#include <iostream>

int main() {
    int a, b;


    std::cout << "Enter the first number (a): ";
    std::cin >> a;
    std::cout << "Enter the second number (b): ";
    std::cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;


    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "After swapping:\n";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}