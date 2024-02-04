#include<stdio.h>

int main(){
    int year;

    printf("Enter year : \n");
    scanf("%d", &year);

    if((year % 4 == 0 || year % 100 == 0) && year % 400 == 0) {
        printf("This %d is leap year", year);
    } else {
        printf("This %d is not leap year", year);
    }
    return 0;
}