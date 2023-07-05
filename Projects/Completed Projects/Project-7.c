// Write a program to enter a 4 digit number from keyboard. 
// Add 8 to the number and then divide it by 3. 
// Take the asbolute value. Display the final result.


#include<stdio.h>

int main(){
    int a;
    printf("Enter 4 digit number--> ");
    scanf("%d", &a);

    printf("Adding 8 to %d, it gets %d \n", a, a+8);
    float y = (a+8)/3.0;
    printf("Dividing the number by 3, it gets %f \n", abs(y));
    
    return 0;
}