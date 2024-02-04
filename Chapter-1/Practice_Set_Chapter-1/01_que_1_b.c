#include<stdio.h>

int main(){
    int length, breadth;
    float area;

    printf("Enter the value of length \n");
    scanf("%d", &length);

    printf("Enter the value of breadth \n");
    scanf("%d", &breadth);
    area = length *  breadth;
    printf("The value of rectangle is %f", area);
    return 0;
}