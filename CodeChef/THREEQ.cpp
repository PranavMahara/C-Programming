#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int arr[3], ptr[3];

        int sum_arr = 0;
        int sum_ptr = 0;

        for(int i=0; i<3; i++){
            cin>>arr[i];

            if(arr[i]==1){
                sum_arr++;
            }
        }

        for(int i=0; i<3; i++){
            cin>>ptr[i];

            if(ptr[i]==1){
                sum_ptr++;
            }
        }

        if(sum_arr==sum_ptr){
            cout<<"Pass"<<endl;
        }

        else{
            cout<<"Fail"<<endl;
        }
    }


    return 0;
}