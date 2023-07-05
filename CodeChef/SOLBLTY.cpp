#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x, a, b;
        cin>>x>>a>>b;
        int p = a + (100-x)*b;
        cout<<p*10<<endl;
    }
    return 0;
}