#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int j=0; j<t; j++){
        int n, k, i;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int flag = 0;

        for(i=0; i<n-1; i++){
            if(arr[i]>=k){
                arr[i+1] = arr[i+1] + (arr[i]-k);
            }


            else{
                flag = 1;
                break;
            }
        }
        if(arr[n-1]<k){
            flag = 1;
        }

        // cout<<i+1<<endl;
        if(flag==0){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<" "<<i+1<<endl;
        }
    }
    return 0;
}