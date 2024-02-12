#include <stdio.h>

void strLen(char *st)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("The length of string is %d", count);
}
    
int main()
{
    char st[] = "Nachiket";
    strLen(st);
    return 0;
}