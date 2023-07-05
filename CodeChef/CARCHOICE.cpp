#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        float p = (float)c/a;
        float q = (float)d/b;

        // cout<<p<<" "<<q;
        if(p>q){
            cout<<"1"<<endl;
        }

        else if(q>p){
            cout<<"-1"<<endl;
        }

        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}