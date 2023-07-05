// //Replace the last occurrence of a character with another in a string with pointers and functions

#include<stdio.h>
#include<string.h>

void chang(char *ptr, int a, char ch, char ha){
     for(int i=(a-1); i>=0; i--){
        if(ptr[i]==ch){
            ptr[i] = ha;
            break;
        }
    }
}

int main(){
    char inp[100];
    printf("Enter the string --> ");
    gets(inp);

    char ch;
    printf("Enter the character jise aap relpace karna chahte ho: ");
    scanf("%c", &ch);

    char ha;
    printf("Enter the replacement character: ");
    scanf(" %c", &ha);
    
    chang(inp, strlen(inp), ch, ha);
    return 0;
}