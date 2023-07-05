#include<stdio.h>
void arrayinp(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("Enter the element %d --> ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
}

void array(int *ptr, int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    arrayinp(arr, n);

    printf("The elements of the array before reversing are: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    array(arr, n);

    printf("The elements of array after reversing are: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}