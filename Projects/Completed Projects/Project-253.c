// Count occurrences of a character in a given string.

#include<stdio.h>
#include<string.h>

int main(){
    int count = 0;
    char abc[1000];
    printf("Enter the string: ");
    gets(abc);

    char bcd;
    printf("Enter the character: ");
    scanf("%c", &bcd);

    for(int i=0; i<strlen(abc); i++){
        if(abc[i] == bcd){
            count++;
        }
    }

    printf("The value of count of the word %c is %d", bcd, count);
    return 0;
}