#include "stdio.h"

int main()
{
    int temp;

    printf("\nEnter a temperature: ");
    scanf("%d", &temp);

    if (temp < 0)
        printf("\nThe temperature is COLD\n");
    else if (temp <= 100)
        printf("\nThe temperature is HOT\n");
    else
        printf("\nThe temperature is STEAM\n");
}