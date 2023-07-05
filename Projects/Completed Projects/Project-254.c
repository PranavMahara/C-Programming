// // Write a program in C to split string by space into words. Go to the editor
// Test Data :
// Input a string : this is a test string
// Expected Output :

// Strings or words after split by space are : 

// this
// is 
// a 
// test 
// string .

#include<stdio.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char *ptr = abc;

    while(*ptr!='\0'){
        if(*ptr == 32){
            printf("\n");
        }
        else{
            printf("%c", *ptr);
        }
        ptr++;
    }

    return 0;
}