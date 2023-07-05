// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

#include<stdio.h>

int main(){
    float attendance;

    printf("Total Number of Days are 180 \n");

    printf("Enter the number of days attended by the student: ");
    scanf("%f", &attendance);

    printf("The candidate requires 75 percent attendance to sit for the examinations \n");
    printf("The attendence of the student is %.2f \n", (attendance/180)*100);  

    if(attendance>=135){
        printf("Your cild can sit in the examination");
    }

    else if(attendance<135){
        printf("You are not eligible to sit in the examination \n");

        printf("You are eligible to sit in examination if the child has medical complications \n");
    }

    return 0;
}

