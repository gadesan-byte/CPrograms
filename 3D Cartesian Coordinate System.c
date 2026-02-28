#include <stdio.h>

int main() {
    float x, y, z;

    printf("Enter the coordinates (x y z): ");
    if (scanf("%f %f %f", &x, &y, &z) != 3) {
        printf("Invalid input! Please enter numeric values.\n");
        return 1;
    }

    if (x == 0 && y == 0 && z == 0) {
        printf("Point is at the origin.\n");
    }
    else if (x == 0 && y == 0) {
        printf("Point lies on the z-axis.\n");
    }
    else if (x == 0 && z == 0) {
        printf("Point lies on the y-axis.\n");
    }
    else if (y == 0 && z == 0) {
        printf("Point lies on the x-axis.\n");
    }
    else if (x == 0) {
        printf("Point lies on the yz-plane.\n");
    }
    else {
        printf("Point is in the 3D space at (%.2f, %.2f, %.2f).\n", x, y, z);
    }

    return 0;
}
