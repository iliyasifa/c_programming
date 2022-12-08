#include<stdio.h>

int main(){
    int sum = 0;
    int i ;
    for ( i = 2; i < 100; i+=3)
    {
        if(i % 5  == 0){
            sum = sum + i;
        }
    }
    printf("Sum of numbers evenly divisible by 5 is %d\n", sum);
    
}