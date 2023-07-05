#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;

        int c = a+b;
        int count = 0;

        for(int i=c+1; i<=6; i++){
            count++;
        }

        printf("%.6f", count/6.0);
        cout<<endl;
    }
    return 0;
}