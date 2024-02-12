#include <stdio.h>

int main()
{
    char str1[30] = "Hello";
    char *str2 = "Nachiket";
    int val = strcmp(str1, str2); // comparision both string
    printf("The value of val is %d", val);
    return 0;
}