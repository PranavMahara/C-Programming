#include<stdio.h>
#define AREA(l, b)(l*b)

int main(){
    int l1 = 10, l2 = 20, area = 0;
    
    area = AREA(l1, l2);
    printf("Area of rectangle is %d", area);

    return 0;
}