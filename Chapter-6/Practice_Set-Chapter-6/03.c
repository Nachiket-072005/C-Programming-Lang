#include <stdio.h>
int change_Value(int *a);
int main()
{
    int a = 4;
    printf("The value of a is %d\n", a);
    printf("The value of a is by 10 times is %d\n", change_Value(&a));
    return 0;
}
int change_Value(int *a)
{
    *a *= 10;
    return *a;
}