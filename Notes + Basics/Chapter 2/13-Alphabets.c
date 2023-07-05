#include<stdio.h>
#include<ctype.h>

int main(){
    char alpha;
    printf("Enter any alphabet: ");
    scanf("%c", &alpha);

    if(islower(alpha)){
        printf("%c", toupper(alpha));
    }

    if(isupper(alpha)){
        printf("%c", tolower(alpha));
    }
    
    return 0;
}

// #include<stdio.h>
// #include<ctype.h>

// int main(){
//     char alp;
//     printf("Enter the alphabet --> ");
//     alp = getchar();
//     if(islower(alp))
//     putchar(toupper(alp));
//     else
//     putchar(tolower(alp));
//     return 0;
// }