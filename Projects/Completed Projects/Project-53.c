// Write a C program to remove any negative sign in front of a number(integer).

// ATG STYLE

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The value of 'a' is %d", abs(a));
    return 0;
}


// DESI STYLE

// #include<stdio.h>
// #include<math.h>

// int main(){
//     float a;
//     printf("Enter an integer --> ");
//     scanf("%f", &a);

//     if(a<0){
//         printf("Absolute value is %f", a*-1);
//     }
//     else{
//         printf("The number is %f", a);
//     }
//     return 0;
// }