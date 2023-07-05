// Print multiplication table of 12 using recursion.

#include<stdio.h>

void Sum(int num, int i){

    printf("\n");
    printf("%d X %d = %d",num,i,num*i);

    if(i<10){
        return Sum(num, i+1);
    }

}
int main(){

    int num,i=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d is: \n", num);
    Sum(num, 1);
}