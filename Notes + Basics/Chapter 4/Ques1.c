#include<stdio.h>

int main(){

    int n;
    printf("Please enter the value jiska aap table jaana chahte ho -- > ");
    scanf("%d", &n);

    int i = 1;

    

    while(i<=10){      
        printf("Multiplication table of %d is %d \n", n, i*n);
    i++;
    }


    return 0;
}