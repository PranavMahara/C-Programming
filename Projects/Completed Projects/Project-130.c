// Write a program in C to check a given number is even or odd using the function.

#include<stdio.h>
void oddeven(int a);

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    oddeven(a);
    
    
    return 0;
}

void oddeven(int a){
    
    if(a%2==0){
        printf("%d is even", a);
    }
    else{
        printf("%d is odd", a);
    }

}

