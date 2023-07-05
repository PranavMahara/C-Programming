// Write a program to print “Hello World” in the main function and “Welcome To C” in another function

#include<stdio.h>
void fun(){
    printf("Welcome To C \n");
}

int main(){
    printf("Hello World \n");
    fun();
    return 0;
}