#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int flag;

        for(int i=0; i<n; i++){
            if(arr[i]>=(i+1)){
                k = k - arr[i];
                // if(k<0){
                //     break;
                // }
            }

            else{
                flag = 1;
                break;
            }
        }

        if(flag==1){
            cout<<"NO"<<endl;
        }

        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}