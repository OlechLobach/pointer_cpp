#include <iostream>
#include <ctime>
using namespace::std;

const int arrSize = 5;

int main() {
    int sourceArr[arrSize];
    int destinationArr[arrSize];

    
    srand(static_cast<unsigned int>(time(0)));

   
    for (int i = 0; i < arrSize; i++) {
        sourceArr[i] = rand() % 100; 
    }

    
    cout << "Init array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << sourceArr[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < arrSize; i++) {
        destinationArr[i] = sourceArr[arrSize - 1 - i];
    }

    cout << "Copied array after reverse: ";
    for (int i = 0; i < arrSize; i++) {
        cout << destinationArr[i] << " ";
    }
    cout << endl;

    return 0;
}
