#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 7;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 1; i <= 10; i++)
    {
        ptr[i] = n * i;
        printf("%d * %d = %d\n", n, i, ptr[i]);
    }
    printf("-------------\n");
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 1; i <= 15; i++)
    {
        ptr[i] = n * i;
        printf("%d * %d = %d\n",n, i, ptr[i]);
    }
    return 0;
}