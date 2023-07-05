// Write a  program to search for an element ‘a’ in the array. Assume that the maximum size of the array is 15.

#include<stdio.h>

int main(){
    int arr[15], find, size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for(i=1; i<=size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the searching element: ");
    scanf("%d", &find);

    for(i=0;i<size;i++){
        if(arr[i]==find){
            printf("%d is present in the array",find);
            break;
        }
    }

    if(i==size){
        printf("%d is not present in the array",find);
    }
  return 0;
}