// Replace the first occurrence of a character with another in a string.

#include<stdio.h>
#include<string.h>


int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char ch;
    printf("Enter the character jise aap relpace karna chahte ho: ");
    scanf("%c", &ch);

    char ha;
    printf("Enter the replacement character: ");
    scanf(" %c", &ha);

    int a = strlen(abc);
    for(int i=0; i<a; i++){
        if(abc[i]==ch){
            abc[i] = ha;
            break;
        }
    }

    printf("%s", abc);

    return 0;
}