// Write a program in C to check Armstrong number of n digits.
// abcd... = a^n + b^n + c^n + d^n + 

#include <math.h>
#include <stdio.h>

int main() {
   int num, nu, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   nu = num;

   for (nu = num; nu != 0; ++n){
       nu /= 10;
   }

   for (nu = num; nu != 0; nu /= 10){
       remainder = nu % 10;
       result += pow(remainder, n);
   }

   if ((int)result == num){
        printf("%d is an Armstrong number.", num);
   }
   else{
        printf("%d is not an Armstrong number.", num);
   }

   return 0;
}