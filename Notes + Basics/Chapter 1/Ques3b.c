// Fahrenheit to Celcius using user inputs

#include<stdio.h>

int main(){
    // If you want to take celcius in float then
    float Celcius;
    float b = 1.8;
    int c = 32;

    printf("What is the value of Temp in Celcius --> ", Celcius);
    scanf("%f", &Celcius);

    printf("F is %f", b*Celcius +c);

    return 0;
}


