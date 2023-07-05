// Write a program in C to remove characters in String Except Alphabets

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    int a = strlen(abc);

    for(int i=0; i<a; i++){
        if((abc[i] >= 'a' && abc[i] <= 'z') || (abc[i] >= 'A' && abc[i] <= 'Z')){}
        else{
            abc[i]=abc[i+1];
            a--;
        }
    }

    printf("%s", abc);
    return 0;
}