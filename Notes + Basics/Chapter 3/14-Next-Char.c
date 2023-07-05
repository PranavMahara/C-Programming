#include<stdio.h>

int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    a++;
    printf("The next character is %c", a);
    return 0;
}