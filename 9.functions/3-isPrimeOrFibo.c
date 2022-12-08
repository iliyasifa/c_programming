#include <stdio.h>
#include <math.h>

int isPrime(int);
int isFibo(long);

int main()
{
    int n;
    do
    {
        printf("\nEnter a number to check isFibo & isPrime : ");
        scanf("%d", &n);
        if (n == 0)
            break;

        if (isFibo(n) == 1)
            printf("\n%d is a FIBONACCI NUMBER", n);
        else
            printf("\n%d is NOT a FIBONACCI NUMBER", n);

        if (isPrime(n) == 1)
            printf("\n%d is a PRIME NUMBER", n);
        else
            printf("\n%d is NOT a PRIME NUMBER", n);
    } while (n != 0);
}

int isPrime(int n)
{
    int isPrime, upto;
    int i;

    isPrime = 1;
    upto = sqrt(n);

    for (i = 2; i <= upto; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int isFibo(long n)
{
    long f1, f2, f3;

    if (n == 1)
        return 1;

    f1 = f2 = 1;
    while (f2 <= n)
    {
        if (f2 == n)
            return 1;
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return 0;
}