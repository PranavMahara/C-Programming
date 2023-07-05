// Write a program in C to copy the elements of one array into another array.

#include<stdio.h>
 
int main() {
   int arr1[30], arr2[30], num;
 
   printf("Enter no of elements : ");
   scanf("%d", &num);
 
   
   
   for(int i = 0; i < num; i++) {
        printf("Enter the values %d : \n", i+1);
        scanf("%d", &arr1[i]);
   }
 
   
   for (int i = 0; i < num; i++) {
      arr2[i] = arr1[i];
   }
 
   
   
   for (int i = 0; i < num; i++){
        printf("The copied array is :");
        printf("arr2[%d] = %d \n", i, arr2[i]);
   }
 
   return 0;
}