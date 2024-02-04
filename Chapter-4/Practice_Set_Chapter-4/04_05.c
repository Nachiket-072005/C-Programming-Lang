#include<stdio.h>

int main(){
    int i = 1, n, sum = 0;

    printf("Enter the value of n : \n");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);
    
    printf("Sum of n number is %d\n", sum);
    return 0;
}