#include<stdio.h>  // S.I. = P × R × T

int main(){
        int principle, ROI, Time;
        int a = 100;

        printf("Please enter the Principle Amount ", principle);
        scanf("%d", &principle);

        printf("Please enter the Rate of Interest ", ROI);
        scanf("%f", &ROI);

        printf("Please enter the Time ", Time);
        scanf("%d", &Time);

        printf("Simple Interest is %f", (principle*ROI*Time)/a);

    return 0;
}
 // If Your principle is in decimal use float as described in Ques 1 2 3
