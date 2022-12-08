#include "stdio.h"

int main()
{
    char text[80];
    char backtext[80];

    int i, j;

    printf("\nEnter a text: ");
    gets(text);

    for (i = 0; text[i]; i++)
        ;
    for (--i, j = 0; i >= 0; i--, j++)
    {
        backtext[j] = text[i];
    }
    backtext[j] = '\0';
    printf("%s\n", backtext);
}