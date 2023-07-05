//  Merge two arrays to the third array

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr_1[n];

    for(int i=0; i<n; i++){
        printf("Enter the element %d --> ", i+1);
        scanf("%d", &arr_1[i]);
    }

    int m;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    int arr_2[m];

    for(int i=0; i<m; i++){
        printf("Enter the element %d --> ", i+1);
        scanf("%d", &arr_2[i]);
    }

    // Merging both arrays

    int k = n+m;
    int arr[k];
    for(int i=0; i < n; i++){
      	arr[i] = arr_1[i];
  	}
    
    if(n<m){
 	for(int i=0, j = n; j < k; i++, j++){
  		arr[j] = arr_2[i];
  	}
    }
    else{
        for(int i=0, j = n; j < k; i++, j++){
  		arr[j] = arr_2[i];
    }
    }

    for(int i=0; i<k; i++){
        printf("Combined element %d --> %d \n", i+1, arr[i]);
    }
    

    return 0;
}