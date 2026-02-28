#include <stdio.h>

int main() {
    int day, month, year, daysPassed = 0;

    printf("Enter date (DD MM YYYY): ");
    if (scanf("%d %d %d", &day, &month, &year) != 3) {
        printf("Invalid input! Please enter integers for day, month, and year.\n");
        return 1;
    }

    // Validate month
    if (month < 1 || month > 12) {
        printf("Invalid month! Must be between 1 and 12.\n");
        return 1;
    }

    // Determine if leap year
    int leapYear = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        leapYear = 1;
    }

    // Days in each month
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leapYear) monthDays[1] = 29;

    // Validate day
    if (day < 1 || day > monthDays[month - 1]) {
        printf("Invalid day for the given month!\n");
        return 1;
    }

    // Calculate days passed in the current quarter
    int quarterStartMonth;
    if (month >= 1 && month <= 3) quarterStartMonth = 1;      // Q1
    else if (month >= 4 && month <= 6) quarterStartMonth = 4; // Q2
    else if (month >= 7 && month <= 9) quarterStartMonth = 7; // Q3
    else quarterStartMonth = 10;                              // Q4

    for (int m = quarterStartMonth - 1; m < month - 1; m++) {
        daysPassed += monthDays[m];
    }
    daysPassed += day;

    // Determine season
    if ((month == 3 && day >= 1) || (month >= 3 && month <= 5)) {
        printf("Season: Spring\n");
    } 
    else if ((month == 6 && day >= 1) || (month >= 6 && month <= 8)) {
        printf("Season: Summer\n");
    } 
    else if ((month == 9 && day >= 1) || (month >= 9 && month <= 11)) {
        printf("Season: Autumn\n");
    } 
    else {
        printf("Season: Winter\n");
    }

    printf("Days passed in the current quarter: %d\n", daysPassed);

    return 0;
}
