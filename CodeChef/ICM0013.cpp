#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int count = 0;

        for(int i=1; i<=n; i++){
            if(n%i<=n/2){
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}