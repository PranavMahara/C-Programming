#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string st;
        cin>>st;
        int count = 0, ncount = 0;
        
        for(int i=0; i<st.size(); i++){
            if(st[i]=='0'){
                count++;
            }
            else{
                ncount++;
            }
        }
        string s;
        
        for(int i=0; i<count; i++){
            s.append("0");
        }
        
        for(int i=0; i<ncount; i++){
            s.append("1");
        }

        cout<<s<<endl;
	}
	return 0;
}
