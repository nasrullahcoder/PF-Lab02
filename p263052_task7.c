#include <stdio.h>

int main() {
    // Initial variables
    float vi = 12.5;   // Initial velocity in m/s
    float a = 3.2;     // Acceleration in m/s^2
    float t = 6.0;     // Time in seconds

    // Calculate final velocity
    float vf = vi + (a * t);

    // Calculate total distance travelled
    float s = (vi * t) + (0.5 * a * t * t);

    // Display kinematic parameters
    printf("========================================\n");
    printf("\tKINEMATIC MOTION REPORT\n");
    printf("========================================\n");

    printf("Initial Velocity\t: %.2f m/s\n", vi);
    printf("Acceleration\t\t: %.2f m/s^2\n", a);
    printf("Time Elapsed\t\t: %.2f s\n", t);
    printf("Final Velocity\t\t: %.2f m/s\n", vf);
    printf("Distance Travelled\t: %.2f m\n", s);

    printf("========================================\n");

    return 0;
}
