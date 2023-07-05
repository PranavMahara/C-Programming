// Write a C program to find all numbers which are dividing by n and the remainder is equal to 2 or 3 between two given integer numbers. 

#include<stdio.h>

int main(){
    int a, b, n;
    printf("Enter the number between you want to find remainder 2 or 3 --> ");
    scanf("%d %d",&a, &b);

    printf("Enter the number jisse aap divide karoge: ");
    scanf("%d", &n);

    for(int a; a<=b; a++){
        if(a%n==2){
            printf("Number leaving remainder 2 --> %d \n", a);
        }  
    }

    printf("\n");
    printf("----------------------------------------------------------\n");
    printf("\n");

    for(a; a<=b; a++){
        if(a%n==3){
            printf("Number leaving remainder 3 --> %d \n", a);
        }
    }
    return 0;
}