#include "stdio.h"

int main()
{
    int n;
    float sum = 0;
    float in;

    printf("How many number: \n");
    scanf("%d", &n);
    printf("Enter a number one by one\n");

    for (int i = 0; i < n; i++)
    {

        scanf("%f", &in);

        sum = sum + in;
    }

    printf("Sum and Average number are %.2f and %.2f\n", sum, sum / n);
}