#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x, y;
        cin>>x>>y;

        if(x==y){
            cout<<y*2+(x-y)-1<<endl;
        }
        else{
            cout<<y*2+(x-y)<<endl;
        }
    }

    return 0;
}