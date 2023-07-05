// Write a C program to read a set of character from the user in an array. Pass the 
// address of this array to your function. This function will check if the string is
// palindrome

#include<stdio.h>
#include<string.h>

void palin(char *ptr, char *abc, int n){
    int temp;
    for(int i=0; i<(n/2); i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }

    if(strcmp(abc, ptr) == 0){
        printf("The string is palindrome");
    }
    else{
        printf("The string is not palindrome");
    }
}

int main(){
    char ab[100];
    printf("Enter the string --> ");
    gets(ab);

    char bcd[100];
    strcpy(bcd, ab);

    palin(ab, bcd, strlen(ab));

    return 0;
}