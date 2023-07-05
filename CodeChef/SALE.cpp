#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int arr[3];
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }

        sort(arr, arr+3);
        
        cout<<(arr[1]+arr[2])<<endl;
    }
    return 0;
}