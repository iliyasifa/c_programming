#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, toss, headCount = 0, tailCount = 0;

    /* See the random number generators */
    srand(time(0));

    for (i = 0; i < 100; i++)
    {
        toss = rand() % 2;
        if(toss == 0){
            tailCount++;
        }else{
            headCount++;
        }
    }
    printf("\nHeadCount = %d, TailCount = %d\n\n", headCount, tailCount);
}