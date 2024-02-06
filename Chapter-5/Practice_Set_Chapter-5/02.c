#include<stdio.h>
float cel_TO_Far(float c);
int main(){
    float cel, res;
    printf("Enter the value of cel to convert into farenheit : \n");
    scanf("%f", &cel);
    res = cel_TO_Far(cel);
    printf("%f celsius = %f farenheit", cel, res);
    return 0;
}

float cel_TO_Far(float c){
    float far;
    far = (c * (9/5)) + 32;
    return far;
}