//Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<stdio.h>
 
int Sum(int);
 
int main(){
    int n1;
    int sum;
	printf("Recursion : calculate the sum of numbers from 1 to n\n");   
 
    printf("Input the last number of the range starting from 1: ");
    scanf("%d", &n1);
 
    sum = Sum(n1); 
    printf("The sum of numbers from 1 to %d : %d", n1, sum);
 
    return 0;
}
 
int Sum(int n1){
   int res;
   if(n1 == 1){
      return 1;
   } 

   else{
      res = n1 + Sum(n1 - 1); //calling the function sumOfRange itself
   }
   return (res);
}