#include<stdio.h>

int main(){
    int i, n, sum = 0;

    printf("Enter the value of n : \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of n number is %d\n", sum);
    return 0;
}