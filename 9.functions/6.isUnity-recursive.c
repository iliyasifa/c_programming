#include <stdio.h>

int isUnity(long n);

int main()
{
    long n;
    printf("\nEnter a number to find UNITY or NOT: ");
    scanf("%ld", &n);

    if (isUnity(n))
        printf("The given number %ld is UNITY!\n", n);
    else
        printf("The given number %ld is NOT UNITY!\n", n);
}

int isUnity(long n)
{
    if (n < 10)
        return n == 1;

    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return isUnity(sum);
}