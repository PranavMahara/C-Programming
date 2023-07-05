#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count_ab = 0;
    int count_pr = 0;

    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            count_ab++;
        }

        else{
            count_pr++;
        }
    }

    int k = (120-n);
    cout<<count_pr<<" "<<count_ab<<endl;
    cout<<k<<endl;
    return 0;
}