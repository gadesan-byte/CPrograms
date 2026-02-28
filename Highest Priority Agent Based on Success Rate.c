#include <stdio.h>

int main() {
    float rate1, rate2, rate3;

    printf("Enter success rate of Agent 1 (in %%): ");
    if (scanf("%f", &rate1) != 1 || rate1 < 0) {
        printf("Invalid input for Agent 1!\n");
        return 1;
    }

    printf("Enter success rate of Agent 2 (in %%): ");
    if (scanf("%f", &rate2) != 1 || rate2 < 0) {
        printf("Invalid input for Agent 2!\n");
        return 1;
    }

    printf("Enter success rate of Agent 3 (in %%): ");
    if (scanf("%f", &rate3) != 1 || rate3 < 0) {
        printf("Invalid input for Agent 3!\n");
        return 1;
    }

    if (rate1 >= rate2 && rate1 >= rate3) {
        printf("\nAgent 1 has the highest priority with a success rate of %.2f%%\n", rate1);
    }
    else if (rate2 >= rate1 && rate2 >= rate3) {
        printf("\nAgent 2 has the highest priority with a success rate of %.2f%%\n", rate2);
    }
    else {
        printf("\nAgent 3 has the highest priority with a success rate of %.2f%%\n", rate3);
    }

    return 0;
}
