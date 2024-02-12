#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;

    e1.code = 100;
    e1.salary = 250.75;
    strcpy(e1.name, "Nachiket");

    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);

    e2.code = 101;
    e2.salary = 200.75;
    strcpy(e2.name, "Rudra");

    printf("%d\n", e2.code);
    printf("%f\n", e2.salary);
    printf("%s\n", e2.name);

    e3.code = 102;
    e3.salary = 175.75;
    strcpy(e3.name, "Avanish");

    printf("%d\n", e3.code);
    printf("%f\n", e3.salary);
    printf("%s\n", e3.name);
    return 0;
}