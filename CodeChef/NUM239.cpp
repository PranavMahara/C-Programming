#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int l, r;
        cin>>l>>r;
        
        int count = 0;
        for(int i=l; i<=r; i++){
            int k = i%10;
            if(k==2 || k==3 || k==9){
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}