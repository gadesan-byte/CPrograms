#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive decimal integer: ");
    
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input! Please enter a valid positive integer.\n");
        return 1;
    }

    printf("\nDecimal Number: %d\n", number);
    printf("Hexadecimal Equivalent: %X\n", number);
    printf("Octal Equivalent: %o\n", number);

    return 0;
}
