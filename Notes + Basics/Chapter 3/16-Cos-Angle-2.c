#include<stdio.h>
#include<math.h>


int main(){
    for(float i=0; i<=18; i++){
        printf("The value of cos(%.0f) is %.2f \n", 10*i, cos(10*i*3.14159/180)); // Radian to Angle conversion ke liye *3.14159/180 
    }
    
    return 0;
}