#include <stdio.h>
int main() {
    int height;
    printf("Enter height in cm: ");
    scanf("%d", &height);

    if(height < 150) printf("Short\n");
    else if(height < 165) printf("Average height\n");
    else if(height < 190) printf("Tall\n");
    else printf("Very tall\n");

    return 0;
}
