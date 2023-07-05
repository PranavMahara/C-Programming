// Write a program in C to print individual characters of string in reverse order.
#include<stdio.h>

int main(){
    int temp;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    char abc[n];
    printf("Enter a word--> ");
    scanf("%s", abc);

    char *ptr = abc;

    
    for(int i=0; i<(n/2); i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
    
    printf("The reversed word is %s", abc);
    return 0;
}