#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
    long long n,r,g,b,i,res;
    string a;
    cin>>t;
    while(t--){
        r=0;g=0;b=0;
        cin>>n;
        cin>>a;
        for(i=0;i<n;i++){  
                if(a[i]=='R'){
                    r++;
                }
                
                if(a[i]=='B'){
                    b++;
                }
                
                if(a[i]=='G'){
                    g++;
                }
        }

           res = max(r,g);
        res = max(res,b);
        cout<<n-res<<endl;

           
    }

	return 0;
}
