#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long int n;
        cin>>n;

        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int temp;
        for(int i=0; i<n; i++){             
            for(int j = i+1; j<n; j++){
                if(arr[j]<arr[i]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        long long int max = arr[0]*n;

        for(int i=0; i<n; i++){
            int temp = 0;
            temp = arr[i]*(n-i);

            if(max<temp){
                max = temp;
            }
        }

        cout<<max<<endl;
    }
    

    return 0;
}