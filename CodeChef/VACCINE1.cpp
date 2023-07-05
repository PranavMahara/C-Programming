#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;

    // int sum = 0;
    // sum = sum + (d*(a-c));
    // cout<<sum;

    int x = (e-d*(a-c))/(b+d);
    cout<<x;

    
    return 0;
}