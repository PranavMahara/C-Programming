#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, B, k;
        cin>>n>>B;

        int max = 0;
        for(int i=0; i<n; i++){
            int a, b, c;
            cin>>a>>b>>c;


            if(c<=B){
                k = a*b;
                if(max<=k){
                    max = k;
                }
            }
        }

        if(max==0){
            cout<<"no tablet"<<endl;
        }

        else{
            cout<<max<<endl;
        }
    }
    return 0;
}