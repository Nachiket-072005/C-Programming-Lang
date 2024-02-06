#include <stdio.h>
void print_Pattern(int n);
int main()
{
    int n = 4;
    print_Pattern(n);
    return 0;
}
void print_Pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    print_Pattern(n - 1);
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        printf("*");
    }
    printf("\n");
}