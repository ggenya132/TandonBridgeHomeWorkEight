#include <iostream>
#include <random>
using namespace std;

int const PIN_NUMBER_LENGTH = 5;
int const PIN[] = {1, 3, 0, 5, 9};
void generateMapping(int arr[]) {
    // Seed with a real random value, if available
    random_device rd;

    // Initialize a random number generator with the seed
    mt19937 gen(rd());

    // Define the range [0, 9]
    uniform_int_distribution<> distr(0, 9);

    for (int i = 0; i < 10; i++) {
        arr[i] = distr(gen);
    }
}

void displayMapping(const int mapping[]) {
    cout << "PIN:  ";
    for (int i = 0; i < 10; ++i) {
        cout << i << " ";
    }
    cout << "\nNUM:  ";
    for (int i = 0; i < 10; ++i) {
        cout << mapping[i] << " ";
    }
    cout << "\n";
}
bool authenticate(int mappingArr[], int userInput[]) {
    for (int i = 0; i < PIN_NUMBER_LENGTH; i++) {
        if (mappingArr[PIN[i]] != userInput[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int pinEncodingArray[10];
    generateMapping(pinEncodingArray);
    displayMapping(pinEncodingArray);

    int userInput[5];

    cout << "Please enter PIN integers separated by a space:" << endl;
    for (int i = 0; i < PIN_NUMBER_LENGTH; i++) {
        cin >> userInput[i];
    }

    bool isAuthenticated = authenticate(pinEncodingArray, userInput);
    cout << isAuthenticated;
    if (isAuthenticated) {
        cout << "Your PIN is correct.";
    } else {
        cout << "Your PIN is not correct.";
    }
}