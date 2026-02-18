#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number");
        return 0;
    }

    if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days: 31\n");
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11)
        printf("Number of days: 30\n");
    else
        printf("Number of days: 28\n");

    if (month >= 1 && month <= 3)
        printf("Quadrant: 1st Quarter");
    else if (month >= 4 && month <= 6)
        printf("Quadrant: 2nd Quarter");
    else if (month >= 7 && month <= 9)
        printf("Quadrant: 3rd Quarter");
    else
        printf("Quadrant: 4th Quarter");

    return 0;
}
