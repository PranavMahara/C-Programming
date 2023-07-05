// 2 types of Function Call 1) Call by value 2) Call by reference
// Call by value is Sending the values of arguements

#include<stdio.h>
int sum(int a, int b);

int main(){
    int a = 4, b = 7;
    printf("The value of 4+7 is %d \n", sum(a,b));

    return 0;
}

int sum(int a, int b){
    return a+b;   // int c;    // yeh bhi kar sakte ho
                  // c = a+b;
    
}

