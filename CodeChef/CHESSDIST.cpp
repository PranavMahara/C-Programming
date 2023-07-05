#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        
        a = abs(a-c);
        c = abs(b-d);

        if(a>c){
            cout<<a<<endl;
        }

        else{
            cout<<c<<endl;
        }
    }

    return 0;
}