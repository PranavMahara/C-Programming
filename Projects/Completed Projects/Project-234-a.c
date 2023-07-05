// Remove all occurences of a character from the string

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char b;
    printf("Enter the character: ");
    scanf("%c", &b);

    int a = strlen(abc);
    for(int i=0; i<a; i++){
        if(abc[i]==b){
            abc[i]=abc[i+1];
            a--;
        }
    }

    printf("%s", abc);
    return 0;
}