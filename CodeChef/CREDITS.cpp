#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int marks;
        cin>>marks;

        if(marks>65){
            cout<<"Overload"<<endl;
        }

        else if(marks<35){
            cout<<"Underload"<<endl;
        }

        else{
            cout<<"Normal"<<endl;
        }
    }
    return 0;
}