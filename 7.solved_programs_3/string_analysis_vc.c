#include "stdio.h"

int main()
{
    char in[80];
    char c;

    int i, vc = 0, cc = 0;
    printf("Enter a text: ");
    gets(in);

    for (i = 0; in[i]; i++)
    {
        c = in[i];
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        {
            switch (c)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':

                vc++;
                break;

            default:
                cc++;
                break;
            }
        }
    }
    printf("\n%s", in);
    printf("\nString Analysis:  Results\n");
    printf("---------------------------");
    printf("\nvovel count: %d", vc);
    printf("\nConsonent count: %d\n\n", cc);
}