#include <stdio.h>

int main() {
    float miles, gallons, mpg;

    printf("Enter miles driven: ");
    if (scanf("%f", &miles) != 1 || miles <= 0) {
        printf("Invalid miles value!\n");
        return 1;
    }

    printf("Enter gallons used: ");
    if (scanf("%f", &gallons) != 1 || gallons <= 0) {
        printf("Invalid gallons value!\n");
        return 1;
    }

    mpg = miles / gallons;

    printf("\nMiles Per Gallon (MPG): %.2f\n", mpg);

    if (mpg < 15) {
        printf("Classification: Poor\n");
    }
    else if (mpg < 25) {
        printf("Classification: Average\n");
    }
    else if (mpg < 35) {
        printf("Classification: Good\n");
    }
    else {
        printf("Classification: Excellent\n");
    }

    return 0;
}
