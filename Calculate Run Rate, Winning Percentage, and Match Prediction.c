#include <stdio.h>

int main() {
    float totalScore, totalOvers, runRate, percentage;

    printf("Enter total score of the batting team: ");
    if (scanf("%f", &totalScore) != 1 || totalScore < 0) {
        printf("Invalid total score!\n");
        return 1;
    }

    printf("Enter total overs played: ");
    if (scanf("%f", &totalOvers) != 1 || totalOvers <= 0) {
        printf("Invalid overs value!\n");
        return 1;
    }

    runRate = totalScore / totalOvers;

    /* 
       Assuming 6 runs per over as a standard benchmark.
       Percentage = (Run Rate / 6) * 100
    */
    percentage = (runRate / 6.0) * 100;

    printf("\nRun Rate: %.2f\n", runRate);
    printf("Winning Percentage: %.2f%%\n", percentage);

    if (percentage < 50) {
        printf("Prediction: Opponent team can win.\n");
    }
    else if (percentage == 50) {
        printf("Prediction: Both teams have an equal chance of winning.\n");
    }
    else {
        printf("Prediction: Batting team can win.\n");
    }

    return 0;
}
