// Write a C program that reads three floating values and check if it is possible to make a triangle with them. 
// Also calculate the perimeter of the triangle if the said values are valid.

#include<stdio.h>

int main(){
    float a, b, c; // Condition for triangularity is sum of any 2 sides is greater than length of 3rd side....
                //    a+b>c     // These 3 should hold

                //    a+c>b

                //    b+c>a
    printf("Enter the value of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a){
        printf("Triangle is possible \n");
        printf("Perimeter is %f", a+b+c);
    }
    else{
        printf("Triangle not Possible");
    }

    return 0;
}