// Replace the first occurrence of a character with another in a string and functions
// ERROR
#include<stdio.h>
#include<string.h>

void rem(char *ptr, char *ab){
    while(*ptr!='\0'){
        if(*ptr==*ab){
            printf("");
        }
        break;
    }
}

int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);

    char ab;
    printf("The character you want to remove --> ");
    scanf("%c", &ab);
    int a = strlen(str);

    rem(str, &ab);

    for(int i=0; i<a; i++){
        printf("%c", str[i]);
    }
    
    return 0;
}