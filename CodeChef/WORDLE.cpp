#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string p, q;
        cin>>p>>q;

        string n;

        for(int i=0; i<5; i++){
            if(p[i]==q[i]){
                n.append("G");
            }

            else{
                n.append("B");
            }
        }

        cout<<n<<endl;
    }
    return 0;
}