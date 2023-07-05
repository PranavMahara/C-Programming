#include<stdio.h>

int main(){
    int arr_1[3];
    for(int i=0; i<3; i++){
        printf("Enter element %d (Arr-1) --> ", i+1);
        scanf("%d", &arr_1[i]);
    }

    printf("------------------------ \n");

    int arr_2[3];
    for(int i=0; i<3; i++){
        printf("Enter element %d (Arr-2) --> ", i+1);
        scanf("%d", &arr_2[i]);
    }

    for(int i=0; i<3; i++){
        if(arr_1[i]==arr_2[i]){
            printf("Arrays same");
            
        }

        else{
            printf("Arrays are not same");
        }
        

    }


    return 0;
}