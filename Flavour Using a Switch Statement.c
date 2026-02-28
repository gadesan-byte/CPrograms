#include <stdio.h>

int main() {
    int choice;

    printf("=== Chocolate Flavour Menu ===\n");
    printf("1. Milk Chocolate\n");
    printf("2. Dark Chocolate\n");
    printf("3. White Chocolate\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nYou selected Milk Chocolate.\n");
            printf("Milk Chocolate is known for its creamy and delightful taste.\n");
            printf("Enjoy your delicious Milk Chocolate!\n");
            break;

        case 2:
            printf("\nYou selected Dark Chocolate.\n");
            printf("Dark Chocolate is loved for its rich and intense flavour.\n");
            printf("Enjoy your delicious Dark Chocolate!\n");
            break;

        case 3:
            printf("\nYou selected White Chocolate.\n");
            printf("White Chocolate is famous for its sweet and smooth texture.\n");
            printf("Enjoy your delicious White Chocolate!\n");
            break;

        default:
            printf("\nInvalid choice! Please select a number between 1 and 3.\n");
    }

    return 0;
}
