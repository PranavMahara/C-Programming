#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, d;
        cin>>x>>y>>d;

        int p = abs(x-y);
        if(d>=p){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}