#include "stdio.h"

int main()
{
    char in[80] ;
    int i, ac, dc, wsc, oc;
    ac = dc = wsc = oc = 0;
    char c;
    printf("\nEnter a sentence for string analysis: ");
    gets(in);



    for (i = 0; in[i] != '\0'; i++)
    {
        c = in[i];
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            ac++;
        else if (c >= '0' && c <= '9')
            dc++;
        else if (c == ' ' || c == '\n' || c == '\t')
            wsc++;
        else
            oc++;
    }
    printf("\n%s", in);
    printf("\nString Analysis   Results: ");
    printf("\nAlphabets : %d", ac);
    printf("\nDigits : %d", dc);
    printf("\nWhite space characters : %d", wsc);
    printf("\nOthers : %d\n", oc);
}