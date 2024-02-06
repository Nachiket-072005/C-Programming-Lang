#include<stdio.h>
#include<math.h>
float square(int a);

int main(){
    int a = 5;
    float res;
    res = square(a);
    printf("The area of a square is %f\n", res);
    return 0;
}

float square(int a) {
    float sq = pow(a, 2);
    return sq;
}