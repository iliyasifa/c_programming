#include "stdio.h"

int main()
{
    long fact = 1;
    int n = 5;
    printf("\nN value Factorial\n");
    printf("-------------------");
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        printf("\n%-7d %ld", i, fact);
    }
    printf(" \n");
}