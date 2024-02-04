#include<stdio.h>

int main(){
    int age, vipPass = 0;
    vipPass = 1;
    printf("Enter the age : \n");
    scanf("%d", &age);

    if ((age <= 75 && age >= 18) || vipPass == 1){
        printf("You can drive");
    }
    else {
        printf("You cannot drive");
    }
    return 0;
}