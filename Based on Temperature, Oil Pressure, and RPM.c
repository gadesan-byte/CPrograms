#include <stdio.h>

int main() {
    float temperature, oilPressure, rpm;

    printf("Enter engine temperature (°C): ");
    if (scanf("%f", &temperature) != 1) {
        printf("Invalid temperature input!\n");
        return 1;
    }

    printf("Enter oil pressure (PSI): ");
    if (scanf("%f", &oilPressure) != 1) {
        printf("Invalid oil pressure input!\n");
        return 1;
    }

    printf("Enter engine RPM: ");
    if (scanf("%f", &rpm) != 1) {
        printf("Invalid RPM input!\n");
        return 1;
    }

    if (temperature > 75 || oilPressure < 12 || rpm > 7000) {
        printf("\nEngine Health: Poor\n");
    }
    else if (temperature > 50 || oilPressure < 12 || rpm > 4000) {
        printf("\nEngine Health: Fair\n");
    }
    else {
        printf("\nEngine Health: Good\n");
    }

    return 0;
}
