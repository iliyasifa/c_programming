#include <stdio.h>

int main()
{
    float res = 1;
    float num;
    int n;

    printf("\nEnter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &num);
        res = res * num;
    }
    printf("\nCumulative product is %.2f\n", res);
}