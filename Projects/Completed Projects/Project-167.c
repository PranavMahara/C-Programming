// Write a program in C to Check if a number is Mersenne number or not.

#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    for(int i = 0; i<100; i++){
        if(pow(2, i)==x+1){
            printf("It is Mersenne Number");
        }
    }
    return 0;
}