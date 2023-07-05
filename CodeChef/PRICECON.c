#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>k){
                sum = sum + (arr[i]-k);
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}