#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, b, sum;
        cin>>a>>b;
        sum = a+b;
        int fin = 0;

        while(sum!=0){
            int k = sum%10;
            if(k==0){
                fin+=6;
            }

            else if(k==1){
                fin+=2;
            }

            else if(k==2){
                fin+=5;
            }

            else if(k==3){
                fin+=5;
            }

            else if(k==4){
                fin+=4;
            }

            else if(k==5){
                fin+=5;
            }

            else if(k==6){
                fin+=6;
            }

            else if(k==7){
                fin+=3;
            }

            else if(k==8){
                fin+=7;
            }

            else if(k==9){
                fin+=6;
            }

            sum = sum/10;
        }

        cout<<fin<<endl;
    }
    
    return 0;
}