// Write a C program to calculate the root of a Quadratic Equation. Go to the editor
// Test Data : 1 5 7

#include<stdio.h> 
#include<math.h>

int main(){
    float a, b, c;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    float d = b*b - 4*a*c;
    
    if(d<0){
        printf("Roots are imaginary... \n");
        float RP = -b/(2*a);
        float IMG = sqrt(-d)/(2*a);
        printf("The roots are  %.2f+%.2fi and %.2f-%.2fi", RP, IMG, RP, IMG);
    }
    else if(d==0){
        printf("Roots are equal... \n");
        printf("Roots --> %.2f", -b/(2*a));
    }
    else if(d>0){
        printf("Roots are distinct");
        float R_1 = (-b+sqrt(d))/(2*a);
        float R_2 = (-b-sqrt(d))/(2*a);
        printf("Root-1 = %.2f and Root-2 = %.2f", R_1, R_2);
    }
    return 0;
}
