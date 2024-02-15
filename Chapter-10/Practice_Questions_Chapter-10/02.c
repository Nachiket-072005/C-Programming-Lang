#include <stdio.h>

int main()
{
    int n;
    FILE *ptr;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    ptr = fopen("02.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d * %d = %d\n", n, i, n * i);
    }
    fclose(ptr);
    printf("Successfully generated your multiplication table of %d", n);
    return 0;
}