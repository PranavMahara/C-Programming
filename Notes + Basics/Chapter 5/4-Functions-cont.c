#include<stdio.h>
void arjun();

int main(){
    printf("Entering the value of a from function\n");
    arjun();


    printf("The function is printed\n");
   
return 0;
}

void arjun(){
    int a;
    printf("The value of a is ");
    scanf("%d", &a);

    printf("The value of a is %d \n", a);
}