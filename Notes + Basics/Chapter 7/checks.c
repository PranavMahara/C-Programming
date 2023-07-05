#include<stdio.h>

int main(){
    int arr[3];

    int *ptr = arr;
    for(int i=0; i<3; i++, ptr++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &ptr[0] + i);
    }
    
    printf("%d \n", arr[0]);
    printf("%d \n", arr[1]);
    printf("%d \n", arr[2]);

    return 0;
}