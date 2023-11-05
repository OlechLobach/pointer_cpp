#include<iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    int* ptr = &number; 

    if (*ptr > 0) {
        std::cout << "The number is positive." << std::endl;
    }
    else if (*ptr < 0) {
        std::cout << "The number is negative." << std::endl;
    }
    else {
        std::cout << "The number is equal to zero." << std::endl;
    }
	return 0;
}