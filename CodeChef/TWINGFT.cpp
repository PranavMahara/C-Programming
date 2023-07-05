#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sum_one = 0;
        int sum_two = 0;

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

        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }

        for(int i=0; i<n-1; i++){
            if(i%2==0){
                sum_one+=arr[i];
            }

            else{
                sum_two+=arr[i];
            }
        }

        sum_two = sum_two + arr[n-1];
        // cout<<sum_one<<" "<<sum_two<<endl;


        if(sum_one>sum_two){
            cout<<sum_one<<endl;
        }

        else{
            cout<<sum_two<<endl;
        }
    }
    return 0;
}