#include <stdio.h>

long fact(int);

int main()
{
    int n;
    printf("\nEnter a number to get factorial: ");
    scanf("%d", &n);

    printf("\nFactorial of %d is %ld\n", n, fact(n));
}

long fact(int n)
{
    return (n == 1 ? n : n * fact(n - 1));
}