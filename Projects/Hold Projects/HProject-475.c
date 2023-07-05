// // Duck Number
// A Duck number is a positive number which has zeroes present in it, 
// For example 3210, 8050896, 70709 are all Duck numbers. 
// Please note that a numbers with only leading 0s is not considered as Duck Number. 
// For example, numbers like 035 or 0012 are not considered as Duck Numbers. 
// A number like 01203 is considered as Duck because there is a non-leading 0 present in it.

#include<stdio.h>
#include<math.h>

int main(){
    int count_zero = 0;
    int count = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int k = n;

    while(n!=0){
        count++;
        n = n/10;
    }   

    int arr[count];

    for(int i=(count-1); i>=0; i--){
        int l = k%10;
        arr[i] = l;
        k = k/10;
    }
    
    printf("%d", count);

    // if(arr[count-1]==0){
    //     printf("It is not Duck Number");
    // }

    // else{
    //     for(int i=1; i<count; i++){
    //         if(arr[i]==0){
    //             count_zero++;
    //         }
    //     }
    // if(count_zero!=0){
    //     printf("It is a duck Number");
    // }

    // else{
    //     printf("It is a duck Number");
    // }
    // }

    return 0;
}