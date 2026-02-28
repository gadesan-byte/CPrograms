#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int root = sqrt(num);
    if(root * root == num)
        printf("%d is a perfect square\n", num);
    else
        printf("%d is not a perfect square\n", num);

    return 0;
}
