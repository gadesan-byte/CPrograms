#include <stdio.h>

int main() {
    float purchaseAmount, discount = 0;

    printf("Enter the purchase amount: ");
    if (scanf("%f", &purchaseAmount) != 1 || purchaseAmount <= 0) {
        printf("Invalid purchase amount!\n");
        return 1;
    }

    /* Discount criteria */
    if (purchaseAmount >= 5000) {
        discount = 0.25 * purchaseAmount;   // 25% discount
    }
    else if (purchaseAmount >= 3000) {
        discount = 0.15 * purchaseAmount;   // 15% discount
    }
    else if (purchaseAmount >= 1000) {
        discount = 0.10 * purchaseAmount;   // 10% discount
    }
    else {
        discount = 0.05 * purchaseAmount;   // 5% discount
    }

    printf("\nPurchase Amount: %.2f\n", purchaseAmount);
    printf("Discount Amount: %.2f\n", discount);

    return 0;
}
