// C Program to calculate Standard Deviation

#include<stdio.h>
#include<math.h>

int main(){
    float sum = 0;
    int n;
    printf("Enter the number of elements u gonna enter: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    float mean = sum/n;
    printf("Mean is %.2f \n", mean);

    for(int i=0; i<n; i++){
        arr[i] = pow(arr[i] - mean, 2);
    }

    float sum_2 = 0;
    for(int i=0; i<n; i++){
        sum_2 = sum_2 + arr[i];
    }

    printf("Standard Deviation is %f", pow(sum_2/n, 0.5));


    return 0;
}