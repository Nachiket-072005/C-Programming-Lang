#include<stdio.h>

int main(){
    char *st = "Nachiket";
    int count = 0;
    while (*st != '\0')
    {
        count++;
        st++;
    }
    printf("The length of string is %d", count);
    return 0;
}