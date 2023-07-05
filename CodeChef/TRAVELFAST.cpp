#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int a, b;
        cin>>a>>b;

        if(a>b){
            cout<<"CAR"<<endl;
        }

        else if(b>a){
            cout<<"BIKE"<<endl;
        }

        else{
            cout<<"SAME"<<endl;
        }
    }
    return 0;
}