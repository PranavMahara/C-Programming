// Write a C program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers.

#include<stdio.h>

int main(){
    int a, b, hcf;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    if(a<b){
        // min num --> a
        for(int i=1; i<=a; i++){
            if(a%i==0 && b%i==0){
                hcf = i;
            }
        }
    }

    else if(a>b){
        // min num --> b
        for(int i=1; i<=b; i++){
            if(a%i==0 && b%i==0){
                hcf = i;
            }
        }
    }

    printf("The HCF is %d", hcf);
    return 0;
}