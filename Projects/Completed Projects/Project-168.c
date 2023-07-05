// Write a C program to calculate and print average (or mean) of the stream of given numbers. Go to the editor
// Example 1:
// Input:
// arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}
// Output:
// Average of 1 numbers is 10.000000
// Average of 2 numbers is 15.000000
// Average of 3 numbers is 20.000000
// Average of 4 numbers is 25.000000
// Average of 5 numbers is 30.000000
// Average of 6 numbers is 35.000000
// Average of 7 numbers is 40.000000
// Average of 8 numbers is 45.000000
// Average of 9 numbers is 50.000000
// Average of 10 numbers is 55.000000

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        printf("Average of %d numbers --> %.2f \n", i+1, (float)sum/(i+1));
    }
    return 0;
}