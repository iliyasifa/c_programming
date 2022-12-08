#include <stdio.h>

int main()
{
    long f1, f2, f3;
    int n;

    printf("\nEnter how many fibonacci numbers to display (< 2) : ");
    scanf("%d", &n);

    f1 = f2 = 1;
    printf("\n%ld %ld ", f1, f2);

    for (int i = 3; i <= n; i++)
    {
        f3 = f1 + f2;
        printf("%ld ", f3);
        f1 = f2;
        f2 = f3;
    }
}