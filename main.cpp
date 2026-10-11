#include <iostream>
using namespace std;

int main() {
    double first, second;
    char operation;

    cout << "BRISC Mini Calculator" << endl;
    cout << "Enter first number: ";
    cin >> first;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> second;

    if (operation == '+') {
        cout << "Result: " << first + second << endl;
    } else if (operation == '-') {
        cout << "Result: " << first - second << endl;
    } else if (operation == '*') {
        cout << "Result: " << first * second << endl;
    } else if (operation == '/') {
        if (second == 0) {
            cout << "Cannot divide by zero." << endl;
        } else {
            cout << "Result: " << first / second << endl;
        }
    } else {
        cout << "Unknown operation." << endl;
    }

    return 0;
}
