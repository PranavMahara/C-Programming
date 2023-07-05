#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int k = 0;
        int count = 0;

        for(int i=1; i<=n; i++){
            if(i==(6 + k)){
                k = k+7;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}