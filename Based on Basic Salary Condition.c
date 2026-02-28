#include <stdio.h>

int main() {
    float basicSalary, hra, da, grossSalary;

    printf("Enter the Basic Salary: ");
    
    if (scanf("%f", &basicSalary) != 1 || basicSalary < 0) {
        printf("Invalid input! Please enter a valid positive salary amount.\n");
        return 1;
    }

    if (basicSalary <= 70000) {
        hra = 0.30 * basicSalary;   // 30% HRA
        da  = 0.80 * basicSalary;   // 80% DA
    } else {
        hra = 0;
        da  = 0;
    }

    grossSalary = basicSalary + hra + da;

    printf("\nBasic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
