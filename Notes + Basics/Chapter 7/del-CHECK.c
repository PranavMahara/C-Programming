#include<stdio.h>

int main(){
    int arr[5];
    int *ptr = arr;

    for(int i=0; i<5; i++, ptr++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", ptr);
    }

    for(int i=0; i<5; i++){
        printf("Elements entered : %d \n", ptr[i]);
    }
    return 0;
}