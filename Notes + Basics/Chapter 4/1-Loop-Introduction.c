#include<stdio.h> // WHILE LOOP

int main(){
    int a;
    printf("The value of a is? \n");
    scanf("%d", &a);
    
    while(a<10){      // Code will execute only if a is less than 10 condition (a<10) must betrue
        printf("a ki value is %d \n", a);
        a++; // a = a + 1, a-- = a - 1
    }
    return 0;
}