#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int m = 78;
    int number;

    while(m<number){
    srand(time(0));  // This helps to generate random number after every second
    
    number = rand()%100 + 1; // This is for generation of random number
    }
    printf("The value of random number is %d \n", number);
    return 0;
}








// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
    
//     int number;

//     srand(time(0));  // This helps to generate random number after every second
    
//     number = rand(); // This is for generation of random number
//     printf("The value of random number is %d \n", number);
    
//     return 0;
// }