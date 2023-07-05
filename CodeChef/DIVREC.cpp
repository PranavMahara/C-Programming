#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    // cout<<sum<<endl;
    float sum_d = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum_d = sum_d + (float)1/i;
        }
    }
    // cout<<(float)sum_d<<endl;

    int k = sum/sum_d;
    if(k==n){
        cout<<n<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}