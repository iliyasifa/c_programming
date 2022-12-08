#include "stdio.h"

int main()
{
    char a[50];
    printf("Enter a string to encrypt: ");
    gets(a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        a[i]--;
    }

    printf("Resulting String is: %s\n", a);
}