// C program to check even or odd number using switch case

#include<stdio.h>

int main(){
    int a;
    printf("Enter the number a: ");
    scanf("%d", &a);

    switch(a%2){
        case 0:
        printf("Even");
        break;

        case 1:
        printf("Odd");
        break;
    }
    return 0;
}