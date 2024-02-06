#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg);
int main()
{
    int a = 3, b = 4, sum;
    float avg;
    sumAndAvg(a, b, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %f\n", avg);
    return 0;
}

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}