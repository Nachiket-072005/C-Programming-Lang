#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[30];
}emp;

void show(emp emp1) {
    printf("The value of code is %d\n", emp1.code);
    printf("The value of salary is %f\n", emp1.salary);
    printf("The value of name is %s\n", emp1.name);
    emp1.code = 34;
}

int main(){
    emp e1;
    emp *ptr;
    ptr = &e1;
    
    ptr->code = 100;
    ptr->salary = 10.2;
    strcpy(ptr->name, "Nachiket");
    
    show(e1);
    printf("The value of code is %d", e1.code);
    
    return 0;
}