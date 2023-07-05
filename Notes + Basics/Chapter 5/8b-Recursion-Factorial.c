// Recursion
// A function which can call itself
// The function is called recursive function

#include<stdio.h>
int factorial(int x);

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("The value of factorial %d is %d \n",a, factorial(a));
    
    return 0;
}
 
int factorial(int x){
    // printf("Calling Factorial %d \n", x);     // for checking ke liye
    if (x==1 || x==0){
        return 1;  // return ka matlab value leke laut lo!!
    }
    else{
        return x*factorial(x-1);  // The condition which doesnt call the function any further in a recursive function is called the base condition
    }
}