#include <stdio.h>
#include <math.h>

int main()
{
    float sinValue = 0;
    float fact = 1;
    int n, i, j;
    float x;
    int mf = 1;

    printf("\nEnter the X value & no. of Terms N : ");
    scanf("%f %d", &x, &n);

    for (i = 1, j = 1; j <= n; i += 2, j++)
    {
        sinValue = sinValue + mf * (pow(x, i) / fact);

        /* To change the sign */
        mf = mf * (-1);

        /* To find the next factorial */
        fact = fact * (i + 1) * (i + 2);
    }
    printf("\nSine of X is %f\n", sinValue);
}