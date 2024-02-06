#include<stdio.h>
int find_Fact(int n);

int main(){
    int n, res;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    res = find_Fact(n);
    printf("Factorial of %d is %d\n", n, res);
    return 0;
}
//recursive function
int find_Fact(int n){
    if(n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * find_Fact(n - 1);
    }
}