#include <stdio.h>

// Calculator - Basic Arithmetic

int main() {
    double num1, num2, result;
    char operatorChar;

    printf("Enter first number: ");
    scanf("%lf", &num1); // first operand

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operatorChar); // the space before %c skips the leftover newline

    printf("Enter second number: ");
    scanf("%lf", &num2); // second operand

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
                printf("Error!!!! Cannot divide by zero\n");
                return 1; // exit early, nothing left to calculate
            }
            result = num1 / num2;
            break;
        default:
            printf("Error!!!! Unknown operator: %c\n", operatorChar);
            return 1;
    }

    printf("Result: %.2f\n", result); // print with 2 decimal places
    return 0;
}
