#include<stdio.h>

int main(){
    char p[] = "Arjun";
    // p = "Karan";     /*This will not work*/
    // printf("%s", p);

    char *a = "Arjun";
    a = "Karan";
    printf("%s", a);
    return 0;
}

// #include<stdio.h>

// int main(){
//     char str1[ ] = "Hello" ; 
//     char str2[10] ; 
//     char *s = "Good Morning" ; 
//     char *q ; 
//     str2 = str1 ; /* error */ 
//     q = s ; /* works */ 

//     return 0;
// }

// #include<stdio.h>

// main( ) 
// { 
//  char str1[ ] = "Hello" ; 
//  char *p = "Hello" ; 
//  str1 = "Bye" ; /* error */ 
//  p = "Bye" ; /* works */ 
// } 