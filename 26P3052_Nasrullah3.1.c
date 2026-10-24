
#include <stdio.h>

int main() {
    int i, j;
    char symbol;

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    // Increasing pattern
    for (i = 1; i <= 5; i++) 
	{
        for (j = 1; j <= i; j++)
		 {
            printf("%c", symbol);
        }
        printf("\n");
    }

    // Decreasing pattern
    for (i = 4; i >= 1; i--)
	 {
        for (j = 1; j <= i; j++)
		 {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
