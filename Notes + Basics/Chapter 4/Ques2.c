#include<stdio.h> // Multiplication Table in reverse order

int main(){

    int n;
    printf("Please enter the value jiska aap table jaana chahte ho -- > ");
    scanf("%d", &n);

    int i = 10;

    
    // USING WHILE LOOP 
    while(i<=10 && i>=0){      
        printf("Multiplication table of %d is %d \n", n, i*n);
        i--;
    }

    

    return 0;
}