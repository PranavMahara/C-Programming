#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int price, a, b, c;
        cin>>price>>a>>b>>c;

        float n = price + 0.07*price;

        if(n>=a && n<=b){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}