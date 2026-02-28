#include <stdio.h>

int main() {
    int num1, num2, product, result;

    printf("Enter first integer: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter second integer: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    product = num1 * num2;

    printf("\nProduct = %d\n", product);

    if (product % 2 == 0) {
        result = product / 2;
        printf("Product is even. After dividing by 2: %d\n", result);
    } else {
        result = product / 3;
        printf("Product is odd. After dividing by 3: %d\n", result);
    }

    return 0;
}
