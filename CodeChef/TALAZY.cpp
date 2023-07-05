#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n, b, m;
        cin>>n>>b>>m;

        long long int k = n;
        long long int time = 0;

        while(n!=0){
            if(n%2!=0){
                k = (n+1)/2;
                time += k*m + b;
                m = 2*m;
                n = n/2;
                // cout<<n<<endl;
            }

            else{
                k = n/2;
                time += k*m + b;
                m = 2*m;
                n = n/2;
                // cout<<n<<endl;
            }

        }

        cout<<time-b<<endl;
    }
    return 0;
}