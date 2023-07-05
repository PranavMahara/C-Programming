// Write a program in C to convert a decimal number to binary using recursion. Go to the editor
// Test Data :
// Input any decimal number : 66
// Expected Output :

// The Binary value of decimal no. 66 is : 1000010    

#include<stdio.h>

int decimal_binary(int n){
    if (n==0){
        return 0;
    }
    else{
        return ((n%2)+10*decimal_binary(n/2));
    }
}
 
void main(){
   int n;
 
   printf("Enter a decimal number --> ");
   scanf("%d", &n);
   printf("Binary of %d is %d", n, decimal_binary(n));
}