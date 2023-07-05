// Remove the first and last occurrence of a character from the string.

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    int a = strlen(abc);

    char ab;
    printf("Enter the character which you want to remove: ");
    scanf("%c", &ab);

    for(int i=0; i<a; i++){
        if(abc[i]==ab){
            abc[i] = ' ';
            break;
        }
    }

    for(int i=(a-1); i>=0; i--){
        if(abc[i]==ab){
            abc[i] = ' ';
            break;
        }
    }
    printf("%s", abc);
    return 0;
}