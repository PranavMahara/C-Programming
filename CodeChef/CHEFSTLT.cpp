#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s1, s2;
        cin>>s1>>s2;

        int count = 0;
        int NewCount = 0;

        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='?' && s2[i]=='?'){
                count++;
            }

            else if(s1[i]=='?' || s2[i]=='?'){
                count++;
            }

            else if(s1[i]==s2[i]){
                count++;
            }

            // ----------------
            if((s1[i]==s2[i]) && ((s1[i]!='?') || s2[i]!='?')){
                NewCount++;
            }
        }
        cout<<s1.size()-count<<" "<<s1.size()-NewCount<<endl;
    }

    return 0;
}