#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int s;
        cin>>s;

        int x1, x2, y1, y2, z1, z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;

        float p = pow((pow(y1-x1, 2) + pow(y2-x2, 2)), 0.5);
        float q = pow((pow(z1-y1, 2) + pow(z2-y2, 2)), 0.5);
        float r = pow((pow(z1-x1, 2) + pow(z2-x2, 2)), 0.5);

        // cout<<p<<" "<<q<<" "<<r<<endl;
        int flag1, flag2, flag3;

        if(p<=s){flag1 = 1;}
        else{ flag1 = 0;}

        if(q<=s){flag2 = 1;}
        else{ flag2 = 0;}

        if(r<=s){flag3 = 1;}
        else{ flag3 = 0;}

        if((flag1==1 && flag2==1) || (flag1==1 && flag3==1) || (flag2==1 && flag3==1) || (flag1==1 && flag2==1 && flag3==1)){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}