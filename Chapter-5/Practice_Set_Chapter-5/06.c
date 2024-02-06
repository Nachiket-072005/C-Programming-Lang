#include <stdio.h>
int calc_Sum(int n);
int main()
{
    int n, res;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    res = calc_Sum(n);
    printf("The sum of %d natural number is %d\n", n, res);
    return 0;
}
int calc_Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + calc_Sum(n - 1);
    }
}