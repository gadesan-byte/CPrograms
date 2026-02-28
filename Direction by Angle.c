#include <stdio.h>
int main() {
    int angle;
    printf("Enter angle (0, 90, 180, 270): ");
    scanf("%d", &angle);

    switch(angle) {
        case 0: printf("East\n"); break;
        case 90: printf("North\n"); break;
        case 180: printf("West\n"); break;
        case 270: printf("South\n"); break;
        default: printf("Invalid angle!\n");
    }
    return 0;
}
