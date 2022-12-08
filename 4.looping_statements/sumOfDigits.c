#include "stdio.h"

int main()
{

    long n, sum;
    sum = 0;
    char option;

    do
    {
        printf("Enter a number to calculate sum of digit: ");
        scanf("%ld%c", &n, &option);

        while (n > 0)
        {
            sum = sum + n % 10;
            n /= 10;
        }
        printf("Sum of digit is %ld\n", sum);
        printf("Do you want to continue: ( Y / N ) ? ");
        option = getchar();

    } while (option == 'Y' || option == 'y');
}