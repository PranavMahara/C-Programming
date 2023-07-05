// Find the last occurrence of a word in a given string.

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter a string: ");
    gets(abc);

    int a = strlen(abc);

    char bcd[20];
    printf("Enter the word --> ");
    gets(bcd);

    int b = strlen(bcd);

    for(int i=0; i<a; i++){
        for(int j=i+1; j<=b; j++){
            if(bcd[j]==abc[i]){

            }
        }
    }

    return 0;
}