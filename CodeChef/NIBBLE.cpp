#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x;
        cin>>x;

        if(x%4==0){
            cout<<"Good"<<endl;
        }

        else{
            cout<<"Not Good"<<endl;
        }
    }
    return 0;
}