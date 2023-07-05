// Write a program in C to print repeated elements in the array

#include<stdio.h>

int main(){

    int count;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];

    for(int i=0; i<n; i++){
        freq[i] = 1;
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                freq[i]++;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(freq[i]>1){
            printf("%d \n", arr[i]);
        }
    }
    return 0;
}




















// #include<stdio.h>

// int main(){
//     int count;
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     int freq[n];

//     for(int i=0; i<n; i++){
//         freq[i] = -1;
//         printf("Enter element %d --> ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         count = 1;
//         for(int j= i+1; j<n; j++){
//             if(arr[j]==arr[i]){
//                 count++;
//                 freq[j] = 0;
//             }
//         }
//         if(freq[i] != 0)
//         {
//             freq[i] = count;
//         }   
//     }
//     for(int i=0; i<n; i++){
//         if(freq[i] == 1){
//             printf("Unique elements --> %d ", arr[i]);
//         }
//     }
//     return 0;
// }