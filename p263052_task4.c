#include <stdio.h>

int main() {
    // Declare and initialize variables
    char myChar = 'A';
    int myInt = 2026;
    float myFloat = 82.75f;
    double myDouble = 148500.50;

    // Display tabular report
    printf("TYPE\t\tVALUE\t\tSIZE (bytes)\n");
    printf("---------------------------------------------\n");

    printf("char\t\t%c\t\t%zu\n", myChar, sizeof(myChar));
    printf("int\t\t%d\t\t%zu\n", myInt, sizeof(myInt));
    printf("float\t\t%.2f\t\t%zu\n", myFloat, sizeof(myFloat));
    printf("double\t\t%.2lf\t\t%zu\n", myDouble, sizeof(myDouble));

    return 0;
}
