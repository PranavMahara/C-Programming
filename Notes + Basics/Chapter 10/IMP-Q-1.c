// Write a C program to read name and marks of n number of students from user and store them in a file

#include<stdio.h>
#include<stdlib.h>

int main(){
    char name[50];
    int n;
    printf("Enter the number of students --> ");
    scanf("%d", &n);
    FILE *ptr;
    ptr = fopen("Student.txt", "w");

    if(ptr == NULL){
        printf("Error");
        exit(1);
    }
    int marks;
    for(int i=0; i<n; i++){
        printf("Enter the name --> ");
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(ptr, "%s %d \n", name, marks);
    }
    fclose(ptr);
    return 0;
}