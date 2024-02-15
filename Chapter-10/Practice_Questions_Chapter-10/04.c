#include<stdio.h>
#include<string.h>

int main(){
    char s1[20], s2[20];
    int p1, p2;
    printf("Enter the name of person 1 : ");
    scanf("%s", &s1);
    printf("Enter the name of person 2 : ");
    scanf("%s", &s2);
    printf("Enter the salary of person 1 : ");
    scanf("%d", &p1);
    printf("Enter the salary of person 2 : ");
    scanf("%d", &p2);

    FILE *ptr;
    ptr = fopen("04.txt", "w");
    fprintf(ptr, "%s, %d\n", s1, p1);
    fprintf(ptr, "%s, %d\n", s2, p2);
    fclose(ptr);
    return 0;
}