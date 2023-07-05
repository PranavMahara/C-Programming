#include<stdio.h>

int main(){
    char s[] = {'a', 'b', 'c', '\n', '\0'};
    char *p, *str, *str1;
    p = &s[3];

    str = p;
    str1 = s;
    printf("%d", ++*p + ++*str1 - 32);

    return 0;
}