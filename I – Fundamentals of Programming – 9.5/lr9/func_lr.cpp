#include <iostream>

using namespace std;

void initializeArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        array[i] = rand() % (101) - 50;
}

void inputArray(int array[], int size) {
    cout << "Enter " << size << " elements of array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
}

void printArray(const int array[], int size) {
    cout << "Your array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int findPositiveIndices(const int array[], int size, int positiveIndices[]) {
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            positiveIndices[counter] = i;
            counter++;
        }
    }
    return counter;
}

void printFirstPositiveElement(const int array[], int index) {
    cout << "The first positive element: " << array[index] << endl;
}

void printPositiveIndicesReverse(const int positiveIndices[], int count) {
    cout << "Indices of positive elements in reverse order: ";
    for (int i = count - 1; i >= 0; --i) {
        cout << positiveIndices[i] << " ";
    }
    cout << endl;
}