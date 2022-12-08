#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    float b;
    char c[100];
    char d;
    printf("Enter name: ");
    gets(c);

    printf("Enter gender : ");
    scanf("%c", &d);

    printf("\nYour name is : %s", c);
    printf("\nGender : %c\n", d);
    printf("Enter A and B values: ");
    scanf("%d %f", &a, &b);
    printf("You entered A = %d, B = %f", a, b);
}
