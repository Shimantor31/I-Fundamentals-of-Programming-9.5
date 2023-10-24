#include <iostream>
#include "func.h"

using namespace std;

int main() {
    int n, minValue, maxValue;

    // 1

    cout << "Enter the size of the array: ";
    cin >> n;

    int* originalArray = new int[n];
    int* positiveIndices = new int[n];
    int positiveCount = 0;

    initializeArray(originalArray, n);
    positiveCount = findPositiveIndices(originalArray, n, positiveIndices);

    if (positiveCount > 0) {
        printFirstPositiveElement(originalArray, positiveIndices[0]);
        printPositiveIndicesReverse(positiveIndices, positiveCount);
    }
    else {
        cout << "There are no positive elements in the array." << endl;
    }

    printArray(originalArray, n);

    system("pause");
    
    delete[] originalArray;
    delete[] positiveIndices;
    
    cout << "\033[2J\033[1;1H";

    cout << "Enter the size of the array: ";
    cin >> n;

    originalArray = new int[n];
    positiveIndices = new int[n];
    positiveCount = 0;

    inputArray(originalArray, n);
    positiveCount = findPositiveIndices(originalArray, n, positiveIndices);

    if (positiveCount > 0) {
        printFirstPositiveElement(originalArray, positiveIndices[0]);
        printPositiveIndicesReverse(positiveIndices, positiveCount);
    }
    else {
        cout << "There are no positive elements in the array." << endl;
    }

    printArray(originalArray, n);

    system("pause");

    delete[] originalArray;
    delete[] positiveIndices;

}