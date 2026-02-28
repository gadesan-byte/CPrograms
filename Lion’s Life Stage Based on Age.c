#include <stdio.h>

int main() {
    float age;

    printf("Enter the lion's age (in years): ");
    if (scanf("%f", &age) != 1 || age < 0 || age > 26) {
        printf("Invalid age! Age must be between 0 and 26 years.\n");
        return 1;
    }

    printf("\nLion's Age: %.2f years\n", age);

    if (age <= 2) {
        printf("Life Stage: Cub\n");
    } 
    else if (age <= 4) {
        printf("Life Stage: Juvenile\n");
    } 
    else if (age <= 6) {
        printf("Life Stage: Subadult\n");
    } 
    else if (age <= 12) {
        printf("Life Stage: Young Adult\n");
    } 
    else {
        printf("Life Stage: Old Adult\n");
    }

    return 0;
}
