#include <stdio.h>

int main(){
    int i, j; 
    int sum = 0;
    for (i = 1, j = 1; j <= 5; i+=2, j++)
    {
        sum = sum + i;
    }
    printf("\nSum of Odd Integers: %d\n", sum);
}