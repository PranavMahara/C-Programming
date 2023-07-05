// Put all occurrences of a character with another in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char temp;
    char abc[100];
    char cha, rep;

    printf("Enter a string: ");
    gets(abc);

    printf("Enter the word jisko aap replace karna chahte ho: ");
    scanf("%c", &cha);   

    printf("Enter the word jisko jis ke sath replace karoge: ");
    scanf(" %c", &rep); // Use space like (space) %c between 2 scanfs


    for(int i=0; i<strlen(abc); i++){
        if(abc[i]==cha){
            temp = abc[i];
            abc[i] = rep;
            rep = temp;
        }
    }

    printf("The string is %s", abc);

    return 0;
}