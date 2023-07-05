#include<stdio.h>    // DO-WHILE LOOP

int main(){
    int i = 220;  // now condition changes and below condition is i<10 but i = 220 
                  // do while loop works very similar to while loop // while --> checks the condition first and then executes the code while do while --> executes the code and then checks the condition
                  // do while loop is while loop which executes at least once
                  // do while loop ek baar toh print kar hi dega bina condition check kare but while loop pehle check karega condition if condition satisfied then only voh code execute karega
                   
    do{
        printf("The value of i is %d \n", i);
        i++;

    }while(i<10);

    return 0;
}