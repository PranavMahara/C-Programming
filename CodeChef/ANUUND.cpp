#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        if(n%2==0){
            for(int i=0; i<n/2; i++){
                cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
            }   
            cout<<endl;
        }

        else{
            for(int i=0; i<n/2+1; i++){
                if(i==n/2){
                    cout<<arr[i]<<endl;
                }
                else{
                    cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
                }
            }   
        }
    }
    return 0;
}