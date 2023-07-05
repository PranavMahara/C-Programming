#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        int arr_1[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr_1[i]);
        }

        int arr_2[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr_2[i]);
        }

        for(int i=0; i<n; i++){
            arr_1[i] = arr_2[i]-arr_1[i];
        }

        int flag;
        int flug = 1;
        for(int i=0; i<n; i++){
            if(arr_1[i]==x || arr_1[i]==y){
                flag = 1;
            }
            else{
                flug = 0;
            }
        }

        if(flug == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }

        // for(int i=0; i<n; i++){
        //     printf("%d ", arr_1[i]);
        // }
    }

    return 0;
}