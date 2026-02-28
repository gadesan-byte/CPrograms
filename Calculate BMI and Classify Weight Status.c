#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    if (scanf("%f", &weight) != 1 || weight <= 0) {
        printf("Invalid weight input!\n");
        return 1;
    }

    printf("Enter height in meters: ");
    if (scanf("%f", &height) != 1 || height <= 0) {
        printf("Invalid height input!\n");
        return 1;
    }

    bmi = weight / (height * height);

    // Restrict BMI to range 0-100
    if (bmi < 0) bmi = 0;
    if (bmi > 100) bmi = 100;

    printf("\nBMI: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Classification: Underweight\n");
    } else if (bmi < 25) {
        printf("Classification: Normal weight\n");
    } else if (bmi < 30) {
        printf("Classification: Overweight\n");
    } else {
        printf("Classification: Obese\n");
    }

    return 0;
}
