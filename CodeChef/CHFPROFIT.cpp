#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x, y, z;
        cin>>x>>y>>z;
        int k = x*z-x*y;
        cout<<k<<endl;
    }
    return 0;
}