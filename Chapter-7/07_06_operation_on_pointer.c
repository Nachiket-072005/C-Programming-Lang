#include<stdio.h>

int main(){
    int a = 5, b = 6;
    int *c = &a, *d = &b;
    printf("Sum of a and b using ptr %d\n", *c + *d);
    printf("Minus of a and b using ptr %d\n", *c - *d);
    printf("Minus of ptr %u\n", c - d);
    printf("Comparision of 2 ptr %u\n", (c == d));
    return 0;
}