#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int number;
    srand(time(0));
    number = rand() % 100 + 1; //Generates random number between from 1 to 100
    printf("The value of random number is %d\n", number);
    return 0;
}