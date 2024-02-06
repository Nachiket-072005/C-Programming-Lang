#include<stdio.h>

int main(){
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;
    if(ptr == &arr[2]){
        printf("These points to same address");
    } 
    else {
        printf("These do not points to same address");
    }
    return 0;
}