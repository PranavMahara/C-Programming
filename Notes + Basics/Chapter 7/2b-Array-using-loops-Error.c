#include<stdio.h>

int main(){
    char abc[6];

    for(int i=0; i<6; i++){
        printf("Enter the value of element %d --> \n", i+1);
        scanf("%c", &abc[i]);
    }

    for(int i=0; i<6; i++){
        printf("The entered element %d is %c \n", i+1, abc[i]);
    }
    return 0;
}