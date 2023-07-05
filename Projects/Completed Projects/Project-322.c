// Write a program in C to reverse a string using recursion.

# include <stdio.h>
 
void reverse(char *str){
    if (*str){
        reverse(str+1);
        printf("%c", *str);
    }
}

int main(){
    char a[100];
    printf("Enter the string --> ");
    gets(a);
    reverse(a);

    return 0;
}