// Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.

#include<stdio.h>

int main(){
    char s[10];   // 10 words tak ka string aaega bas
    printf("Enter your name: ");
    gets(s);

    int age;
    printf("Enter Student's Age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Yeah! The person is eligible to vote");
    }
    else{
        printf("Time hai abhi, wait");
    }
    return 0;
}
