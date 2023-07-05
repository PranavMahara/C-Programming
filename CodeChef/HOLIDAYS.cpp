#include <bits/stdc++.h>
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
        sort(arr, arr + n, greater<int>());
        
        int sum = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            if(sum>x){
                break;
            }
            count++;
        }

        int y = n-count;
        cout<<y<<endl;
    }

    return 0;
}