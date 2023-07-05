// Check whether armstrong number using function

#include<stdio.h>
#include<math.h>
void armstrong(int a){
    int n=0;
    int nu = a;
    int remainder;
    float result = 0.0;

   for (nu = a; nu != 0; ++n){
       nu /= 10;
   }

   for (nu = a; nu != 0; nu /= 10){
       remainder = nu % 10;
       result += pow(remainder, n);
   }


   if ((int)result == a){
        printf("%d is an Armstrong number.", a);
   }

   else{
        printf("%d is not an Armstrong number.", a);
   }
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}