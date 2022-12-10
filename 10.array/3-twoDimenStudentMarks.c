#include <stdio.h>

int main()
{
    int marks[3][2];
    int i, j;
    int rTotal[3];
    int cTotal[2];

    /* Accept the inputs of Student marks */
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent-%d", i + 1);
        for (j = 0; j < 2; j++)
        {
            printf("\n  Marks-%d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    /* Calculate total of each Student */
    for (i = 0; i < 3; i++)
    {
        rTotal[i] = 0;
        for (j = 0; j < 2; j++)
            rTotal[i] += marks[i][j];
    }

    /* Calculate total of each Subject */
    for (i = 0; i < 2; i++)
    {
        cTotal[i] = 0;
        for (j = 0; j < 3; j++)
            cTotal[i] += marks[j][i];
    }

    /* Display Table */
    printf("\nS.No.  Marks-1   Marks-2   Total");
    for (i = 0; i < 3; i++)
    {
        printf("\n%4d", i + 1);
        for (j = 0; j < 2; j++)
            printf(" %5d   ", marks[i][j]);
        printf(" %5d  ", rTotal[i]);
    }

    /* Display Avegrage */
    printf("\n Avg.  ");
    for (i = 0; i < 2; i++)
        printf("  %3d   ", cTotal[i] / 3);
}