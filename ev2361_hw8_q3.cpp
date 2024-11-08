// amc10453_hw8_q3.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize / 2; i++) {
        // Swap elements from the start with elements from the end
        int temp = arr[i];
        arr[i] = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = temp;
    }
}

// b. Function to remove odd numbers from the array
void removeOdd(int arr[], int& arrSize) {
    int newSize = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] % 2 == 0) {        // Check if the element is even
            arr[newSize++] = arr[i];  // Place even elements in the beginning
        }
    }
    arrSize = newSize;  // Update the size to the new logical size
}

// c. Function to split the array by parity, with odds first and evens last
void splitParity(int arr[], int arrSize) {
    int left = 0, right = arrSize - 1;
    while (left < right) {
        // Move left until an even number is found
        while (left < right && arr[left] % 2 != 0) left++;
        // Move right until an odd number is found
        while (left < right && arr[right] % 2 == 0) right--;
        // Swap the even number on the left with the odd number on the right
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// Testing the functions with sample data
int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;

    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);  // Expected output: -3 12 14 2 9

    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);  // Expected output: 12 6 14

    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);  // Expected output: Any order with all odds
                                 // first, evens last

    return 0;
}