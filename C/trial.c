#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero\n");
            } else {
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            }
            break;

        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
