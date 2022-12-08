#include <stdio.h>

int maximum(int, int, int, int);

int main()
{
    int b1, b2, b3, b4;
    b1 = maximum(4, 5, 7, 3);
    b2 = maximum(10, 15, 17, 14);
    b3 = maximum(1, 2, 3, 4);
    b4 = maximum(5, 10, 15, 20);
    printf("\n%d\n", (b1 + b2 + b3 + b4) / 4);
}

int maximum(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
        return a;
    else if (b > c && b > d)
        return b;
    else if (c > d)
        return c;
    else
        return d;
}