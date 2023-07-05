// // Write a C program to define a union with tag state with fields state name, number of 
// districts and total population. Read and display the data

#include<stdio.h>
#include<conio.h>

union state{ // with union we can show only one data-type so i am showing population
    char state[100];
    int population, nodistricts;
};

int main(){
    union state s[5];
    int n;
    printf("Enter total number of states : ");
    scanf("%d", &n);
    printf("\n");

    for(int i=0; i<n; i++){
        printf("Enter data for state %d \n\n", i+1);
        printf("State : ");
        scanf("%s", s[i].state);

        printf("Number of districts : ");
        scanf("%d", &s[i].nodistricts);

        printf("Population : ");
        scanf("%d", &s[i].population);
    }

    for(int i=0; i<n; i++){
        printf("Data for state %d is \n\n", i+1);
        // printf("State --> %s \n", s[i].state);
        // printf("Number of districts --> %d \n", s[i].nodistricts);
        printf("Population --> %d \n", s[i].population);
        printf("\n---------------------------\n");
    }  
    
        return 0;
    }