#include<stdio.h>

int main(){
    int i = 5;
    int *a = &i;
    int **b = &a;
    printf("The value of i is %d\n", **b);
    return 0;
}