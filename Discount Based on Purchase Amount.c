#include <stdio.h>

int main() {
    int quantity;
    float pricePerItem, totalCost, discount = 0, finalAmount;

    printf("Enter quantity of items purchased: ");
    if (scanf("%d", &quantity) != 1 || quantity <= 0) {
        printf("Invalid quantity!\n");
        return 1;
    }

    printf("Enter price per item: ");
    if (scanf("%f", &pricePerItem) != 1 || pricePerItem <= 0) {
        printf("Invalid price!\n");
        return 1;
    }

    totalCost = quantity * pricePerItem;

    /* Discount criteria */
    if (totalCost >= 5000) {
        discount = 0.20 * totalCost;   // 20% discount
    }
    else if (totalCost >= 2000) {
        discount = 0.10 * totalCost;   // 10% discount
    }
    else if (totalCost >= 1000) {
        discount = 0.05 * totalCost;   // 5% discount
    }
    else {
        discount = 0;                  // No discount
    }

    finalAmount = totalCost - discount;

    printf("\nTotal Cost: %.2f\n", totalCost);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}
