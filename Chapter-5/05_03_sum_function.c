#include<stdio.h>
int calc_Sum(int a, int b); //Function Prototype

int main(){
    int res;
    res = calc_Sum(5, 2); //Function Calling
    printf("Sum of a and b is %d\n", res);
    return 0;
}

int calc_Sum(int a, int b) { //Function Definition
    int res = a + b;
    return res;
}