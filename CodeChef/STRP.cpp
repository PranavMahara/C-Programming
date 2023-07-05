#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        int count = 0;

        string s;
        cin>>s;

        // cout<<s<<endl;

        for(int i=0; i<(n-1); i++){
            if(s[i]==s[i+1]){
                count++;
                i++;
            }
        }

        cout<<n-count<<endl;
    }

    return 0;
}