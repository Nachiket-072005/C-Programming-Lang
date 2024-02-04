#include<stdio.h>

int main(){
    char grade;

    printf("Enter your grade : \n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Your marks between 90 - 100");
        break;
    case 'B':
        printf("Your marks between 80 - 90");
        break;
    case 'C':
        printf("Your marks between 70 - 80");
        break;
    case 'D':
        printf("Your marks between 60 - 70");
        break;
    default:
        printf("Your marks is less than 70");
        break;
    }
    return 0;
}