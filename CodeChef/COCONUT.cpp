#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        int k = c/a;
        int p = d/b;

        cout<<k+p<<endl;
    }
    return 0;
}