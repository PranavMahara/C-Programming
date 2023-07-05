#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int z, y, a, b, c;
        cin>>z>>y>>a>>b>>c;

        int sum = y+a+b+c;

        if(z>=sum){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}