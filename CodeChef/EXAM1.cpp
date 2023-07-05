#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        string s, p;
        cin>>s>>p;

        int count = 0;
        if(s.compare(p)==0){
            cout<<n<<endl;        
        }
        else{
            for(int i=0; i<n; i++){
                if(s[i]==p[i]){
                    count++;
                }
                else if(p[i]=='N'){

                }
                else{
                    i=i+1;
                }
            }
            cout<<count<<endl;
        }
    }


    return 0;
}