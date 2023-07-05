#include<stdio.h>

int main(){
    int year;
    printf("Please Enter Year ---> ");
    scanf("%d", &year);

    if(year%4==0){
        printf("This is a leap year");
    }

    else{
        printf("Sorry this is not a leap year");
    }

    return 0;
}