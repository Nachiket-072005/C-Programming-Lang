#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a : \n");
    scanf("%d", &a);

    printf("Enter the value of b : \n");
    scanf("%d", &b);

    if(a == b){
        printf("Both are same");
    }
    else if(a > b) {
        printf("a is greater than b");
    }
    else if(a < b) {
        printf("a is less than b");
    }
    else if(a >= b) {
        printf("a is greater than or equal to b");
    }
    else if(a <= b) {
        printf("a is less than or equal to b");
    }
    else {
        printf("a dosn't equal to b");
    }
    return 0;
}