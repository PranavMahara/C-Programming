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
        
        int max = 0;
        for(int i=0; i<=n-k; i++){
            int temp = 0;
            for(int j = i; j<k+i; j++){
                temp = temp + arr[j];
            }

            if(max<temp){
                max = temp;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}