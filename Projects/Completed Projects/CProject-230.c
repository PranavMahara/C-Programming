// // Write a program in C to extract a substring from a given string. Go to the editor

// Test Data :
// Input the string : this is test string
// Input the position to start extraction :9
// Input the length of substring :4

// Expected Output :

// The substring retrieve from the string is : " test " 

#include<stdio.h>

int main(){
    char str[100];
    printf("Enter the string --> ");
    gets(str);

    int pos;
    printf("Input the position to start extraction: ");
    scanf("%d", &pos);

    int len;
    printf("The length of string: ");
    scanf("%d", &len);

    char *ptr = str;

    for(int i=pos; i<len; i++){
        printf("%c", ptr[i]);
    }


    return 0;
}