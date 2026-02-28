#include <stdio.h>
int main() {
    int size;
    printf("Enter dress size: ");
    scanf("%d", &size);

    if(size <= 30) printf("Small\n");
    else if(size <= 40) printf("Medium\n");
    else if(size <= 50) printf("Large\n");
    else printf("Extra Large\n");

    return 0;
}
