// Write a C program to create enumerated data type for 7 days and display their values in integer constants.
// Sun = 0
// Mon = 1
// Tue = 2
// Wed = 3
// Thu = 4
// Fri = 5
// Sat = 6

#include<stdio.h>

int main(){
    int num;
    printf("Enter number ranging from 0 to 7: ");
    scanf("%d", &num);

    switch(num){
        case 0:
        printf("It is Sunday");
        break;
        
        case 1:
        printf("It is Monday");
        break;
        
        case 2:
        printf("It is Tuesday");
        break;
        
        case 3:
        printf("It is Wednesday");
        break;
        
        case 4:
        printf("It is Thursday");
        break;
        
        case 5:
        printf("It is Friday");
        break;
        
        case 6:
        printf("It is Saturday");
        break;
    }
    return 0;
}