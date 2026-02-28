#include <stdio.h>
int main() {
    int charge;
    printf("Enter battery charge level (0-100): ");
    scanf("%d", &charge);

    if(charge < 0 || charge > 100) {
        printf("Invalid input!\n");
    } else if(charge < 25) {
        printf("Battery Status: Low\n");
    } else if(charge < 50) {
        printf("Battery Status: Medium\n");
    } else if(charge < 75) {
        printf("Battery Status: Almost Full\n");
    } else {
        printf("Battery Status: Full\n");
    }
    return 0;
}
