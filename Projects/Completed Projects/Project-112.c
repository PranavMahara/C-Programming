// Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot
// Test Data :
// 42
// Expected Output :
// Its very hot.

#include<stdio.h>

int main(){

    int Temp;
    printf("Enter Temperature: ");
    scanf("%d", &Temp);

    if(Temp<=0){
        printf("Freezing weather");
    }

    else if(Temp<=10){
        printf("Cold weather");
    }

    else if(Temp<=20){
        printf("Very Cold Temperature");
    }

    else if(Temp<=30){
        printf("Normal Temperature");
    }

    else if(Temp<=40){
        printf("Its Hot");
    }

    else if(Temp<=50){
        printf("Its very Hot");
    }

    return 0;
}