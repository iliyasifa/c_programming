#include "stdio.h"

int main()
{
    int  n;
    long f1, f2, f3;

    printf("\nEnter how many numbers to be displayed in fibonacci numbers ( < 2 ) : ");
    scanf("%d", &n);

    f1 = f2 = 1;
    printf("\nFibonacci Series");
    printf("\n1 %ld\n", f1);
    printf("2 %ld\n", f2);

    for (int i = 3; i <= n; i++)
    {
        f3 = f1 + f2;
        printf("%d %ld\n", i, f3);
        f1 = f2;
        f2 = f3;
    }
}