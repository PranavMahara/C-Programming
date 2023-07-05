#include<stdio.h>

int main(){
    int arr[10];
    int *ptr = &arr[0]; // or int *ptr = arr;
    
    ptr+=2; // or ptr = ptr + 2;  
    

    if(ptr == &arr[2]){
        printf("These point at same location \n");
    }
    else{
        printf("These do not point tot the same location in memory \n");
    }
    
    return 0;
}