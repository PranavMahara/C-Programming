// Compare two strings using pointers

#include<stdio.h>
#include<string.h>

int main(){
    char result;
    char abc[100];
    printf("Enter String-1 --> ");
    gets(abc);

    char bcd[100];
    printf("Enter String-2 --> ");
    gets(bcd);

    char *ptr = abc;
    char *pt = bcd;

    while(*ptr==*pt){
      if ( *ptr == '\0' || *pt == '\0' )
         break;
 
      ptr++;
      pt++;
   }
   
   if(*ptr == '\0' && *pt == '\0')
        return 0;
   else
        return -1;

    if ( result == 0 )
            printf("Both strings are same.\n");
    else
            printf("Entered strings are not equal.\n");
    
    return 0;
}