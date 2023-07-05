#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr_1[n];
    int arr_2[n];

    for(int i=0; i<n; i++){
        cin>>arr_1[i];
    }

    for(int i=0; i<n; i++){
        cin>>arr_2[i];
    }
    int a = 0;
    int b = 0;
    int c = 0;

    for(int i=0; i<n; i++){
        if(arr_2[i]==1){
            a>arr_1[i];
            a = arr_1[i];
        }

        else if(arr_2[i]==2){
            b>arr_1[i];
            b = arr_1[i];
        }

        else{
            c>arr_1[i];
            c = arr_1[i];
        }
    }

    cout<<a<<" "<<b<<" "<<c;


    return 0;
}