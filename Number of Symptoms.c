#include <stdio.h>

int main() {
    int symptoms;

    printf("Enter the number of symptoms experienced by the patient: ");
    
    if (scanf("%d", &symptoms) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }

    if (symptoms < 0) {
        printf("Number of symptoms cannot be negative.\n");
    }
    else if (symptoms >= 5) {
        printf("Condition: Critical\n");
        printf("Priority Level: High\n");
        printf("Immediate medical attention required.\n");
    }
    else if (symptoms >= 3) {
        printf("Condition: Moderate\n");
        printf("Priority Level: Medium\n");
        printf("Medical attention required soon.\n");
    }
    else {
        printf("Condition: Stable\n");
        printf("Priority Level: Low\n");
        printf("Patient can wait for a while.\n");
    }

    return 0;
}
