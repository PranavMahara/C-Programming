#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        float k = (float)pow(0.143*n, n);
        int p = (float)pow(0.143*n, n);
        // cout<<k;

        if((k-p)>0.5){
            cout<<p+1<<endl;
        }
        else{
            cout<<p<<endl;
        }
    }
    return 0;
}