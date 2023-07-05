#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int a, b, c, p, q, r;
        cin>>a>>b>>c>>p>>q>>r;
        int v = p+q+r;
        
        int t = 0;

        float x, y, z;
        x = (float)a/p;
        y = (float)b/q;
        z = (float)c/r;

        if(x<=y && x<=z){
            t = t + p + b + c;
        }

        else if(y<=x && y<=z){
            t = t + q + a + c;
        }

        else{
            t = t + r + a + b;
        }

        float k = (float)t/v;
        
        if(k>=0.5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}