#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int ten, five, amount;
        cin>>amount;

        ten = amount/10;
        amount = amount - ten*10;

        five = amount/5;
        amount = amount - five*5;

        if(amount%5!=0){
            cout<<"-1"<<endl;
        }

        else{
            cout<<ten+five<<endl;
        }
    }

    return 0;
}