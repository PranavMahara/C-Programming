#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;
        int flag = 0;
        int num = x%10;

        if(num%2==0){
            flag = 1;
        }
        x = x/10;

        if(flag==1){
            while(x!=0){
                int num = x%10;
                if(num%2==0){
                    flag = 100;
                    break;
                }
                x = x/10;
            }
        }

        else{
            while(x!=0){
                int num = x%10;
                if(num%2!=0){
                    flag = 100;
                    break;
                }
                x = x/10;
            }
        }

        if(flag==100){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
       
    }
    return 0;
}