#include<stdio.h>

int main(){
    char s1[] = "arjun";
    char s2[] = "karan";
    // s1 = s2; /*Compiler Error*/
    s1 == s2; 
    printf("%s %s", s1, s2);
    return 0;
}