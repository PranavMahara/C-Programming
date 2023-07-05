//  Write a program in C to print the current time.

#include<stdio.h>
#include<time.h>

int main(){
    time_t t;   
    time(&t);

    printf("Date and Time: %s", ctime(&t));
    return 0;
}