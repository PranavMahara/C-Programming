#include<stdio.h> 
void display(); // Function Prototype // ()-- kuch nhi input leta hai // void kuch nahi output deta hai 

int main(){

    printf("Initializing display funtion \n");
    display();    // Function Call
    printf("Display function finished its work \n");

    return 0;
}

void display(){
    printf("This is display \n"); // Function defination
}