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

void drawCircle(int radius) {
    int centerX = 10;
    int centerY = 10;

    for (int y = 0; y <= 20; ++y) {
        for (int x = 0; x <= 20; ++x) {
            double distance = sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));
            if (abs(distance - radius) < 1.5) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}