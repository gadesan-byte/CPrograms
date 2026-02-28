#include <stdio.h>

int main() {
    float speedLimit, vehicleSpeed;

    printf("Enter the speed limit: ");
    if (scanf("%f", &speedLimit) != 1 || speedLimit < 0) {
        printf("Invalid speed limit!\n");
        return 1;
    }

    printf("Enter the vehicle speed: ");
    if (scanf("%f", &vehicleSpeed) != 1 || vehicleSpeed < 0) {
        printf("Invalid vehicle speed!\n");
        return 1;
    }

    if (vehicleSpeed > speedLimit) {
        printf("Warning: The vehicle is exceeding the speed limit!\n");
    } else {
        printf("The vehicle is within the speed limit.\n");
    }

    return 0;
}
