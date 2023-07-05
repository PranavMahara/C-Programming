#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
	    int x,y,r,s,d;
	    cin>>x>>y>>r>>s>>d;
	    if(x/r<=y/s){
	        if(x/r>=d){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	    else{
	        if(y/s>=d){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
    }
    }

    return 0;
}