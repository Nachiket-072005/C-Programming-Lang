#include<stdio.h>

int main(){
    char str1[30] = "Hello ";
    char *str2 = "Nachiket";
    strcat(str1, str2); //concatenatoin string
    printf("The value of str1 is %s", str1);
    return 0;
}