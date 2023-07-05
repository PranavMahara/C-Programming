#include <stdio.h>
#include <string.h>

int main() {
    char N[20]   ;
    printf("Enter the first string : ");  
    scanf("%s", N); 

    char str1[] = "ram";
    int result;

    // comparing strings str1 and str2
    result = strcmp(N, str1);

    if (result == 0){
        printf("lets play cricket");
    }

    else{
        printf("invalid");
    }
    return 0;
}