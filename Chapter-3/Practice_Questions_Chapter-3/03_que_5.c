#include<stdio.h>

int main(){
    char ch;

    printf("Enter the character to check whether a character is lower case or not : \n");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z') {
        printf("The entered character is in lower case");
    } else {
        printf("The entered character is not in lower case");
    }
    return 0;
}