#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("sample.txt", "r"); //--> for read the file
    ptr = fopen("sample.txt", "w"); //--> for write to the file
    return 0;
}