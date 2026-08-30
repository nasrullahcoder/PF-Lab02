#include <stdio.h>

int main() {
    // Declare and initialize variables
    float radius = 7.5;
    float pi = 3.14159;

    // Calculate geometric properties
    float diameter = 2 * radius;
    float circumference = 2 * pi * radius;
    float area = pi * radius * radius;

    // Display geometric properties report
    printf("========================================\n");
    printf("\tCIRCLE GEOMETRIC PROPERTIES\n");
    printf("========================================\n");

    printf("Radius\t\t: %.3f\n", radius);
    printf("Pi\t\t: %.3f\n", pi);
    printf("Diameter\t: %.3f\n", diameter);
    printf("Circumference\t: %.3f\n", circumference);
    printf("Area\t\t: %.3f\n", area);

    printf("========================================\n");

    return 0;
}
