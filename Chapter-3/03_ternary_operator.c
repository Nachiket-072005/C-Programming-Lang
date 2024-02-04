#include<stdio.h>

int main(){
    int a;

    printf("Enter the value of a : \n");
    scanf("%d", &a);

    (a < 5) ? printf("a is less than 5") : printf("a is not less than 5");
    return 0;
}