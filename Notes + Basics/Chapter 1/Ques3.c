// Fahrenheit to Celcius

#include<stdio.h> // F=(1C × 9/5) + 32

int main(){
    int celcius;
    float b = 1.8;
    int c = 32;

    printf("What is the value of Temp in Celcius \n", celcius);
    scanf("%d", &celcius);

    printf("F is %f", b*celcius +c);
    


    return 0;
}  