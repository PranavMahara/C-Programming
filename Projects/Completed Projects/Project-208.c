// Write a C program that reads three integers and sort the numbers in ascending order. Print the original numbers and sorted numbers.

#include<stdio.h>

int main(){
    int temp;
    int arr[3];

    for(int i=0; i<3; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<3; i++){
        for(int j = i+1; j<3; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<3; i++){
        printf("Elements in Ascending order, element %d --> %d \n", i+1, arr[i]);
    }

        
    return 0;
}

// int x, y, z;
//     printf("Enter the value of x: ");
//     scanf("%d", &x);

//     printf("Enter the value of y: ");
//     scanf("%d", &y);

//     printf("Enter the value of z: ");
//     scanf("%d", &z);
// if (x <= y && y <= z){
//         printf("%d, %d, %d",x,y,z);
//         }
        
//         else{
//         if (x <= z && z <= y){
//         printf("%d, %d, %d",x,z,y);
//         }

//         else{
//         if (y <= x && x <= z){
//             printf("%d, %d, %d",y,x,z);
//         }

//         else{
//             if (y <= z && z <= x){
//             printf("%d, %d, %d",y,z,x);
//             }

//             else{
//             if (z <= x && x <= y){
//                 printf("%d, %d, %d",z,x,y);
//             }

//             else{
//                 if (x == y && y == z){
//                 printf("%d, %d, %d",x,y,z);
//                 }

//                 else{
//                 printf("%d, %d, %d",z,y,x);
//                 }
//             }
//             }
//         }
//         }
//         }
