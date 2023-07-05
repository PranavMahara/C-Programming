#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number, guess;
    int nguesses = 1;
    srand(time(0));  // This helps to generate random number after every second

    number = rand()%100 + 1 ; // This is for generation of random number //%100 +1 isliye kiya so that number 1 to 100 mein hi aaye varna rand() simple se bade number bhi aa sakte hai...

    

    // Keep running the loop until number is guessed

    do{
        printf("Guess a number between 1 and 100 --> ");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower Number Please! \n");

        }
        else if(guess<number){
            printf("Higher Number Please1 \n");

        }

        else{
            printf("You guessed it right in %d attempts.... \n", nguesses);

        }
        nguesses++;

    }while(guess!=number);
    return 0;
}