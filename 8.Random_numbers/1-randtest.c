#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    /*int seed;

    printf("\nEnter a seed value: (0 to 32732) ");
    scanf("%d", &seed); */

    /* seed the random number */
    srand(time(0));

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", rand() % 2);
    }
}