ˍˍ// Remove all occurences of a character from the string using pointers

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char b;
    printf("Enter the character: ");
    scanf("%c", &b);

    char *ptr = abc;

    int a = strlen(abc);
    for(int i=0; i<a; i++, ptr++){
        if(ptr[i]==b){
            ptr[i]=ptr[i+1];
            a--;
        }
    }

    printf("%s", abc);
    return 0;
}