#include <stdio.h>
int main() {
    int pens, notebooks, pencils;
    float total;

    printf("Enter quantity of pens: ");
    scanf("%d", &pens);
    printf("Enter quantity of notebooks: ");
    scanf("%d", &notebooks);
    printf("Enter quantity of pencils: ");
    scanf("%d", &pencils);

    total = pens * 20 + notebooks * 70 + pencils * 9;
    printf("Total Amount = %.2f units\n", total);

    return 0;
}
