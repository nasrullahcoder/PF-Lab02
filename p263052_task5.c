#include <stdio.h>

int main() {
    // Declare and initialize temperature in Celsius
    float celsius = 37.5;

    // Convert Celsius to Fahrenheit
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Convert Celsius to Kelvin
    float kelvin = celsius + 273.15;

    // Display conversion card
    printf("====================================\n");
    printf("\tTEMPERATURE CONVERSION\n");
    printf("====================================\n");

    printf("Celsius\t\t: %.2f °C\n", celsius);
    printf("Fahrenheit\t: %.2f °F\n", fahrenheit);
    printf("Kelvin\t\t: %.2f K\n", kelvin);

    printf("====================================\n");

    return 0;
}
