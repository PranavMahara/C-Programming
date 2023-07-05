#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, k;
        cin>>n>>k;

        int arr[n];
        string s = "";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i]<=k){
                k = k-arr[i];
                s.append("1");
            }

            else{
                s.append("0");
            }
        }

        cout<<s<<endl;
    }
    return 0;
}