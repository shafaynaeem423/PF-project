#include <stdio.h>

void bmiCalculator() {
    float weight, height, bmi;

    printf("\nBMI Calculator:\n");
    printf("Enter your weight in kg: ");
    if (scanf("%f", &weight) != 1 || weight <= 0) {
        printf("Invalid weight.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter your height in meters: ");
    if (scanf("%f", &height) != 1 || height <= 0) {
        printf("Invalid height.\n");
        while (getchar() != '\n');
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

