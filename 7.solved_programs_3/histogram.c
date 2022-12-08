#include "stdio.h"

int main()
{
    int n, i, j;
    printf("Enter 5 numbers to print stars * (each 1 to 30): ");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &n);
        printf("\n%d ", n);
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
    }
    printf("\n\n");
}