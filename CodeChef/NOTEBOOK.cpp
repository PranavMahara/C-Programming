#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        int pages = n*1000;
        int notebooks = pages/100;
        cout<<notebooks<<endl;
        
    }
    return 0;
}