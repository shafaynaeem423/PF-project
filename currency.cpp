#include <stdio.h>

void currencyCalculator() {
    float amount, converted, rate;
    int option;

    printf("\nCurrency Calculator:\n");
    printf("1. USD to PKR\n");
    printf("2. PKR to USD\n");
    printf("Enter your option: ");
    if (scanf("%d", &option) != 1 || (option != 1 && option != 2)) {
        printf("Invalid option. Please try again.\n");
        while (getchar() != '\n'); 
        return;
    }

    printf("Enter the conversion rate: ");
    if (scanf("%f", &rate) != 1 || rate <= 0) {
        printf("Invalid conversion rate.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter the amount: ");
    if (scanf("%f", &amount) != 1 || amount < 0) {
        printf("Invalid amount. Please enter a positive value.\n");
        while (getchar() != '\n');
        return;
    }

    if (option == 1)
        converted = amount * rate;
    else
        converted = amount / rate;

    printf("Converted Amount: %.2f\n", converted);
}

