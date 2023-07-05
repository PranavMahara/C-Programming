#include<stdio.h>


int main(){
     int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};   

    int length = sizeof(arr);
    int one = sizeof(arr[0]);
    printf("%d", length/one);
    return 0;
}