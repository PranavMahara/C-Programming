// Left and Right Rotate an Array
// Right Rotate an array by k

#include <stdio.h>

// Function to right-rotate an array by `k` positions
void rightRotate(int A[], int k, int n){
    // base case: invalid input
    if (k < 0 || k >= n) {
        return;
    }
 
    for (int i = 0; i < k; i++) {
        // rotate by 1 each time and it will happen k times
        int last = A[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            A[i + 1] = A[i];
        }
 
        A[0] = last;
    }
}
 
int main(){
    int A[] = { 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;
 
    int n = sizeof(A)/sizeof(A[0]);
    rightRotate(A, k, n);
 
    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
 
    return 0;
}