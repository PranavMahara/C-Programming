// Write a program in C to display the cube of the number upto given an integer.

#include<stdio.h>
#include<math.h>

int main(){
    int n, i;
    i = 1;

    printf("Enter the value of n--> ");
    scanf("%d", &n);

    while(i<=n){
        printf("The cube of %d is %.2f \n", i, pow(i, 3));
        i++;
    }


    return 0;
}