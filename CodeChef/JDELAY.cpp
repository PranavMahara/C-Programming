#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        int arr[2*n];

        for(int i=0; i<2*n; i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i=0; i<=2*n-2; i+=2){
            if(arr[i+1]-arr[i]>5){
                count++;
            }
        }

        cout<<count<<endl;
    }
     
    return 0;
}