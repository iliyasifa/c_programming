#include "stdio.h"

int main(){
    long product = 1;
    int i;

    printf("N value   value\n");
    for ( i = 1; i <= 15; i+=2)
    {
        product = product * i;
        printf("\n%-8d  %ld", i, product);
    }
    printf("\nProduct = %ld\n\n", product);
       
}