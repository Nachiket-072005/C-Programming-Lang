#include<stdio.h>
void reverse_Arr(int *arr, int n);
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    reverse_Arr(arr, 7);
    for(int i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
void reverse_Arr(int *arr, int n) {
    for(int i = 0 ; i < (n / 2); i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}