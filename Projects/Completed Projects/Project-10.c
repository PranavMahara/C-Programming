// If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), 
// write a program to calculate his total marks and percentage marks.

#include<stdio.h>

int main(){
    int Marks, Maths, Chemistry, Physics;
    
    printf("The Marks in Physcis are --> ");
    scanf("%d", &Physics);

    printf("The Marks in Chemistry are --> ");
    scanf("%d", &Chemistry);

    printf("The Marks in Maths are --> ");
    scanf("%d", &Maths);

    int a = Physics+Chemistry+Maths;

    printf("The Total Marks is %d \n", a);

    printf("The percentage of the student is %.2f percent", (float)a*100/300);


    return 0;
}