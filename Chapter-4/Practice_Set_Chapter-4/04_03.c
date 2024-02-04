#include<stdio.h>

int main(){
    int i = 1, n, sum = 0;

    printf("Enter the value of n : \n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Total sum of n is %d\n", sum);
    return 0;
}