#include "stdio.h"

int main()
{
    int opt;

    printf("Enter a number : ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("HOT");
        break;
    case 2:
        printf("COLD");
        break;
    case 3:
        printf("WATER");
        break;
    default:
        printf("OUT OF RANGE");
        break;
    }
    printf("\n");
}