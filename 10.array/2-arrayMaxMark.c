#include <stdio.h>

int max(int[], int);

int main()
{
    int marks[] = {34, 67, 85, 26, 2, 87};
    printf("\nThe maximum mark is %d\n", max(marks, 6));
}

int max(int marks[], int n)
{
    int i;
    int m = marks[0];
    for (i = 1; i < n; i++)
        if (m < marks[i])
            m = marks[i];

    return m;
}