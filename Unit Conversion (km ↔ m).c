#include <stdio.h>
int main() {
    float value;
    char unit;

    printf("Enter value and unit (k for km, m for metre): ");
    scanf("%f %c", &value, &unit);

    if(unit == 'k') {
        printf("%.2f km = %.2f m\n", value, value * 1000);
    } else if(unit == 'm') {
        printf("%.2f m = %.2f km\n", value, value / 1000);
    } else {
        printf("Invalid unit!\n");
    }
    return 0;
}
