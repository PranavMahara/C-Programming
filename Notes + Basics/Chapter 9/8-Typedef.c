#include<stdio.h>
typedef struct student{
    int roll_number;
    int Reg;
    char name[100];
} atg;

int main(){

    atg tenth[5];

    for(int i=0; i<5; i++){
        printf("Enter name of student -%d: ", i+1);
        scanf("%s", tenth[i].name);
        
        printf("Enter Roll Number of the child: ");
        scanf("%d", &tenth[i].roll_number);
        
        printf("Enter Reg Number of the child: ");
        scanf("%d", &tenth[i].Reg);
    }

    int k;
    printf("Enter the roll Number whose details u want to find: ");
    scanf("%d", &k);

    printf("Name of Student is %s \n", tenth[k-1].name);
    printf("Roll Number of Student is %d \n", tenth[k-1].roll_number);
    printf("Reg Number of Student is %d \n", tenth[k-1].Reg);
    
    return 0;
}