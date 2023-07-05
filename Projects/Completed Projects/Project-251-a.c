//  A String is Palindrome or Not

#include<stdio.h>
#include<string.h>

int main(){
    int temp;

    char abc[100];
    printf("Enter a string--> ");
    gets(abc);

    char bcd[100];
    strcpy(bcd, abc);

    char *ptr = abc;
    int n = strlen(abc);

    for(int i=0; i<(n/2); i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
    
    // printf("The reversed string is %s \n", abc);
    // printf("The original string is %s", bcd);

    if(strcmp(abc, bcd) == 0){
        printf("The string is palindrome");
    }
    else{
        printf("The string is not palindrome");
    }
    return 0;
}