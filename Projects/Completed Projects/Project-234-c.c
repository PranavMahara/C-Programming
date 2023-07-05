// Remove all occurences of a character from the string using pointers and functions
#include<stdio.h>

void occ(char *ptr, char jk){
    while(*ptr!='\0'){
        if(*ptr!=jk){
            printf("%c", *ptr);
        }
        ptr++;
    }
}

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char ap;
    printf("Enter a character whose occurences you want to remove --> ");
    scanf("%c", &ap);

    occ(abc, ap);

    
    return 0;
}