#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, b, c;
        cin>>a>>b>>c;

        if(a<b && a<c){
            cout<<"Draw";
        }
        else if(b<c && b<a){
            cout<<"Bob";
        }
        else{
            cout<<"Alice";
        }
        cout<<endl;
    }
    return 0;
}