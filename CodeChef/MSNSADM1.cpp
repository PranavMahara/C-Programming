#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr_1[n];
        int arr_2[n];

        int finl[n];

        for(int i=0; i<n; i++){
            cin>>arr_1[i];
        }

        for(int i=0; i<n; i++){
            cin>>arr_2[i];
        }

        for(int i=0; i<n; i++){
            finl[i] = arr_1[i]*20-arr_2[i]*10;
            if(finl[i]<0){
                finl[i]=0;
            }
        }

        int max = finl[0];
        for(int i=0; i<n; i++){
            if(max<finl[i]){
                max = finl[i];
            }
        }

        cout<<max<<endl;
    }


    return 0;
}