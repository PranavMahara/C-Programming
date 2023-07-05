#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	        int n, x, p;
	        cin>>n>>x>>p;
	        
	        if((4*x-n)>=p){
	          cout<<"PASS"<<endl;
	        }
	        else{
	            cout<<"FAIL"<<endl;
	        }
	}
	return 0;
}
