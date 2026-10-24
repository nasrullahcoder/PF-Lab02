#include <stdio.h>

int main() 
{
    int n, k, i;
    double x, power, fact, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%lf", &x);

    for (k = 0; k <= n; k++) 
	{
        power = 1;
        fact = 1;

        for (i = 1; i <= k; i++) 
		{
            power = power * x;
            fact = fact * i;
        }

        sum = sum + power / fact;
    }

    printf("Sum = %.4lf\n", sum);

    return 0;
}
