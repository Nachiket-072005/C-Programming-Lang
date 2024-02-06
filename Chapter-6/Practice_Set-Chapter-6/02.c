#include <stdio.h>
void get_Address(int i);
int main()
{
    int i = 4;
    printf("The address of i is %u\n", &i);
    get_Address(i);
    return 0;
}
void get_Address(int i)
{
    printf("The address of i is %u\n", &i);
}