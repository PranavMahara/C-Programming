// Write a C program to check whether an alphabet is a vowel or consonant.

#include<stdio.h>

int main(){
    char c;
    printf("Enter any character to check whether entered character is a vowel or consonant --> ");
    scanf("%c", &c);

    if(c==65|| c==69 || c== 73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117 ){
        printf("Entered character is a vowel");
    }

    else{
        printf("Entered character is a consonant");
    }
    return 0;
}