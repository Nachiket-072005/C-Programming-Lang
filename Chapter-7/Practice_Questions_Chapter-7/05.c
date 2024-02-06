#include <stdio.h>
void print_Table(int *mulTable, int num, int n);
int main()
{
    int mulTable[3][10];
    print_Table(mulTable[0], 2, 10);
    print_Table(mulTable[1], 7, 10);
    print_Table(mulTable[2], 9, 10);
    return 0;
}
void print_Table(int *mulTable, int num, int n)
{
    printf("The multiplication table of %d \n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d * %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("\n");
}