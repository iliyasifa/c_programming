#include <stdio.h>

int main()
{
    int n = 10, lineCount, digitCount, d2d, spaceCount;

    /* Display how many lines */
    for (lineCount = 1; lineCount <= n; lineCount++)
    {
        /* Start in a new line */
        printf("\n");

        /* Starts with space counts */
        for (spaceCount = 1; spaceCount <= n - lineCount; spaceCount++)
            printf(" ");

        /* Display digit count */
        d2d = lineCount;
        for (digitCount = 1; digitCount <= lineCount; digitCount++)
        {
            printf("%d", d2d % 10);
            d2d++;
        }

        d2d -= 2;
        for (digitCount = 1; digitCount <= lineCount - 1; digitCount++)
        {
            printf("%d", d2d % 10);
            d2d--;
        }
    }
    printf("\n\n");
}