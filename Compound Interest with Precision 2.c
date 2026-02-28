#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;

    printf("Enter Principal Amount: ");
    if (scanf("%lf", &principal) != 1 || principal < 0) {
        printf("Invalid principal amount!\n");
        return 1;
    }

    printf("Enter Annual Interest Rate (in %%): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        printf("Invalid interest rate!\n");
        return 1;
    }

    printf("Enter Time (in years): ");
    if (scanf("%lf", &time) != 1 || time < 0) {
        printf("Invalid time value!\n");
        return 1;
    }

    rate = rate / 100;   // Convert percentage to decimal

    amount = principal * pow((1 + rate), time);
    compoundInterest = amount - principal;

    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
