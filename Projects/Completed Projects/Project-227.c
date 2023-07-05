// Count the sum of numbers in a string using functions

#include<stdio.h>
#include<string.h>

void fun(char *ptr, int len, int *sum){
    *sum = 0;
    for(int i=0; i<len; i++, ptr++){
        if ((*ptr >= '0') && (*ptr <= '9')){
            *sum += (*ptr - '0');
        }
    }
}

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);
    int k = strlen(abc);
    int sm;

    fun(abc, k, &sm);
    printf("Sum of numbers in string --> %d", sm);


    return 0;
}