
#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper pyramid
    for (i = 0; i <= n; i++) {
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    // Lower reverse pyramid
    for (i = n - 1; i >= 0; i--) {
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
