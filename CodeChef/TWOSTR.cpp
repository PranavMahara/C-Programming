#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int flag = 1;
	    string x,y;
	    cin>>x>>y;
	    for(int i=0;i<x.size();i++){
	        if((x[i]==y[i])||(x[i]=='?'||y[i]=='?')){
	            
	        }
            else{
	            flag = 0;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<"No"<<endl;
	    }
        else{
	        cout<<"Yes"<<endl;
	    }
	}
       
    return 0;
}