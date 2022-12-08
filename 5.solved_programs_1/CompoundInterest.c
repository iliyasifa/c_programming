#include <stdio.h>
#include <math.h>

int main()
{
    float r, i, P, n, F;
    
    printf("Enter the principal amount: ");
    scanf("%f", &P);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter of no. of years: ");
    scanf("%f", &n);
    i = r / 100.0;

    F = P * pow((1 + i), n);
    printf("Compound interest for the principal amount of %f with the rate of interest of %.1f is %f for %f years", P, r, F, n);
}