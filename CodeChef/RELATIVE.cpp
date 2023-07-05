#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int g, c;

	for(int i=0; i<t; i++){
		cin>>g, c;
		int h = (c*c)/(2*g);
		cout<<h<<endl;
	}
	return 0;
}