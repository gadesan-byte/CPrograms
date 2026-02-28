#include <stdio.h>

int main() {
    float temperature;

    printf("Enter body temperature in Celsius: ");
    
    if (scanf("%f", &temperature) != 1) {
        printf("Invalid input! Please enter a valid temperature value.\n");
        return 1;
    }

    printf("\nBody Temperature: %.2f°C\n", temperature);

    if (temperature >= 37.0) {
        printf("Assessment: The individual has a fever.\n");
    } else {
        printf("Assessment: The individual does not have a fever.\n");
    }

    return 0;
}
