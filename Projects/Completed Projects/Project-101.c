// Take input of age of 3 people by user and determine oldest and youngest among them.

#include<stdio.h>

int main(){
    int temp;
    int age[3];
    for(int i=0; i<3; i++){
        printf("Enter the age of person %d --> ", i+1);
        scanf("%d", &age[i]);
    }

    int oldest = age[0];
    int youngest = age[0];

    for(int i=0; i<3; i++){
        if(oldest<age[i]){
            oldest = age[i];
        }
    }

    for(int i=0; i<3; i++){
        if(youngest>age[i]){
            youngest = age[i];
        }
    }

    printf("The oldest is %d \n", oldest);
    printf("The youngest is %d", youngest);

    
    return 0;
}
// # CHOMU METHOD
// if(age[0]>age[1] && age[0]>age[2]){
    //     printf("Person 1 is oldest");
    // }
    // else if(age[1]>age[0] && age[1]>age[2]){
    //     printf("Person 2 is oldest");
    // }
    // else if(age[2]>age[0] && age[2]>age[1]){
    //     printf("Person 3 is oldest");
    // }

    // printf("\n");

    // if(age[0]<age[1] && age[0]<age[2]){
    //     printf("Person 1 is youngest");
    // }
    // else if(age[1]<age[0] && age[1]<age[2]){
    //     printf("Person 2 is youngest");
    // }
    // else if(age[2]<age[0] && age[2]<age[1]){
    //     printf("Person 3 is youngest");
    // }

