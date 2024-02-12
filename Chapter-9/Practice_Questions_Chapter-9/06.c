#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} com;

void display(com c)
{
    printf("The value of real number is %d\n", c.real);
    printf("The value of imaginary part of number is %d\n", c.img);
}

int main()
{
    com cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of real number for %d\n: ", i + 1);
        scanf("%d", &cnums[i].real);
        printf("Enter the value of imaginary number for %d\n: ", i + 1);
        scanf("%d", &cnums[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    return 0;
}