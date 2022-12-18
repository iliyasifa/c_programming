#include <stdio.h>

int main()
{
    int m1[][2] = {2, 4, 2, 6};
    int m2[][2] = {1, 9, 4, 8};
    int res[2][2];
    int m = 2, n = 2;
    int i, j;

    /* Writing Algorithm for generating indexes */
    // for (i = 0; i < m; i++)
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("\nRow: %d, Col: %d.  m1: %d, m2: %d", i, j, m1[i][j], m2[i][j]);
    //     }

    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            res[i][j] = m1[i][j] + m2[i][j];
            printf("  %d", res[i][j]);
        }
    }
    printf("\n\n");
}