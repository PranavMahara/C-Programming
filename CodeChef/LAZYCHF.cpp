#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x, m, d;
        cin>>x>>m>>d;

        int p = x*m;
        int q = x+d;

        if(p>q){
            cout<<q<<endl;
        }

        else{
            cout<<p<<endl;
        }
    }
    return 0;
}