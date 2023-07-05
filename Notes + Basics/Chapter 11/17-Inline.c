// A header file may be included more than one time directly or indirectly, this leads to problems of redeclaration of same variables/functions. 
// To avoid this problem, directives like defined, ifdef and ifndef are used. 

// There are some standard macros which can be used to print 
// program file (__FILE__), Date of compilation (__DATE__), Time of compilation (__TIME__) and Line Number in C code (__LINE__)

#include <stdio.h>
 
int main(){
   printf("Current File : %s\n", __FILE__ );
   printf("Current Date : %s\n", __DATE__ );
   printf("Current Time : %s\n", __TIME__ );
   printf("Line Number : %d\n", __LINE__ );
   return 0;
}
