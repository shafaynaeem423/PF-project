#include <stdio.h>

void interestCalculator() {
    float principal, rate, time, interest;

    printf("\nSimple Interest Calculator:\n");
    printf("Enter principal amount: ");
    if (scanf("%f", &principal) != 1 || principal < 0) {
        printf("Invalid principal amount.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter annual interest rate (in %%): ");
    if (scanf("%f", &rate) != 1 || rate < 0) {
        printf("Invalid interest rate.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter time in years: ");
    if (scanf("%f", &time) != 1 || time < 0) {
        printf("Invalid time.\n");
        while (getchar() != '\n');
        return;
    }

    interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", interest);
}

