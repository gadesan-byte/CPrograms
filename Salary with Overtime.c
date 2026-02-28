#include <stdio.h>
int main() {
    int hours;
    float rate, salary;

    printf("Enter hours worked: ");
    scanf("%d", &hours);
    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    if(hours <= 40) {
        salary = hours * rate;
    } else {
        salary = (40 * rate) + (hours - 40) * (1.5 * rate);
    }

    printf("Total Salary = %.2f\n", salary);
    return 0;
}
