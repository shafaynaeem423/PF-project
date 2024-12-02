#include <stdio.h>

void arithmeticCalculator() {
    float num1, num2, result;
    char operators;

    printf("\nBasic Arithmetic Operations Calculator:\n");
    printf("Enter first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operators);

    printf("Enter second number: ");
    if (scanf("%f", &num2) != 1 || (operators == '/' && num2 == 0)) {
        printf("Invalid input or division by zero.\n");
        while (getchar() != '\n');
        return;
    }

    switch (operators) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        default:
            printf("Invalid operator.\n");
            return;
    }
    printf("Result: %.2f\n", result);
}

