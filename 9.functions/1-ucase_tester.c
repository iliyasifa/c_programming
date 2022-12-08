#include <stdio.h>

char ucase(char c);

int main()
{
    char c;
    // printf("\nEnter a character to display in Upper case : ");
    // c = getchar();
    // scanf("%c", &c);
    printf("Enter a string to display in uppercase : ");
    while ((c = getchar()) != '\n')
        printf("%c", ucase(c));
    printf("\n");
}

char ucase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}
