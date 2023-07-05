#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='>' && s[i+1]=='<'){
                s[i]='<';
                s[i+1]='>';
            }
        }

        // cout<<s<<endl;
        int count = 0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='>' && s[i+1]=='<'){
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}