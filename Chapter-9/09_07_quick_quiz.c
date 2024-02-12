#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[30];
};
void show(struct employee emp) {
    printf("The value of code is %d\n", emp.code);
    printf("The value of salary is %f\n", emp.salary);
    printf("The value of name is %s\n", emp.name);
    emp.code = 34;
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    
    ptr->code = 100;
    ptr->salary = 10.2;
    strcpy(ptr->name, "Nachiket");
    
    show(e1);
    printf("The value of code is %d", e1.code);
    
    return 0;
}