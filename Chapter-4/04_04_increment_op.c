#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i); //5
    printf("The value after i++ is %d\n", i++); //5
    printf("The value of i is %d\n", ++i); //7

    //i++ => Pehele print fir increment kare...
    //++i => Pehele increment fir print kare...
    //i-- => Pehele print fir decrement kare...
    //--i => Pehele decrement fir print kare...

    printf("The value of i is %d\n", i); //7
    printf("The value after i-- is %d\n", i--); //7
    printf("The value after --i is %d\n", --i); //5
    return 0;
}