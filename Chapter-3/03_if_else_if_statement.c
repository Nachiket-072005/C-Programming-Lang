#include<stdio.h>

int main(){
    int num;
    printf("Enter the num : \n");
    scanf("%d", &num);

    if(num == 1) {
        printf("Your num is 1");
    } else if(num == 2) {
        printf("Your num is 2");
    } else if(num == 3) {
        printf("Your num is 3");
    } else {
        printf("Its not 1, 2, and 3!");
    }
    return 0;
}