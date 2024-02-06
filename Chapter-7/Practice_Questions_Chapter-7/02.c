#include <stdio.h>

int main()
{
    int i, n, mul[10];
    printf("Enter the value of n to print that number table : \n");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", n, i + 1, mul[i]);
    }
    return 0;
}