#include "stdio.h"

int main()
{

    long sum = 0;
    int n, i;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("\nSum of series n = %d is %ld\n", n, sum);
}