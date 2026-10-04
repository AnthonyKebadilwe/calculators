#include <iostream>
using namespace std; // so we don't have to write std:: everywhere

// Calculator - Basic Arithmetic

int main() {
    double num1, num2, result;
    char operatorChar;

    cout << "Enter first number: ";
    cin >> num1; // first operand

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operatorChar; // grab the operator as a single character

    cout << "Enter second number: ";
    cin >> num2; // second operand

    switch (operatorChar) { // decide which calculation to run based on the operator
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) { // guard against div by 0
                cout << "Error!!!! Cannot divide by zero" << endl;
                return 1; // exit early, nothing left to calculate
            }
            result = num1 / num2;
            break;
        default:
            cout << "Error!!!! Unknown operator: " << operatorChar << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
