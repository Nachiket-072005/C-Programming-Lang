#include<stdio.h>

int main(){
    float cel, far;
    printf("Enter the value of cel \n");
    scanf("%f", &cel);

    far = (cel * 9/5) + 32;
    printf("The value of fareheit is %f", far);
    return 0;
}