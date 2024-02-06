#include<stdio.h>

int main(){
    int a = 4;
    printf("The value of a address is %u\n", &a);
    printf("The value of a is %d\n", *(&a));
    return 0;
}