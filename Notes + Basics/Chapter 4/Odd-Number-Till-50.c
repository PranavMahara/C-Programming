#include<stdio.h>     // Print Odd natural numbers till 50

int main(){
    int n = 50;
    int a = 1;
    
    while((a%2!=0) && (a<n)){
        printf("Printing odd Numbers %d \n", a);
        a+=2;
    }
    return 0;
}

    


