#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        string s;
        cin>>s;

        int num = count(s.begin(), s.end(), '1');
        int flag = 0;
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                while(num--){
                    if(s[i]=='0'){
                        flag = 1;
                        break;
                    }

                    else{
                        i++;
                    }
                }
            }
        }

        if(flag == 1){
            cout<<"NO"<<endl;
        }

        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}