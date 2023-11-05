#include<iostream>

int main()
{

    int num1, num2;

    
    std::cout << "Enter the first nimber: ";
    std::cin >> num1;

    
    std::cout << "Enter the second number: ";
    std::cin >> num2;

 
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    
    int largest = (*ptr1 > *ptr2) ? *ptr1 : *ptr2;

    std::cout << "The Largest number " << largest << std::endl;

	return 0;
}