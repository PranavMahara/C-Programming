#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
    string s;
    int n;

    cin>>n>>s;

    int arr[7];
    for(int i=0; i<7; i++){
        arr[i]=0;
    }
    for(int i=0; i<n; i++){
            if(s=="mon"){
                arr[i%7]++;
            }

            else if(s=="tues"){
                arr[(i+1)%7]++;
            }

            else if(s=="wed"){
                arr[(i+2)%7]++;
            }

            else if(s=="thurs"){
                arr[(i+3)%7]++;
            }

            else if(s=="fri"){
                arr[(i+4)%7]++;
            }

            else if(s=="sat"){
                arr[(i+5)%7]++;
            }

            else if(s=="sun"){
                arr[(i+6)%7]++;
            }
        }

        for(int i=0; i<7; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}