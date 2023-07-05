// Write a program in C to check whether an array is subset of another array. Go to the editor
// Expected Output :
// The given first array is : 4 8 7 11 6 9 5 0 2
// The given second array is : 5 4 2 0 6
// The second array is the subset of first array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the main element: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the number of elements in the secondary array: ");
    scanf("%d", &k);

    int arrs[k];
    for(int i=0; i<k; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arrs[i]);
    }

    for(int i=0; i<n; i++){
        for(int j =0; j<k; j++){
            if(arrs[i]==arr[j]){
                break;
            }

            if(j==n){
                printf("No");
            }
        }
        printf("Yes");
    }


    return 0;
}