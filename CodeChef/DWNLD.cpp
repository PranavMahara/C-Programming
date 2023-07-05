#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int sum = 0;

        for(int i=0; i<n; i++){
            int a, b;
            cin>>a>>b;

            if(a<=k){
                k = k-a;
            }

            else{
                sum = sum + (a-k)*b;
                k = 0;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}