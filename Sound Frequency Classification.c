#include <stdio.h>
int main() {
    int freq;
    printf("Enter frequency in Hertz: ");
    scanf("%d", &freq);

    if(freq < 20)
        printf("Infrasound\n");
    else if(freq <= 20000)
        printf("Audible sound\n");
    else
        printf("Ultrasound\n");

    return 0;
}
