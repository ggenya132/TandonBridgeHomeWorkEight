#include <iostream>
#include <string>
using namespace std;

string formatMiddleName(string middleName) {
    string formattedMiddleName = middleName.substr(0, 1) + ".";
    return formattedMiddleName;
}
int main() {
    string firstName;
    string middleName;
    string lastName;
    cout << "Please enter first name: " << endl;
    cin >> firstName;
    cout << "Please enter middle name: " << endl;
    cin >> middleName;
    cout << "Please enter last name: " << endl;
    cin >> lastName;

    middleName = formatMiddleName(middleName);
    cout << lastName << ", " << firstName << ", " << middleName;
}