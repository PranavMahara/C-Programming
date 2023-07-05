#include<iostream>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    int count = 0;

    for(int i=0; i<n; i++){
        int arr[n+1];
        int sum = 0;

        for(int i=0; i<=n; i++){
            cin>>arr[i];
            if(i==(n)){
                continue;
            }
            sum = sum + arr[i];
        }

        if(sum>=m && arr[n]<=10){
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}