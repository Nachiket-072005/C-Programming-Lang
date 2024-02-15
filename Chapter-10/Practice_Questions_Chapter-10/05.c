#include <stdio.h>

int main()
{
    int n;
    FILE *ptr;
    ptr = fopen("05.txt", "r");
    fscanf(ptr, "%d", &n);
    printf("%d\n", n);
    fopen("05.txt", "w");
    printf("%d\n", n);
    fprintf(ptr, "%d", (n * 2));
    fclose(ptr);
    return 0;
}