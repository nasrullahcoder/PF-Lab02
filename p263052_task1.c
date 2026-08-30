#include <stdio.h>

int main() {
    // Declare and initialize variables
    int batch = 2026;
    char section = 'A';
    float entryTestScore = 82.75f;
    double tuitionFee = 148500.50;

    // Print formatted Student ID Card
    printf("========================================\n");
    printf("\tSTUDENT ID CARD\n");
    printf("========================================\n");

    printf("Batch/Year\t: %d\n", batch);
    printf("Section\t\t: %c\n", section);
    printf("Entry Test Score\t: %.2f\n", entryTestScore);
    printf("Semester Fee\t: %.2lf\n", tuitionFee);
    printf("Motto\t\t: \"Knowledge is Power\"\n");

    printf("========================================\n");

    return 0;
}
