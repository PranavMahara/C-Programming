#include<stdio.h>

int main(){
    int x = 4, y = 3, z , p; 
    // z = x-- - y ; 
    p = --x - y ; 
    printf ( "\n%d %d %d %d", x, y, z, p ) ;
    return 0;
}


// Sometimes a user may not know about how many times a loop is to be executed. 
// If we want to execute a loop for unknown number of times, then the concept of odd loops should be implemented. 
// This can be done using for-loop, while-loop or do-while-loops.

#include<stdio.h>
int main(){
   int number;
   number=1;
   while(number==1) // odd loop don’t know how many times loop executes{
      printf("enter a number:\n");
      scanf("%d",&number);
      if((number%2)==0)
         printf("number is even\n");
      else
         printf("number is odd\n");
         printf("do you want to test any number\n");
         printf("if yes then press '1'\n");// if press 1 loop executes again
         printf("else press '0'\n");//if press 0 exist from loop
         scanf("%d",&number);
   }
   return 0;
}