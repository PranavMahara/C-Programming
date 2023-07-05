#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, m;
        cin>>n>>m;
        int sum = 0;

        for(int i=0; i<n; i+=2){
            if(m%2==0){
                sum = sum + m/2;
            }

            else{
                sum = sum + m/2+1;
            }
        }   

        cout<<sum<<endl;
    }
    return 0;
}