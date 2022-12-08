#include <stdio.h>

int sumOfDigits(long);

int main()
{
    long n;
    printf("\nEnter a number to check Unity or NOT Unity: ");
    scanf("%ld", &n);
    if (sumOfDigits(12643) == 1)
        printf("\n%ld is a Unity number!\n", n);
    else
        printf("\n%ld is NOT a Unity number!\n", n);
}

int sumOfDigits(long n)
{
    int sum = 0;
    while (n > 9)
    {
        sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}