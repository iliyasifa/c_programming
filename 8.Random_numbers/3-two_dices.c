#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, dice1, dice2;

    /* see the random numbers */
    srand(time(0));

    printf("\nThrow# Dice1 Dice2 Total\n");
    for (i = 0; i < 10; i++)
    {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        printf(" %-8d%-6d% -6d% -6d\n",i + 1, dice1, dice2, dice1 + dice2);
    }
}