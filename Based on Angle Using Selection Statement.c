#include <stdio.h>

int main() {
    int angle;

    printf("Enter an angle (0, 90, 180, 270): ");
    
    if (scanf("%d", &angle) != 1) {
        printf("Invalid input! Please enter a valid angle.\n");
        return 1;
    }

    switch(angle) {
        case 0:
            printf("Direction: East\n");
            break;
        case 90:
            printf("Direction: North\n");
            break;
        case 180:
            printf("Direction: West\n");
            break;
        case 270:
            printf("Direction: South\n");
            break;
        default:
            printf("Invalid angle! Please enter 0, 90, 180, or 270.\n");
    }

    return 0;
}
