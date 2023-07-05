// Write a C program to read the coordinates(x, y) (in Cartesian system) 
// find the quadrant to which it belongs 
// (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).

#include<stdio.h>

int main(){
    int x, y;
    printf("Enter the value of x --> ");
    scanf("%d", &x);

    printf("Enter the value of y --> ");
    scanf("%d", &y);

    if(x>0 && y>0){
        printf("The point lies in 1st quadrant");
    }

    else if(x<0 && y>0){
        printf("The point lies in 2nd quadrant");
    }

    else if(x<0 && y<0){
        printf("The point lies in 3rd quadrant");
    }

    else if(x>0 && y<0){
        printf("The point lies in 4th quadrant");
    }

    return 0;
}