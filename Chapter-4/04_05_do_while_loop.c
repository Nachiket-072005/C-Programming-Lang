#include<stdio.h>

int main(){
    int i = 0;
    // do-while loop which executes at least once.
    do
    {
        /* code */
        printf("The value of i is %d\n", i);
        i++;
    } while (i < 10);
    
    return 0;
}