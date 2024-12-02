#include <stdio.h>
#include <string.h>

// Function prototypes
void currencyCalculator();
void temperatureConverter();
void bmiCalculator();
void interestCalculator();
void unitConverter();
void arithmeticCalculator();

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
        
        // Validate user input
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            while (getchar() != '\n'); // Clear input buffer
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

// Function to convert currency
void currencyCalculator() {
    float amount, converted, rate;
    int option;

    printf("\nCurrency Calculator:\n");
    printf("1. USD to PKR\n");
    printf("2. PKR to USD\n");
    printf("Enter your option: ");
    if (scanf("%d", &option) != 1 || (option != 1 && option != 2)) {
        printf("Invalid option. Please try again.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter the conversion rate: ");
    if (scanf("%f", &rate) != 1 || rate <= 0) {
        printf("Invalid conversion rate.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter the amount: ");
    if (scanf("%f", &amount) != 1 || amount < 0) {
        printf("Invalid amount. Please enter a positive value.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    if (option == 1)
        converted = amount * rate;
    else
        converted = amount / rate;

    printf("Converted Amount: %.2f\n", converted);
}

// Function to convert temperature
void temperatureConverter() {
    float temp, converted;
    int option;

    printf("\nTemperature Converter:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your option: ");
    if (scanf("%d", &option) != 1 || (option != 1 && option != 2)) {
        printf("Invalid option. Please try again.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter the temperature: ");
    if (scanf("%f", &temp) != 1) {
        printf("Invalid temperature.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    if (option == 1)
        converted = (temp * 9 / 5) + 32;
    else
        converted = (temp - 32) * 5 / 9;

    printf("Converted Temperature: %.2f\n", converted);
}

// Function to calculate BMI
void bmiCalculator() {
    float weight, height, bmi;

    printf("\nBMI Calculator:\n");
    printf("Enter your weight in kg: ");
    if (scanf("%f", &weight) != 1 || weight <= 0) {
        printf("Invalid weight.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter your height in meters: ");
    if (scanf("%f", &height) != 1 || height <= 0) {
        printf("Invalid height.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5)
        printf("You are underweight.\n");
    else if (bmi < 24.9)
        printf("You have a normal weight.\n");
    else if (bmi < 29.9)
        printf("You are overweight.\n");
    else
        printf("You are obese.\n");
}

// Function to calculate simple interest
void interestCalculator() {
    float principal, rate, time, interest;

    printf("\nSimple Interest Calculator:\n");
    printf("Enter principal amount: ");
    if (scanf("%f", &principal) != 1 || principal < 0) {
        printf("Invalid principal amount.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter annual interest rate (in %%): ");
    if (scanf("%f", &rate) != 1 || rate < 0) {
        printf("Invalid interest rate.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter time in years: ");
    if (scanf("%f", &time) != 1 || time < 0) {
        printf("Invalid time.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", interest);
}

// Function to convert length units
void unitConverter() {
    float value, converted;
    int option;

    printf("\nUnit Converter (Length):\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("Enter your option: ");
    if (scanf("%d", &option) != 1 || (option != 1 && option != 2)) {
        printf("Invalid option. Please try again.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter the value: ");
    if (scanf("%f", &value) != 1 || value < 0) {
        printf("Invalid value.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    if (option == 1)
        converted = value / 1000;
    else
        converted = value * 1000;

    printf("Converted Value: %.2f\n", converted);
}

// Function to perform basic arithmetic
void arithmeticCalculator() {
    float num1, num2, result;
    char operators;

    printf("\nBasic Arithmetic Operations Calculator:\n");
    printf("Enter first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operators);  // Ensure space before %c to consume newline

    printf("Enter second number: ");
    if (scanf("%f", &num2) != 1 || (operators == '/' && num2 == 0)) {
        printf("Invalid input or division by zero.\n");
        while (getchar() != '\n'); // Clear input buffer
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

