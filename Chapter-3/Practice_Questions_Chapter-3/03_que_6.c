#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter the value of a : \n");
    scanf("%d", &a);
    printf("Enter the value of b : \n");
    scanf("%d", &b);
    printf("Enter the value of c : \n");
    scanf("%d", &c);
    printf("Enter the value of d : \n");
    scanf("%d", &d);

    if((a > b) && (a > c) && (a > d)) {
        printf("%d is greater", a);
    } else if((b > c) && (b > d)) {
        printf("%d is greater", b);
    } else if(c > d) {
        printf("%d is greater", c);
    } else {
        printf("%d is greater", d);
    }
    
    return 0;
}