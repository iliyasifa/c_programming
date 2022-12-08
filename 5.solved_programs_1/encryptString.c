#include "stdio.h"

int main()
{
    char word[100];
    printf("Enter a word to encrypt: ");
    gets(word);
    word[0] -= 30;
    word[1] -= 30;
    word[2] -= 30;
    word[3] -= 30;
    word[4] -= 30;

    printf("%s\n", word);
}