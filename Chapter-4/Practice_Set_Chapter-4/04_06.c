#include<stdio.h>

int main(){
    int i, n, sum = 0;

    printf("Enter the number n : \n");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        sum = n * i;
    }
    printf("Sum of n is %d\n", sum);
    return 0;
}