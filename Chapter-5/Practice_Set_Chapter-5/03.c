#include<stdio.h>
float calc_Force(float m);
int main(){
    float m, f;
    printf("Enter the value of m : \n");
    scanf("%f", &m);
    f = calc_Force(m);
    printf("The value of force in newton from mass kgs : %.2f", f);
    return 0;
}

float calc_Force(float m) {
    float res = m * 9.8;
    return res;
}