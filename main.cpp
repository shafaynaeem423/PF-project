#include <stdio.h>
#include "calculator.h"  // Include the header file to access function prototypes

int main() {
    int choice;
    do {
        printf("\n*** MULTI-CALCULATOR PROGRAM ***\n");
        printf("1. Currency Calculator\n");
        printf("2. Temperature Converter\n");
        printf("3. BMI Calculator\n");
        printf("4. Simple Interest Calculator\n");
        printf("5. Unit Converter (Length)\n");
        printf("6. Basic Arithmetic Operations Calculator\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                currencyCalculator();
                break;
            case 2:
                temperatureConverter();
                break;
            case 3:
                bmiCalculator();
                break;
            case 4:
                interestCalculator();
                break;
            case 5:
                unitConverter();
                break;
            case 6:
                arithmeticCalculator();
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}

