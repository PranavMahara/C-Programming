// Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>

int main(){
    int vowel = 0, cons = 0;
    char name[200];
    printf("Enter your name: ");
    gets(name);
    

    char *ptr = name;

    while(*ptr!='\0'){
        if(*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'){
            vowel++;
            ptr++;
        }
        else{
            cons++;
            ptr++;
        }
    }

    printf("Total number of vowels and consonants are %d and %d", vowel, cons);
    return 0;
}