#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char temp;

        if(n%2==0){
            for(int i=0; i<n; i+=2){
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }

            for(int i=0; i<n; i++){
                if(s[i]>='a' && s[i]<='z'){
                    s[i]='a'-s[i]+'z';
                }
            }
        }

        else{
            for(int i=0; i<n-1; i+=2){
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }

            for(int i=0; i<n; i++){
                if(s[i]>='a' && s[i]<='z'){
                    s[i]='a'-s[i]+'z';
                }
            }
        }

        cout<<s<<endl;
    }

    return 0;
}