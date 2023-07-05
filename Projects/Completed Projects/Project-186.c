// Write a program in C to find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways.

#include<stdio.h>
#include<math.h>

int main(){
    float n;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(pow(i, 3)+pow(j, 3)==n){
                printf("%d^3+%d^3=%.0f \n", i, j, n);
            }
        }
    }
    return 0;
}