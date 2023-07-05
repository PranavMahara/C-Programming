#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d \n", ++a); // ++a pehle increase and print

    printf("%d \n", a++); // a++ pehle print then increase

    printf("%d \n", --a); // --a pehle decrease and print

    printf("%d \n", a--); // a-- pehle print and decrease


    // so it is like a = 4 then ++a --> a becomes 5 then a++, a will increase but a++ toh 5 hi aaega print mein but a ki value 6 hojaegi then --a, a will become 5 so 5 print hoga then a--, a=5 print hoga but jab next aap 'a' ko print kroge toh a=4 aaega!!

    printf("%d", a);
    return 0;
}