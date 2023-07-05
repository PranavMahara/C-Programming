// Write a C program to find the eligibility of admission for a professional course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and 
// Total in all three subject >=190 or Total in Maths and Physics >=140 
//  Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 
// Total marks of Maths, Physics and Chemistry : 188 
//  Total marks of Maths and Physics : 137 The candidate is not eligible.

#include<stdio.h>

int main(){
    int maths, chemistry, physics, marks;
    printf("Enter Marks in Maths: ");
    scanf("%d", &maths); 

    printf("Enter Marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemistry);

    marks = maths+physics+chemistry;

    printf("Total Marks are %d \n", marks);

    if(marks>=190 || maths+physics>=140 && (maths>=65 && physics>=55 && chemistry>=50)){
            printf("Candidate PASS");
    }
    else{
        printf("Candidate FAIL");
    }


    return 0;
}