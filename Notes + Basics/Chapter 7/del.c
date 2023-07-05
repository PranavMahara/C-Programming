#include<stdio.h>

int main(){
    int arr[3];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    printf("The value of arr[0] arr[1] arr[2] is %d %d %d \n", arr[0], arr[1], arr[2]);
    int *ptr = arr;
    
    
    ptr[0] = 11;
    
    ptr[1] = 12;
    
    ptr[2] = 13;

    printf("Now the value of arr[0] arr[1] arr[2] is %d %d %d ", arr[0], arr[1], arr[2]);


    return 0;
}