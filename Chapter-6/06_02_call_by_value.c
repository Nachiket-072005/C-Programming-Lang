#include<stdio.h>
int swap(int a, int b);

int main(){
    int a = 3, b = 4;
    printf("The value of a and b before swap function is %d and %d\n", a, b);
    swap(a, b);
    printf("The value of a and b after swap function is %d and %d\n", a, b);
    return 0;
}

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}