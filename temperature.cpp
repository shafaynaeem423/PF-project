#include <stdio.h>

void temperatureConverter() {
    float temp, converted;
    int option;

    printf("\nTemperature Converter:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your option: ");
    if (scanf("%d", &option) != 1 || (option != 1 && option != 2)) {
        printf("Invalid option. Please try again.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter the temperature: ");
    if (scanf("%f", &temp) != 1) {
        printf("Invalid temperature.\n");
        while (getchar() != '\n');
        return;
    }

    if (option == 1)
        converted = (temp * 9 / 5) + 32;
    else
        converted = (temp - 32) * 5 / 9;

    printf("Converted Temperature: %.2f\n", converted);
}

