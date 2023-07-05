#include<stdio.h> // V.V.V.V.V.V.V.V.V.V.V IIIMMMPPP

int main(){
    int a = 100;
    printf("The values are %d %d %d \n", a, ++a, a++); // Arguement is from right to left // IMPORTANT...........................
    return 0;                                          // Arguement depends from compiler to compiler some have from left to right and some right to left
}