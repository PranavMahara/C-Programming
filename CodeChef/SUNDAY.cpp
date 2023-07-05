#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count = 0;

        for(int i=0; i<n; i++){
            if(arr[i]==6 || arr[i]==13 || arr[i]==20 || arr[i]==27 || arr[i]==7 || arr[i]==14 || arr[i]==21 || arr[i]==28){

            }
            else{
                count++;
            }
        }

        cout<<8+count<<endl;
    }
    return 0;
}