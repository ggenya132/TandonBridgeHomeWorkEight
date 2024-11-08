// amc10453_hw8_q2.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])  // check whether each char on left
                                         // matches character on right
        {
            return false;
        }
    }

    return true;
}

int main() {
    string word;

    cout << "Please enter a word: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << word << " is a palindrome" << endl;
    } else {
        cout << word << " is not a palindrom" << endl;
    }

    return 0;
}
