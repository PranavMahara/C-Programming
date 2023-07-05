#include<stdio.h>

int main(){
    int arr[4];
    int *ptr = &arr[4];

    for(int i=4; i>=1; i--, ptr--){
        printf("Enter the value of element %d --> ", i);
        scanf("%d", ptr);
    }

    ptr = arr;

    for(int i=1; i<=4; i++){
        printf("The value of element %d --> %d\n", i, ptr[i-1]);
    }
    return 0;
}