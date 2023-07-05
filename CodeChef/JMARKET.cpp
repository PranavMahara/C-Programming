#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        
        int arr[3];
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }

        sort(arr, arr+3);

        cout<<(x-1)*arr[0] + arr[1]<<endl; 
    }  

    return 0;
}