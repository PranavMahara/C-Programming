#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x, y;
        cin>>x>>y;

        if(x==1){
            if(y==3 || y==2){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }
        
        else if(x==2){
            if(y==1 || y==4){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }

        else if(x%2==0){
            if(y == (x-1) || y == (x-2) || y == (x+2)){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }

        else{
            if(y == (x-2) || y == (x+1) || y == (x+2)){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}