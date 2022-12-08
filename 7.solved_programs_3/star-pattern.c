#include <stdio.h>

int main()
{
    int i, j, n = 5;
    printf("\nEnter No. of Lines: (3-10) ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        /* Starts with new a line */
        printf("\n");

        /* Display spaces first */
        for (j = 1; j <= (n - i); j++)
            printf(" ");

        /* Display stars here */
        for (j = 1; j <= i; j++)
            printf("*");
    }
    printf("\n\n");
}