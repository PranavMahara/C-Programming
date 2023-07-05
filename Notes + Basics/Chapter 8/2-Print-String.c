#include<stdio.h>

int main(){
    
    char str[] = "Arjun";
    char *ptr = str; // or &str[0]
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

    // int a = strlen(str);

    // for(int i=0; i<a; i++){
    //     printf("%c", str[i]);
    // }
 
    return 0;
}