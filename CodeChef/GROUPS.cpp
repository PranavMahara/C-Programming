#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int count = 0;

        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='1'){
                count++;
                while(s[i+1]!='0'){
                    // cout<<i<<" ";
                    i++;
                }
            }

        }

        if(s[s.size()-1]=='1'){
            count++;
        }
            

        cout<<count<<endl;
    }
    return 0;
}