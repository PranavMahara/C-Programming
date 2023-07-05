// The macros can take function like arguments, the arguments are not checked for data type. 
// For example, the following macro INCREMENT(x) can be used for x of any data type.

#include <stdio.h>
#define INCREMENT(x) ++x

int main(){
    char *ptr = "Holababbuchak";
    int x = 10;

    printf("%s  ", INCREMENT(ptr)); // INCREMENT(ptr-1) // use this to print whole
    printf("%d", INCREMENT(x));
    return 0;
}
