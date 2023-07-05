#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        string s;
        cin>>s;

        int count_zero = 0;
        int count_one = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                count_zero++;
            }

            else{
                count_one++;
            }
        }

        if(count_zero==count_one && count_one!=1 && count_zero!=1){
            cout<<"NO"<<endl;
        }
        else if(count_zero==1 || count_one==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}