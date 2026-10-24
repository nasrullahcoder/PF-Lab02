#include <stdio.h>

int main() 
{
    int num, i, sum, count = 0;

    num = 2;

    while (count < 4) {
        sum = 0;

        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }

        if (sum == num) {
            printf("%d - Sum of divisors = %d\n", num, sum);
            count++;
        }

        num++;
    }

    return 0;
}
