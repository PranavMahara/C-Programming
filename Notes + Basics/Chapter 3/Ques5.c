#include<stdio.h>

int main(){
    char c;
    printf("Enter any character to check whether entered character is in lowercase or uppercase --> ");
    scanf("%c", &c);

    if(c<=122 && c>=97){
        printf("Enter character is in lowercase");
    }

    else{
        printf("Entered character is in uppercase");
    }
    return 0;
}