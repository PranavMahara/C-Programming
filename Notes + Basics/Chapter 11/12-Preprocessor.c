// A token passed to macro can be converted to a string literal by using # before it.

#include <stdio.h>
#define get(a) #a
int main(){
    printf("%s", get(holihai));
}
