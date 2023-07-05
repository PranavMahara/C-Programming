#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int c, x, y;
        cin>>c>>x>>y;

        int p = c-x;
        cout<<p*y<<endl;
    }

    return 0;
}