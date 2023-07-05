// Collection of similar items is arrays
 #include<stdio.h>
 
 int main(){
    int marks[5];    // here 4 represents that we can store 4 values starting from 0 then 1, 2, 3
    marks[0] = 34;
    marks[1] = 34;
    marks[2] = 54;
    marks[3] = 454; // it can be float and char as well.
    printf("Marks for 5th student is --> ");
    scanf("%d", &marks[4]);

    printf("Marks is: %d \n", marks[1]);
    printf("Marks is: %d \n", marks[4]);
 

    return 0;
 }