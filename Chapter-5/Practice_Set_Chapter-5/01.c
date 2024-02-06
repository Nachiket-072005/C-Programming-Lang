#include <stdio.h>
int calc_Avg(int a, int b, int c);

int main()
{
    int a, b, c;
    int avg;
    printf("Enter the value of a : \n");
    scanf("%d", &a);
    printf("Enter the value of b : \n");
    scanf("%d", &b);
    printf("Enter the value of c : \n");
    scanf("%d", &c);
    avg = calc_Avg(a, b, c);
    printf("The average of a, b and c is %d\n", avg);
    return 0;
}

int calc_Avg(int a, int b, int c)
{
    int res;
    int sum = (a + b + c);
    res = sum / 3;
    return res;
}