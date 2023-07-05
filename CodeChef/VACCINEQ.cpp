#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, k, x, y;
        cin>>n>>k>>x>>y;

        int arr[n];
        int wait = 0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<k; i++){
            if(arr[i]==0){
                wait = wait + x;
            }

            else{
                wait = wait + y;
            }
        }

        cout<<wait<<endl;
    }
    return 0;
}