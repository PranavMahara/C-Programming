#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, x;
        cin>>n>>x;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int max = x;
        for(int i=0; i<n; i++){
            int sum = x;
            for(int j=0; j<=i; j++){
                sum = sum + arr[j];
            }

            if(max<sum){
                max = sum;
            }
        }

        cout<<max<<endl;
    }
    return 0;
}