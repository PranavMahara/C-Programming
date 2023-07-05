// Write a C program that accepts an integer and print next ten consecutive odd and even numbers.

#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int k = a;

    for(int i=0; i<10; i++, k+=2){
        printf("%d ", k);
    }

    printf("\n");
    k = a;
    for(int i=0; i<10; i++, k+=2){
        printf("%d ", k+1);
    }
    
    return 0;
}

//  while(i<=n){
    //     if(i%2==0){
    //         printf("Even consecutive numbers --> %d \n", n+i);
    //     }
        
    //     else{
    //         printf("Odd consecutive numbers --> %d \n", n+i);
    //     }
    //     i+=2;
    // }