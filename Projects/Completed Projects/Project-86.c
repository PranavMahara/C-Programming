// Write a C program to test whether two lines are parallel or not. The four points are P(x1, y1), Q(x2, y2), R(x3, y3) and S(x4, y4), 
// check PQ and RS are parallel are not. Go to the editor
//  x1, y1, x2, y2, x3, y3, x4, y4 
// Each value is a real number with at most 5 digits after the decimal point.

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

    printf("------------------------------------- \n");

    printf("You have entered points P(%0.2f, %0.2f) \n", x1, y1);
    printf("You have entered points Q(%0.2f, %0.2f) \n", x2, y2);
    printf("You have entered points R(%0.2f, %0.2f) \n", x3, y3);
    printf("You have entered points S(%0.2f, %0.2f) \n", x4, y4);

    printf("-------------------------------------- \n");
    printf("Checking if PQ and RS are parallel \n");

    float a = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    printf("The length of PQ is %0.2f \n", pow(a, 0.5));

    float b = (x4-x3)*(x4-x3)+(y4-y3)*(y4-y3);
    printf("The length of RS is %0.2f \n", pow(b, 0.5));

   if(a==b){
       printf("PQ and RS are parallel");
   }

   else{
       printf("PQ and RS are not parallel");
   }

    return 0;
}
