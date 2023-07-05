// Write a C program that accepts a positive integer n less than 100 from the user and 
// Print a random number between 1 and n

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n>100){
        printf("Arey 100 se kam daalne ko bola hai");
    }
    
    else{
            int lower = 1, upper = n, count = 1;   //  You can also take limit using scanf
            int m;
            srand(time(0));
            for (int i = 0; i < count; i++) {
                m = (rand() % (upper - lower + 1)) + lower;
            }

            printf("%d", m);
    }
    


    return 0;
}