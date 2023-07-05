#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int a, b;
        cin>>a>>b;

        int c = 21-(a+b);
        // cout<<c<<endl;

        if(c>=1 && c<=10){
            cout<<c<<endl;
        }

        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}