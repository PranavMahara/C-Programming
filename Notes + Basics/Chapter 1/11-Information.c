// C provides several other basic data type besides int, float, char

// short ---> short integer
// long ----> long integer
// double ---> double precision floating point


#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%2d", &a);
    printf("The value of a entered is %d \n", a); // like if i enter a number 1234 then becuase we have %2d we will get upto 2 digits from the left so we will obtain only 12


    float b;
    printf("Enter the value of b: ");
    scanf("%3.2f", &b); // 3 digits from left and 2 decimals, enter 1234.5678 we will obtain 123.56  (check output not getting)

    printf("The value of b entered is %f", b);
        
   return 0;
}
  


    