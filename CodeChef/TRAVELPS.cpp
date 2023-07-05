#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, a, b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int count_a = 0;
        int count_b = 0;

        for(int i=0; i<n; i++){
            if(s[i]==0){
                count_a++;
            }

            else{
                count_b++;
            }
        }

        cout<<count_a*a+count_b*b<<endl;
    }
    return 0;
}