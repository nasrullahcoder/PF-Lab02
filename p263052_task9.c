#include <stdio.h>

int main() {
    // Declare and initialize marks and credit hours
    double pfMarks = 88.0;
    int pfCreditHours = 3;

    double calculusMarks = 76.5;
    int calculusCreditHours = 3;

    double physicsMarks = 82.0;
    int physicsCreditHours = 2;

    // Calculate weighted scores
    double pfWeighted = pfMarks * pfCreditHours;
    double calculusWeighted = calculusMarks * calculusCreditHours;
    double physicsWeighted = physicsMarks * physicsCreditHours;

    // Calculate total weighted score
    double totalWeightedScore = pfWeighted + calculusWeighted + physicsWeighted;

    // Calculate total credit hours
    int totalCreditHours = pfCreditHours + calculusCreditHours + physicsCreditHours;

    // Calculate weighted average percentage
    double weightedAverage = totalWeightedScore / totalCreditHours;

    // Display academic progress report
    printf("============================================================\n");
    printf("\t\tSEMESTER ACADEMIC PROGRESS REPORT\n");
    printf("============================================================\n");

    printf("Course\t\t\tMarks\tCredit Hours\tWeighted Score\n");
    printf("------------------------------------------------------------\n");

    printf("Programming Fundamentals\t%.1f\t%d\t\t%.1f\n",
           pfMarks, pfCreditHours, pfWeighted);

    printf("Calculus & Analytical Geometry\t%.1f\t%d\t\t%.1f\n",
           calculusMarks, calculusCreditHours, calculusWeighted);

    printf("Applied Physics\t\t%.1f\t%d\t\t%.1f\n",
           physicsMarks, physicsCreditHours, physicsWeighted);

    printf("------------------------------------------------------------\n");
    printf("Total Weighted Score\t\t\t\t%.1f\n", totalWeightedScore);
    printf("Total Credit Hours\t\t\t\t%d\n", totalCreditHours);
    printf("Weighted Average Percentage\t\t\t%.2f%%\n", weightedAverage);

    printf("============================================================\n");

    return 0;
}
