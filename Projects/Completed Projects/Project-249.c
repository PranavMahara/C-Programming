// Write a C program to sort a string array in ascending order

#include<stdio.h>
#include<string.h>

int main(){
    char temp;
    char abc[100];
    printf("Enter string: ");
    gets(abc);

    char atg = abc[0];

    int a = strlen(abc);

    for(int i=0; i<a; i++){
        for(int j = i+1; j<a; j++){
            if(abc[j]<abc[i]){
                temp = abc[i];
                abc[i] = abc[j];
                abc[j] = temp;
            }
        }
    }

    printf("The string(ascending) is %s", abc);
    return 0;
}