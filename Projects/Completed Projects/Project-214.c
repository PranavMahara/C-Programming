// Write a program in C to find the median of two sorted arrays of same size. Go to the editor
// Expected Output :
// The given array - 1 is : 1 5 13 24 35
// The given array - 2 is : 3 8 15 17 32
// The Median of the 2 sorted arrays is: 14

#include<stdio.h>

int main(){
    int median_1;
    int temp;
    int n;
    printf("Enter the number of elements in array - I: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

     for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                if (arr[i] > arr[j]){
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        }
    }

    if(n%2!=0){
        printf("Median of Array-I is %d \n", median_1 = arr[((n+1)/2)-1]);
    }
    else{
        printf("Median of Array-II is %d \n", median_1 = (arr[(n/2)-1]+arr[((n/2)+1)-1])/2);
    }
    printf("------------------------------------------------------------ \n");

    int median_2;
    int k;
    printf("Enter the number of elements in array - II: ");
    scanf("%d", &k);

    int temp_2;
    int arr_2[k];

    for(int i=0; i<k; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr_2[i]);
    }

     for (int i = 0; i < k; ++i){
            for (int j = i + 1; j < k; ++j){
                if (arr_2[i] > arr_2[j]){
                    temp_2 =  arr_2[i];
                    arr_2[i] = arr_2[j];
                    arr_2[j] = temp_2;
                }
        }
    }

    if(k%2!=0){
        printf("Median of Array-II is %d \n", median_2 = arr_2[((k+1)/2)-1]);
    }
    else{
        printf("Median of Array-II is %d \n", median_2 = (arr_2[(k/2)-1]+arr_2[((k/2)+1)-1])/2);
    }

    printf("---------------------------------------------------- \n");

    printf("The Median is %d", (median_1+median_2)/2);


    return 0;
}