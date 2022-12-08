#include <stdio.h>
#include <math.h>

int main()
{
    int i, primeflag, upto, pc = 0, nn = 0;

    printf("\nS.No.  Prime number\n");
    /* Repeat the process for getting 100 prime numbers */
    while (pc < 100)
    {
        /* Get the next natural numbers */
        ++nn;

        /* Identify if this natural number is a Prime or NOT */
        upto = sqrt(nn);

        primeflag = 1;
        for (i = 2; i <= upto; i++)
        {
            if (nn % i == 0)
            {
                primeflag = 0;
                break;
            }
        }
        if (primeflag == 1)
        {
            pc++;
            printf("%-4d    %-6d\n", pc, nn);
        }
    }
}