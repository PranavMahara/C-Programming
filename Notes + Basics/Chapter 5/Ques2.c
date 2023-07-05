#include<stdio.h>

int main(){
    float celcius, fahrenheit;
    printf("Please enter the value of temperature in Celcius---> ");
    scanf("%f", &celcius);

    printf("The value of temperature in fahrenheit is %f", 0.556*celcius-17.6);



    return 0;
}