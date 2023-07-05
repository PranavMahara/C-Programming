#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << fixed << setprecision(20);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output5.txt", "w", stdout);
#endif // ONLINE_JUDGE

    double a, b;
    cin>>a>>b;

    char s;
    cin>>s;

    if(s=='+'){
        cout<<a+b;
    }

    else if(s=='-'){
        cout<<a-b;
    }

    else if(s=='*'){
        cout<<a*b;
    }

    else{
        cout<<a/b;
    }
    return 0;
}