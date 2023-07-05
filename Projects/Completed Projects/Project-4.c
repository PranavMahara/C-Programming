// What would be the output of:
// printf("%d\n",1==5==5);

#include<stdio.h>

int main(){
    printf("%d \n", 1==5==5); // it will print 0 which shows it is false as 0 represents false, 1 represents true..... 1 is not equal to 5
    return 0;
}