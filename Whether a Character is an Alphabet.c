#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an alphabet character.\n", ch);
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}
