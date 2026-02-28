#include <stdio.h>
#include <math.h>

int main() {
    int hour, minute;
    double hourAngle, minuteAngle, angle;

    printf("Enter hour (0-23): ");
    if (scanf("%d", &hour) != 1 || hour < 0 || hour > 23) {
        printf("Invalid hour input!\n");
        return 1;
    }

    printf("Enter minute (0-59): ");
    if (scanf("%d", &minute) != 1 || minute < 0 || minute > 59) {
        printf("Invalid minute input!\n");
        return 1;
    }

    // Convert hour to 12-hour format for angle calculation
    hour = hour % 12;

    // Calculate angles
    hourAngle = (hour * 30) + (minute * 0.5); // 30 degrees per hour + 0.5 per minute
    minuteAngle = minute *
