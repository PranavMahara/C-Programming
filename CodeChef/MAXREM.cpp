#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = 0;

    sort(arr, arr + n, greater<int>());
    int x = arr[0];
    int y = arr[1];
    cout<<y%x<<endl;

    return 0;
}