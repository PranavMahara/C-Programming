// Write a C program which reads the two adjoined sides and the diagonal of a parallelogram and 
// check whether the parallelogram is a rectangle or a rhombus.

#include<stdio.h>
#include<math.h>

int main(){
    float x1, x2, x3, x4, y1, y2, y3, y4;
    printf("Enter the value of x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the value of x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the value of x3 and y3: ");
    scanf("%f %f", &x3, &y3);

    printf("Enter the value of x4 and y4: ");
    scanf("%f %f", &x4, &y4);

    float a = pow(pow(x2-x1, 2)+pow(y2-y1, 2), 0.5);
    float b = pow(pow(x3-x2, 2)+pow(y3-y2, 2), 0.5);
    float c = pow(pow(x4-x3, 2)+pow(y4-y3, 2), 0.5);
    float d = pow(pow(x4-x1, 2)+pow(y4-y1, 2), 0.5);

    float e = pow(pow(x3-x1, 2)+pow(y3-y1, 2), 0.5);
    float f = pow(pow(x4-x2, 2)+pow(y4-y2, 2), 0.5);

    printf("The side AB is %.2f \n", a);
    printf("The side BC is %.2f \n", b);
    printf("The side CD is %.2f \n", c);
    printf("The side DA is %.2f \n", d);
    printf("The diagonal AC is %.2f \n", e);
    printf("The diagonal BD is %.2f \n", f);

    if(f==e){
        printf("It is Rectangle");
    }
    else{
        printf("It is a parallelogram");
    }
    return 0;
}