// Write a C program to find whether the given number is odd or even, using Bitwise ' & ' Operator.

#include <stdio.h>

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1){ // means the sameif((num & 1) == 1)
        printf("%d is odd.", num);
    }
    else{
        printf("%d is even.", num);
    }

    return 0;
}

// #include <stdio.h>

// int main()

// {

// int num = 26 ;

// num&1?printf("%d is odd number", num):printf ("%d is even number", num);

// return 0;

// }