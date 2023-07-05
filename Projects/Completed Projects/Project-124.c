// write a program to compute and display the sum of all integer that are divisble by 6 but not divisible by 4 
// and lie between 0 and 100. the program should also count and display the number of such values.


#include<stdio.h>

int main(){
    int a, b, num = 0, sum = 0;
    printf("Enter the value of a and b --> ");
    scanf("%d %d", &a, &b);

    while(a<=b){
        if(a%6==0 && a%4!=0){
            printf("%d \n", a);
            sum = sum + a;
            num = num + 1;
        }
        a++;
    }
    printf("Total numbers --> %d and the sum is %d", num, sum);

    return 0;
}