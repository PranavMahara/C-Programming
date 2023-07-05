#include<stdio.h>
#include<math.h>

int main(){
    int a = 4;
    int b = 8;
    
    int z;
    z = a*b; // This is legal
    // a*b = z // This is illegal yeh ni karne ka

    printf("The value of z is %d \n", z); 
    printf("5 when divided by 2 leaves remainder of %d \n", 5%2); //  % is for calculating remainder, // % --> Modular
    printf("-5 when divided by 2 leaves remainder of %d \n", -5%2);
    printf("5 when divided by -2 leaves remainder of %d \n", 5%-2); // numerator ka sign remainder jesa hoga

    // Tere is no operator to perform exponentiation in C
    // printf("The value of 4^5 is %d \n", 4^5); Output galat aaegi    
    // we use power function instead
    printf("The value of 4 to the power 5 is %f \n", pow(2, 5)); // But you have to include # include<math.h> in starting
                                                         // %f lagao real number return karega
    return 0;
}