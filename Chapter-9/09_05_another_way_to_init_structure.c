#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[20];
};


int main(){
    struct employee e1 = {100, 10.2, "Nachiket"};

    printf("Code is : %d\n", e1.code);
    printf("Salary is : %f\n", e1.salary);
    printf("Name is : %s\n", e1.name);
    
    return 0;
}