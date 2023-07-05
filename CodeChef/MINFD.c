#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n, x;
        scanf("%d %d" ,&n, &x);
        int sum_2=0;
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d" , &arr[i]);
            sum_2 = sum_2 + arr[i];
        }
        int temp;
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[j]>arr[i]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int count = 1;
        int sum = arr[0];

        if(sum>=x){
            printf("1\n");
        }

        else{
            for(int j=1; j<n; j++){
                sum = sum + arr[j];
                if(sum>=x){
                    count++;
                    break;
                }
                count++;
            }

            if(sum_2<x){
                count = -1;
            }        

            printf("%d\n", count);
        }
    }
    return 0;
}