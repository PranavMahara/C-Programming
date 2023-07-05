#include<stdio.h>

int main(){
    int arr[5];
    int *ptr = arr;

    for(int i=0; i<5; i++){
        printf("Element %d --> ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;

    printf("%d", *(ptr+3));
    printf("%d", ptr[4]);
    return 0;
}