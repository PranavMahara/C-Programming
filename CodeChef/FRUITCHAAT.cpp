#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x, y;
        cin>>x>>y;

        int p = x/2;
        if(p>y){
            cout<<y<<endl;
        }

        else{
            cout<<p<<endl;
        }

    }
    
    return 0;
}