#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;

        int k = 0;

        for(int i=1; i<=n; i++){
            if(i%3==0){}

            else{
                k = k + x;
            }
        }

        cout<<k<<endl;
    }
    return 0;
}