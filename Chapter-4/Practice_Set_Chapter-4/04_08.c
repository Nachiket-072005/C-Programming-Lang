#include<stdio.h>

int main(){
    int i = 1, fact = 1, n;

    printf("Enter the value of n : \n");
    scanf("%d", &n);

    while (i <= n)
    {
        fact *= i;
        i++;
    }
    
    printf("Factorial is %d", fact);
    return 0;
}