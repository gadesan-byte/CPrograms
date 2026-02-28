#include <stdio.h>

int main() {
    float rate;

    printf("Enter agent success rate (0 to 100): ");
    scanf("%f", &rate);

    if (rate >= 80)
        printf("Highest Priority Agent");
    else
        printf("Normal Priority Agent");

    return 0;
}
