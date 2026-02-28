#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature in Centigrade: ");
    
    if (scanf("%f", &temp) != 1) {
        printf("Invalid input! Please enter a valid temperature.\n");
        return 1;
    }

    if (temp <= 0) {
        printf("Weather Condition: Freezing weather\n");
    }
    else if (temp > 0 && temp <= 10) {
        printf("Weather Condition: Very Cold weather\n");
    }
    else if (temp > 10 && temp <= 20) {
        printf("Weather Condition: Cold weather\n");
    }
    else if (temp > 20 && temp <= 30) {
        printf("Weather Condition: Normal temperature\n");
    }
    else if (temp > 30 && temp <= 40) {
        printf("Weather Condition: Hot\n");
    }
    else {
        printf("Weather Condition: Very Hot\n");
    }

    return 0;
}
