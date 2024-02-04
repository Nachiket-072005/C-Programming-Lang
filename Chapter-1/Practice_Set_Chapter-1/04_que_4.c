#include <stdio.h>

int main()
{
    int P, N;
    float R;

    printf("Enter the value of P \n");
    scanf("%d", &P);
    printf("Enter the number of years N \n");
    scanf("%d", &N);
    printf("Enter the value of rate of interest R \n");
    scanf("%f", &R);

    float simpleInterest = (P * R * N)/100.0;
    printf("The value of simple interest is %f", simpleInterest);

    return 0;
}