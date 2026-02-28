#include <stdio.h>

int main() {
    int age;
    float tuitionFee, totalExpenses;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid age entered!\n");
        return 1;
    }

    if (age >= 18 && age <= 25) {
        printf("Enter annual tuition fee: ");
        if (scanf("%f", &tuitionFee) != 1 || tuitionFee < 0) {
            printf("Invalid tuition fee entered!\n");
            return 1;
        }

        printf("Enter total annual expenses: ");
        if (scanf("%f", &totalExpenses) != 1 || totalExpenses < 0) {
            printf("Invalid total expenses entered!\n");
            return 1;
        }

        if (tuitionFee > totalExpenses) {
            printf("Tuition fee is higher than total annual expenses.\n");
        } 
        else if (tuitionFee < totalExpenses) {
            printf("Total annual expenses are higher than tuition fee.\n");
        } 
        else {
            printf("Tuition fee and total annual expenses are equal.\n");
        }
    } 
    else {
        printf("Age is not within the range of 18 to 25.\n");
    }

    return 0;
}
