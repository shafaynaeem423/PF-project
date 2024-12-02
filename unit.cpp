#include <stdio.h>

void unitConverter() {
    float value, converted;
    int option;

    printf("\nUnit Converter (Length):\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("Enter your option: ");
    if (scanf("%d", &option) != 1 || (option != 1 && option != 2)) {
        printf("Invalid option. Please try again.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter the value: ");
    if (scanf("%f", &value) != 1 || value < 0) {
        printf("Invalid value.\n");
        while (getchar() != '\n');
        return;
    }

    if (option == 1)
        converted = value / 1000;
    else
        converted = value * 1000;

    printf("Converted Value: %.2f\n", converted);
}

