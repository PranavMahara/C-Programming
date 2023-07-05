#include<stdio.h>

struct arjun{
    int marks;
    char name[100];
};

int main(){
    struct arjun s1;

    printf("Enter the marks of s1: ");
    scanf("%d", &s1.marks); 

    printf("Enter the name of student: ");
    scanf("%[^\n]s", s1.name);

    printf("\n");
    printf("\n");

    if(s1.marks>100){
        printf("Marks can't be more than 100 \n");
    }
    else{
    printf("The marks of %s is %d \n", s1.name, s1.marks);
    }
    
    return 0;
}