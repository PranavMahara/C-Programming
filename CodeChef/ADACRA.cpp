#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
    string s, p;
    cin>>s;
    p = s;

    int count_d = 0;
    int count_u = 0;
    for(int i=0; i<s.size(); i++){
            if(s[i]==s[i+1]){
                continue;
            }

            if(s[i]=='D'){
                s[i]='U';
                count_d++;
            }
        }

        for(int i=0; i<p.size(); i++){
            if(p[i]==p[i+1]){
                continue;
            }

            if(p[i]=='U'){
                p[i]='D';
                count_u++;
            }
        }

        if(count_d>count_u){
            cout<<count_u<<endl;
        }
        else{
            cout<<count_d<<endl;
        }
    }
    
    return 0;
}