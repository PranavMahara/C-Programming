#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i = 0; i < t; i++){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int count = 0;
        for(int i = 0; i<n/2; i++){
            if(s[i]!=s[n-i-1]){
                count++;
            }
        }

        if(k<0){
            cout<<"NO"<<endl;
        }

        else{
            if(n%2!=0){
                cout<<"YES"<<endl;
            }

            else if(k%2==0){
                cout<<"YES"<<endl;
            }
            
            else{
                cout<<"NO"<<endl;
            }
        }
    
    }
    return 0;
}