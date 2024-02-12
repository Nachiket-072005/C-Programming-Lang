#include<stdio.h>
#include<string.h>

int main(){
    char *st = "This";
    char st2[40];
    strcpy(st2, st);
    printf("Now, The second string is %s", st2);
    return 0;
}