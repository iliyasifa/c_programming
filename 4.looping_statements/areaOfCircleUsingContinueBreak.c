#include "stdio.h"

int main()
{
    int r;
    float area;

    do
    {
        printf("\nEnter a radius to calculate area of circle: ");
        scanf("%d", &r);

        if (r < 1)
        {
            printf("Invalid input\n");
            continue;
        }

        if (r == 100)
        {
            break;
        }

        area = (22 / 7.0 ) * r * r ;
        printf("Area of circle of r = %d is %0.2f", r, area);

    } while (r >= 1 || r <= 99);
}