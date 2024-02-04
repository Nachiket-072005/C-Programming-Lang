#include<stdio.h>

int main(){
    int i, n;

    printf("Enter the value of n : \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("The value of i is %d\n", i);
    }
    return 0;
}