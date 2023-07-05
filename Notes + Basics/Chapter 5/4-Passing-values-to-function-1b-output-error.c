#include<stdio.h>
int difference(int a, int b);
float multiply(float a, float b);

int main(){
    printf("The difference value is %d \n", difference(14,1));

    printf("Multiplication is %f", multiply(3.4, 1.2));
       
return 0;
}

int difference(int a, int b){
    return a-b;
}

float multiply(float a, float b){
    return (float)a*b;
}