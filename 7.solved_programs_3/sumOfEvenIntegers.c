#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 2; i < 30; i+=2)
    {
        sum = sum + i;
    }
   printf("Sum of even integers = %d", sum); 
    
}