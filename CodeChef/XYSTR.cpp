#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int x = 0;

        for(int i=0; i<s.size()-1; i++){
            if((s[i]=='x' && s[i+1]=='x') || (s[i]=='y' && s[i+1]=='y')){
                continue;
            }
            x++;
            i++;
        }

        cout<<x<<endl;
    }
    return 0;
}