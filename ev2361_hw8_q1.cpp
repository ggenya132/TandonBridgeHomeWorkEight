#include <climits>
#include <iostream>
using namespace std;

// Function to find the minimum value in the array
int minInArray(int arr[], int arrSize) {
    int minVal = INT_MAX;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int numbers[20];
    int arrSize = 20;

    cout << "Please enter 20 integers separated by a space:" << endl;
    for (int i = 0; i < arrSize; i++) {
        cin >> numbers[i];
    }

    // Get the minimum value
    int minVal = minInArray(numbers, arrSize);

    // Print the minimum value
    cout << "The minimum value is " << minVal
         << ", and it is located in the following indices: ";

    // Find and print all indices where the minimum value appears
    for (int i = 0; i < arrSize; i++) {
        if (numbers[i] == minVal) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
