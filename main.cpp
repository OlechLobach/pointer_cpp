#include <iostream>
#include <ctime>
using namespace::std;

const int arrSize = 5;


int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void generateRandomArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = generateRandomNumber(0, 99);  
    }
}

int main() {
    int myArr[arrSize];

 
    srand(static_cast<unsigned int>(time(0)));

    generateRandomArr(myArr, arrSize);

    cout << "Init array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << myArr[i] << " ";
    }
    cout << std::endl;

    int* start = myArr;
    int* end = myArr + arrSize - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }


    cout << "The array after reversing: ";
    for (int i = 0; i < arrSize; i++) {
       cout << myArr[i] << " ";
    }
    cout << std::endl;

    return 0;
}
