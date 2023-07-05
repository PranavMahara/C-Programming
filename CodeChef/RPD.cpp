#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int max = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==i){
                    continue;
                }
                int p = arr[i]*arr[j];
                // cout<<p<<endl;
                int sum = 0;

                while(p!=0){
                    int k = p%10;
                    sum = sum + k;
                    p = p/10;
                }

                if(max<sum){
                    max = sum;
                }
            }
        }

        cout<<max<<endl;
    }

    return 0;
}