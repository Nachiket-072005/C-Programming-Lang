#include<stdio.h>
#include<unistd.h>

int main(){
    int a;
    for(a = 1; a < 5; a++) {
        fork();
    }
    printf("1");
    return 0;
}