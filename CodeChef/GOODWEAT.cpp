#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int arr[7];
        for(int i=0; i<7; i++){
            cin>>arr[i];
        }

        int count_one = 0;
        int count_two = 0;

        for(int i=0; i<7; i++){
            if(arr[i]==0){
                count_one++;
            }
            else{
                count_two++;
            }
        }

        if(count_one>count_two){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}