#include <stdio.h>
int main() {
    float salary, bonus;
    char gender;

    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    if(gender == 'M' || gender == 'm')
        bonus = 0.05 * salary;   // 5% bonus
    else
        bonus = 0.10 * salary;   // 10% bonus

    salary += bonus;
    printf("Final Salary = %.2f\n", salary);
    return 0;
}
