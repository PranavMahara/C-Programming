#include<iostream>
using namespace std;

int main(){
    int r, o, c;
    cin>>r>>o>>c;

    int p = 20-o;
    p = p*6*6;

    c = c + p;
    if(c>r){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
    return 0;
}