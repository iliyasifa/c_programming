#include "stdio.h"

int main()
{
    int n, i, smallest, tmp;
    printf("\nEnter the numbers in a single line integers. ");
    printf("\nfirst number should indicate the count of numbers: \n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &tmp);
        /* if (i == 1)
        {
            smallest = tmp;
        }
        else if (smallest > tmp)
        {
            smallest = tmp;
        } */
        if (i == 1 || smallest > tmp)
        {
            smallest = tmp;
        }
    }
    printf("\nThe smallest integer is %d\n", smallest);
}