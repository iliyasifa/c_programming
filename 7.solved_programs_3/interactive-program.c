#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, f1, f2, f3;
    int upto;
    int isPrime, isFibo;

    do
    {
        printf("\nEnter a number to check weather it is prime or fibonacci number: ");
        scanf("%d", &n);

        if (n == 0)
            break;

        /* To check prime or not */
        upto = sqrt(n);
        isPrime = 1;
        for (int i = 2; i <= upto; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("\n%d is a prime number", n);
        else
            printf("\n%d is NOT a prime number", n);

        /* To check weather Fibonacci number */
        f1 = f2 = 1;
        isFibo = 0;
        while (f2 <= n)
        {
            if (f2 == n)
            {
                isFibo = 1;
                break;
            }
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        if (isFibo == 1)
            printf("\n%d is a fibonacci number", n);
        else
            printf("\n%d is NOT a fibonacci number", n);
    } while (n != 0);
}
