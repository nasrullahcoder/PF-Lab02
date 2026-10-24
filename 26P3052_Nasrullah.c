#include <stdio.h>

int main() 

{
    int i, j, k;

    // First pattern 
    for (i = 5; i >= 1; i--)
	 {
        for (k = 5; k > i; k--) 
		{
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}
