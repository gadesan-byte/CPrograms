#include <stdio.h>
int main() {
    int d, m, y;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);

    if(m < 1 || m > 12 || d < 1 || d > 31) {
        printf("Invalid date!\n");
        return 0;
    }

    if((m == 3 && d >= 1) || (m > 3 && m < 6) || (m == 5 && d <= 31))
        printf("Season: Spring\n");
    else if((m == 6 && d >= 1) || (m > 6 && m < 9) || (m == 8 && d <= 31))
        printf("Season: Summer\n");
    else if((m == 9 && d >= 1) || (m > 9 && m < 12) || (m == 11 && d <= 30))
        printf("Season: Autumn\n");
    else
        printf("Season: Winter\n");

    return 0;
}
