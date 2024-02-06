#include <stdio.h>
int print_Fib(int n);

int main()
{
    int n, i;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", print_Fib(i));
    }
    return 0;
}

int print_Fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return print_Fib(n - 1) + print_Fib(n - 2);
    }
}