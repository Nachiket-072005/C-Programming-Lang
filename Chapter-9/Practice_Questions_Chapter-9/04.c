#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};


int main(){
    struct employee e1, e2, e3;
    struct employee *ptr;
    ptr = &e1;
    printf("Enter the code of e1 : ");
    scanf("%d", ptr->code);
    printf("Enter the salary of e1 : ");
    scanf("%f", ptr->salary);
    printf("Enter the name of e1 : ");
    scanf("%s", ptr->name);

    printf("The value of employee 1 is %d, %f, and %s\n", e1.code, e1.salary, e1.name);
    return 0;
}