#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee facebook[100];
    
    printf("Enter the code of e1 : ");
    scanf("%d", &facebook[0].code);
    printf("Enter the salary of e1 : ");
    scanf("%f", &facebook[0].salary);
    printf("Enter the name of e1 : ");
    scanf("%s", facebook[0].name);

    printf("Enter the code of e2 : ");
    scanf("%d", &facebook[1].code);
    printf("Enter the salary of e2 : ");
    scanf("%f", &facebook[1].salary);
    printf("Enter the name of e2 : ");
    scanf("%s", facebook[1].name);

    printf("Enter the code of e3 : ");
    scanf("%d", &facebook[2].code);
    printf("Enter the salary of e3 : ");
    scanf("%f", &facebook[2].salary);
    printf("Enter the name of e3 : ");
    scanf("%s", facebook[2].name);

    printf("DONE");
    
    return 0;
}