#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, x, y, finl, car, bus;
        cin>>n>>x>>y;

        if(n%100!=0){
            int a = n/100;
            bus = (a+1)*x;
            // cout<<bus<<endl;
        }

        else{
            int a = n/100;
            bus = (a)*x;
            // cout<<bus<<endl;
        }

        if(n%4!=0){
            int b = n/4;
            car = (b+1)*y;
            // cout<<car<<endl;
        }

        else{
            int b = n/4;
            car = (b)*y;
            // cout<<car<<endl;
        }

        int c = n/100;
        int e = c*x;
        int d = n - c*100;
        if(d%4!=0){
            d = d/4;
            finl = e + (d+1)*y;
            // cout<<finl<<endl;
        }

        else{
            d = d/4;
            finl = e + (d)*y;
            // cout<<finl<<endl;
        }
        
        if(bus<car && bus<finl){
            cout<<bus<<endl;
        }

        else if(car<bus && car<finl){
            cout<<car<<endl;
        }

        else{
            cout<<finl<<endl;
        }
    }
    return 0;
}