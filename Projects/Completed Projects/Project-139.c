// Finding the array type

#include<stdio.h>
int main(){
   int n;
   printf("Enter no of elements in the array :");
   scanf("%d", &n);
   int arr[n];
   
   int odd = 0, even = 0;
   for(int i = 0; i < n; i++){
      printf("Enter element %d --> ");
      scanf("%d",&arr[i]);
   }

   for(int i = 0; i < n; i++){
      if(arr[i] % 2 == 1)
         odd++;

      if(arr[i] % 2 == 0)
         even++;
   }

   if(odd == n){
      printf("Odd Array");
    }
    
   else if(even == n){
      printf("Even Array");
    }
    
   else{
      printf("Mixed Array");
    }
    
   return 0;
}