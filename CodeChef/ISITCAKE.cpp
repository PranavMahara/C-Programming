#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int arr[100];
        int sum = 0;

        for(int i=0; i<100; i++){
            cin>>arr[i];
            sum = sum + arr[i];
        }

        if(sum>1800){
            cout<<"NO"<<endl;
        }

        else{
            cout<<"YES"<<endl;
        }
    }


    return 0;
}