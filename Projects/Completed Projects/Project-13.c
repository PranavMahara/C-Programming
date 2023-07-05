// Take input of some length in meter and covert it to feet and inches.

#include<stdio.h>

int main(){
    int length;
    printf("Please enter the value of length(in meter) --> ");
    scanf("%d", &length);

    float b = 3.281;
    float c = 39.37;

    printf("The value of length in feet is %f feet and in inches is %f inches", length*b, length*c);


    return 0;
}