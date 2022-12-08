#include "stdio.h"

int main()
{
    int i, j, mf;
    float pi;

    pi = 0;
    mf = 1;
    printf("\nTerm  Pi value");
    for (i = 1, j = 1; j <= 100; j++, i += 2)
    {
        pi = pi + mf * (4.0 / i);
        mf = -mf;

        printf("\n%-4d %f", j, pi);
    }

    printf("\nPi value : %.2f\n", pi);
}