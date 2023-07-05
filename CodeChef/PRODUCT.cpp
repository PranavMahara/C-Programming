#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int j=0; j<t; j++){
        long long int a, b, c;
        cin>>b>>c;
        int i;
        for(i=1; i<=b; i++){
            if((i*b)%c==0){
                break;
            }
        }

        cout<<i<<endl;
    }
    return 0;
}