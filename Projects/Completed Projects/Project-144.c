// Write a program in C to check a given number is even or odd using the function.

#include<stdio.h>
void oddeven(int a){
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    oddeven(a);
    return 0;
}