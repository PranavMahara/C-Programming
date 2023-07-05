#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int l, r;
        cin>>l>>r;
        int sum = 0;
        for(int i=l; i<=r; i++){
            string b = to_string(i);
            int count = 0;
            for(int i=0; i<b.size(); i++){
                if(b[i]!=b[b.size()-i-1]){
                    count++;
                }
            }

            if(count==0){
                sum = sum + i;
            }
        }

        cout<<sum<<endl;
    }
    
    return 0;
}