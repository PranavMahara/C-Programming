#include<stdio.h>

int main(){
    int Acceleration , Mass;
    printf("Please enter the value of Acceleration(in m/s^2) ---> ");
    scanf("%d", &Acceleration);

    printf("Please enter the value of mass(in Kg) ---> ");
    scanf("%d", &Mass);

    printf("Force of attraction(in Newton) ---> %d \n", Mass*Acceleration);


    return 0;
}