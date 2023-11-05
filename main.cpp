#include <iostream>
#include <ctime>
using namespace::std;
const int arrSize = 5;

void copyArr(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        *destination = *source;
        source++;     
        destination++;
    }
}

int main() {
    int sourceArr[arrSize];
    int destinationArr[arrSize];


    srand(static_cast<unsigned int>(time(0)));

   
    for (int i = 0; i < arrSize; i++) {
        sourceArr[i] = rand() % 100; 
    }

 
    cout << "Source Array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << sourceArr[i] << " ";
    }
    cout << endl;


    copyArr(sourceArr, destinationArr, arrSize);

    cout << "Copied Array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << destinationArr[i] << " ";
    }
    cout << endl;

    return 0;
}
