// Finding the first and last occurence of a character in a string

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char ch;
    printf("Enter the word --> ");
    scanf("%c", &ch);

    int n;
    n = strlen(abc);

    for(int i=0; i<n; i++){
        if(abc[i]==ch){
            printf("First occurence of %c is at position --> %d",ch , i+1);
            break;
        }
    }
    printf("\n");
    for(int i=n; i>=0; i--){
        if(abc[i]==ch){
            printf("Last occurence of %c is at position --> %d",ch , i+1);
            break;
        }
    }

    return 0;
}