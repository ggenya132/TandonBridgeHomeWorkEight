#include <iostream>
#include <string>
using namespace std;
const char SPACE = ' ';
int main() {
    cout << "Please enter a line of text:" << endl;
    string userInput;
    getline(cin, userInput);
    string result = "";
    string currentWordInSentence = "";
    bool currentWordContainsNonNumbers = false;
    int iterator = 0;

    while (iterator < userInput.length()) {
        while (userInput[iterator] != SPACE && iterator < userInput.length()) {
            if (!isdigit(userInput[iterator])) {
                currentWordContainsNonNumbers = true;
            }
            currentWordInSentence = currentWordInSentence + userInput[iterator];
            iterator++;
        }
        if (!currentWordContainsNonNumbers) {
            string replacementWord = "";
            for (int i = 0; i < currentWordInSentence.length(); i++) {
                replacementWord = replacementWord + "x";
            }
            currentWordInSentence = replacementWord;
        }
        result = result + currentWordInSentence;
        if (iterator < userInput.length() - 1) {
            result = result + SPACE;
        }
        currentWordInSentence = "";
        iterator++;
        currentWordContainsNonNumbers = false;
    }

    cout << result;
    return 1;
}