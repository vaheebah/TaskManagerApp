#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Ask user to enter operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Ask user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on operator
    switch (operator) {
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
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.");
                return 1;
            }
            break;
        default:
            printf("Error! Invalid operator.");
            return 1;
    }

    // Print the result
    printf("Result: %.2f", result);

    return 0;
}
