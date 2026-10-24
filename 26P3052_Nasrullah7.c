
#include <stdio.h>

int main() {
    int n, i, j;
    char symbol;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c", symbol);
        }

        printf("\n");
    }

    return 0;
}
