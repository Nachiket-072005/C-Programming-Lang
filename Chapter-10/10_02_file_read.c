#include <stdio.h>

int main()
{
    int num;
    int num2;
    FILE *ptr;
    ptr = fopen("random.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    printf("The value of num is %d\n", num);
    printf("The value of num is %d\n", num2);
    fclose(ptr);
    return 0;
}