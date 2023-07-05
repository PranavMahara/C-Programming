// Trim both leading and trailing white space characters from a given string

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    int k = strlen(abc);

    for(int i=0; i<k; i++){
        if(((abc[i]>=65 && abc[i]<=90) || (abc[i]>=97 && abc[i]<=122))){
            continue;
            printf("%c", abc[i]);
        }
        else{
            
        }
    }

    return 0;
}