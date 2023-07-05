#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, sum, sum_tw;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<endl;
    // }


    

    cout<<sum<<endl;

    return 0;
}