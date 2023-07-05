// String Char-Case Change

#include <stdio.h>
#include <string.h>
int main()
{
   char string[1000];
   
   printf("Input a string to convert to upper case\n");
   gets(string);
   
   printf("The string in upper case: %s\n", strupr(string));

   printf("The string in lower case: %s\n", strlwr(string));
   
   return  0;
}