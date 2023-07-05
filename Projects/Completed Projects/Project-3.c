// What would be the value of 'a':
// a. float a = 10/45*23%45/(45%4*21)

// b. float a = 10+45.0*23-45+(4*21.0)

// Ans - 

// WE WILL USE THE RULE OF ASSOCIATIVITY!!!!

#include<stdio.h>

int main(){

    float a = 10/45*23%45/(45%4*21);
    float b = 10+45.0*23-45+(4*21.0);

    printf("%.2f \n", a);
    printf("%.2f", b);

    return 0;
}
