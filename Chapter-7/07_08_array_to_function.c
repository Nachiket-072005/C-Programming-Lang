#include <stdio.h>
void print_Array1(int *ptr, int n);
void print_Array2(int ptr[], int n);
int main()
{
    int marks[] = {35, 56, 78, 96, 46, 56, 85};
    // print_Array1(marks, 7);
    print_Array2(marks, 7);
    printf("%d", marks[2]);
    return 0;
}

void print_Array1(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *(ptr + i));
    }
}

void print_Array2(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 53; // This value will be changes in arr array of main as well.
}