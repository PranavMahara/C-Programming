#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int p, m, v, k;
        cin>>p>>m>>v;

        if(p>1){
            k = m-(p-1);
            cout<<k*v<<endl;
        }
        else{
            cout<<m*v<<endl;
        }
    }
    return 0;
}