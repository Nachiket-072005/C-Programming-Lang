#include<stdio.h>
int count_Arr(int *arr, int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {0, 1, 2, 3, 4, -5, 6, -7, -8, 9, 10};
    int n = count_Arr(arr, 11);
    printf("No of positive integer elements in an array is %d\n", n);
    return 0;
}