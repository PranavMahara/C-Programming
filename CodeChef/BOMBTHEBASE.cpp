#include <bits/stdc++.h>
#include <algorithm>
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

        vector<int> vec1;
        vec1.push_back(0);
        
        for(int i=0; i<n; i++){
            if(arr[i]<x){
                vec1.push_back(i+1);
            }
        }
        
        cout<<vec1[vec1.size()-1]<<endl;
    }
    return 0;
}