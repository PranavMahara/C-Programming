#include<stdio.h>

int main(){
    int marks[5];

    for(int i=0; i<5; i++){ // LOOP
            printf("Enter the value of marks for student %d ", i+1); // i+1 in order to make our porgram user friendly, 0 se shuru ho toh user ko pasand ni aati so i+1 kiya so 1 se start hoga, simpul 
            scanf("%d", &marks[i]);
    }    

    for(int i=0;i<5;i++){
        printf("The value of marks for student %d is %d: \n", i+1, marks[i]);
    }



    return 0;
}