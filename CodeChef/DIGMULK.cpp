#include<iostream>
#include<math.h>

using namespace std;
const int M = 1e9 + 7;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, k, m;
        cin>>n>>k>>m;

        string s;
        cin>>s;
        int p = stoi(s);
        int flag = 0;
        int count_new;
        long long int sum;
        int arr[n];
        
        for(int i=0; i<m; i++){
            if(flag==1){
                // cout<<"HELLO"<<endl;
                arr[n]; 
                
                for(int i=(n-1); i>=0; i--){
                    arr[i] = (sum%10)*k;
                    sum = sum/10;
                }
            }
            else{
                arr[n]; 
                
                for(int i=(n-1); i>=0; i--){
                    arr[i] = (p%10)*k;
                    p = p/10;
                }
            }

            sum = arr[0];
            int e;

        
            for(int i=1; i<n; i++){
                int count = 0;
                int p = arr[i];
                while(p!=0){
                    count++;
                    p = p/10;
                }
                sum = sum * pow(10, count) + arr[i];
                // sum%=M;
            }
            e = sum;
            count_new = 0;
            while(e!=0){
                count_new++;
                e=e/10;
            }
            // cout<<count_new<<endl;
            flag = 1;
            n = count_new;
        }
        // cout<<sum<<endl;
        long long int finl = 0;
        // cout<<sum<<endl;
        while(sum!=0){
            sum = sum/10;
            finl++;
        }

        cout<<finl<<endl;
    }
    return 0;
}