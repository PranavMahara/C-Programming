#include<stdio.h>

int main(){
    const int atg = 123;
    // atg = 2345; // Not possible error aa jaega because u can not change constant

    const char abc = 'u';
    // abc = 'y'; // Not possible error aa jaega because u can not change constant



    int arjun = 345;
    arjun = 3498573;   // variable ko u can change

    char a = 'y';
    a = 'j'; // u can change a variable

    printf("The value of arjun is %d \n", arjun);
    printf("The value of a is %c \nf", a);
    

    return 0;
}