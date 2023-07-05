// Count all occurrences of a character in a given string

#include<stdio.h>

int main(){
    int count = 0;
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char ch;
    printf("Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);


    char *ptr = abc;
    while(*ptr!='\0'){
        if(*ptr == ch){
            count++;
        }
        ptr++;
    }

    printf("The total are %d", count);
    return 0;
}