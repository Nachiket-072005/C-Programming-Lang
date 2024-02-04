#include<stdio.h>
#include<math.h>

int main(){
    int a = 4;
    int b = 3;

    printf("The value of a + b is %d \n", a + b);
    printf("The value of a - b is %d \n", a - b);
    printf("The value of a * b is %d \n", a * b);
    printf("The value of a / b is %d \n", a / b);
    //No opeator is assumed to be present at operand
    //There is no operator to perform exponentiation in c for that we will use pow(n, m) --> It will return double value.
    printf("The value of a to the power b is %f \n", pow(a, b));
    printf("The value of a mod b is %d \n", a % b);

    printf("The valur of 3.0/9 is %f \n", 3.0/9);
    return 0;
}