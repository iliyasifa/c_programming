#include <stdio.h>

int main()
{
    float r;
    float res;
    printf("Enter a radius : ");
    scanf("%f", &r);
    res = (22 / 7.0) * r * r;
    printf("Area of circle with radius of %0.1f is %.1f\n", r, res);
}