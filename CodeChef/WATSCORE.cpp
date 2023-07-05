#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ques[n];
        int mark[n];

        for(int i=0; i<n; i++){
            cin>>ques[i];
            cin>>mark[i];
        }
        int sum = 0;
        for(int i=1; i<=8; i++){
            int max = 0;
            for(int j=0; j<n; j++){
                if(ques[j]==i){
                    if(mark[j]>max){
                        max = mark[j];
                    }
                }
            }
            sum = sum + max;
        }

        cout<<sum<<endl;
    }
    return 0;
}