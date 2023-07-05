#include<stdio.h>

int array(int *ptr){
    for(int i=0; i<3; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
}

int main(){
    int arr[3];
    array(arr);

    printf("%d", arr[2]);

    return 0;
}