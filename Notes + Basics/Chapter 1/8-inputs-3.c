#include<stdio.h>

int main(){
    char ans;
    printf("Type Y or N --> ");
    scanf("%c", &ans);

    // printf("The character is %c", ans);
    if(ans == 'Y'){
        printf("Entered is Y");
    }
    return 0;
}