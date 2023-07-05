#include<stdio.h>

int main(){

    int n =5;
        
    int i;
    printf("Enter the value of i --> ");
    scanf("%d", &i);
    
    
    do{
        if(i<n){    
            printf("%d \n", i);
            i++;
        }
    }while(n);
    return 0;
}