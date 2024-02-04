#include<stdio.h>

int main(){
    int i, fact = 1, n;

    printf("Enter the value of n : \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial is %d", fact);
    return 0;
}