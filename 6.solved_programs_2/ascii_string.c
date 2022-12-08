#include "stdio.h"

int main()
{
    char s[80];
    int i = 0;

    printf("Enter a String to get corresponding character ascii value: ");
    gets(s);

    while (s[i])    
    {
        printf("\n%c %d", s[i], s[i]);
        i++;
    }
    
}