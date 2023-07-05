#include<stdio.h>
#include<string.h>

int main(){
    char abc[1000];
    printf("Enter string: ");
    gets(abc);

    char bcd[1000];
    printf("Enter string: ");
    gets(bcd);

    // strlwr(abc);                                    // TO LOWER CASE
    // printf("The string is (%s)", abc);


    // strupr(abc);                                    // TO UPPER CASE
    // printf("The string is (%s)", abc);


    // strrev(abc);                                     // String Reverse
    // printf("The string is (%s)", abc);


    strncat(abc, bcd);                                       // String Concatenate
    printf("The string is (%s)", abc);


   //  Stricmp()  (Case In-Sensitive Compare)
   // Strncmp() Compare & Chars
   // Strncpy() Copy N Char
   // Strstr() Function (Sub-String)

    return 0;
}