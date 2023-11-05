#include <iostream>
#include <ctime> 

int main() {
    const int arraySize = 5;
    int numbers[arraySize];

   
    srand(static_cast<unsigned int>(time(0)));

   
    for (int i = 0; i < arraySize; i++) {
        numbers[i] = std::rand() % 100 + 1; 
    }

    int sum = 0;

   
    int* ptr = numbers; 

    for (int i = 0; i < arraySize; i++) {
        sum += *ptr;
        ptr++;
    }

    std::cout << "Randomly generated array: ";
    for (int i = 0; i < arraySize; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\nSum of array elements: " << sum << std::endl;

    return 0;
}