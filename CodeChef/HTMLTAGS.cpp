#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        int k = s.size();
        int flag = 1;

        if(k<=3){
            flag = 0;
        }
        else{
        for(int i=0; i<k-3; i++){
            
                if(s[0]=='<' && s[1]=='/' && s[k-1]=='>'){
                    if((s[i+2]>=97 && s[i+2]<=122) || (s[i+2]>=48 && s[i+2]<=57)){
                    }

                    else{
                        flag = 0;
                    }
                }

                else{
                    flag = 0;
                }
            }
        }

        if(flag==1){
            cout<<"Success"<<endl;
        }

        else{
            cout<<"Error"<<endl;
        }
    }
    
    return 0;
}