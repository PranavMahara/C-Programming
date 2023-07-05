#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, k;
        cin>>n>>k;

        int sum = 0;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }
        int p;
        for(int i=0; i<k; i++){
            p = sum+1;
            sum = sum + p;
        }

        if(p%2==0){
            cout<<"even"<<endl;
        }

        else{
            cout<<"odd"<<endl;
        }
    }

    return 0;
}