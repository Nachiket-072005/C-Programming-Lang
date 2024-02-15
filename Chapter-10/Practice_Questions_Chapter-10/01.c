#include <stdio.h>

int main()
{
    int num1, num2, num3;
    FILE *ptr;
    ptr = fopen("slack.txt", "r");
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num3);
    printf("%d %d and %d\n", num1, num2, num3);
    return 0;
}