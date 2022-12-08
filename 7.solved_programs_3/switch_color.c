#include "stdio.h"

int main()
{
    char color;

    printf("\nEnter a color:(R/G/B) - ");
    color = getchar();

    switch (color)
    {
    case 'r':
    case 'R':
        printf("RED");
        break;
    case 'b':
    case 'B':
        printf("BLUE");
        break;
    case 'g':
    case 'G':
        printf("GREEN");
        break;
    default:
        printf("BLACK");
        break;
    }
    printf("\n");
}