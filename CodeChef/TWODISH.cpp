#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int a, b, c, x;
        cin>>x>>a>>b>>c;
        int n = 0;

        while(a!=0 && b!=0){
            a--;
            b--;
            n++;
        }
        
        // cout<<n<<endl;

        while(b!=0 && c!=0){
            b--;
            c--;
            n++;
        }

        // cout<<n<<endl;
        if(n>=x){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}