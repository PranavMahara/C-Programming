// The total number of students in a class are 45 out of which 25 are boys. 
// If 80% of the total students secured grade 'A' out of which 15 are boys, 
// then write a program to calculate the total number of girls getting grade 'A'.


#include<stdio.h>

int main(){
    float boys, girls, total, boy_grade, girl_grade;
    
    printf("Enter the total strength of class--> ");
    scanf("%f", &total);

    printf("Enter the total number of boys in class--> ");
    scanf("%f", &boys);

    printf("Enter the total number of girls in class--> ");
    scanf("%f", &girls);

    float y = 0.8*total; // 80/100 --> 0.8

    printf("The number of students which secured Grade-A are %f \n", y);
    printf("Total numbers of boys which got Grade-A are--> ");
    scanf("%f", boy_grade);

    printf("Total numbers of girls which got Grade-A are %f", y - boy_grade);

    return 0;
}