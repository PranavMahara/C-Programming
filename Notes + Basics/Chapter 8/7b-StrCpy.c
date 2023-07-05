#include<stdio.h>
#include<string.h>

int main(){
    char arjun[] = "ATG";
    char str[5];

    strcpy(str, arjun);
    printf("str is now %s", str);
    return 0;
}