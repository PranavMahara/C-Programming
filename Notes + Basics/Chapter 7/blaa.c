#include<stdio.h>

void newarr(int ptr[], int n){
    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    printf("%d", *(ptr-2));
    
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d" ,&n);

    int arr[n];
    newarr(arr, n);
    
    return 0;
}