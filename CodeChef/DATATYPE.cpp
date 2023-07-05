#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, x;
        cin>>n>>x;

        if(n>=x){
            cout<<x<<endl;
        }

        else{
            while(x>n){
                x = (x-n-1);
            }
            cout<<x<<endl;
        }
    }
    return 0;
}