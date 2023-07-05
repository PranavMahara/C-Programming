#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int count_carl = 0;
        int count_chef = 0;
        int count_draw = 0;

        for(int i=0; i<14; i++){
            if(s[i]=='C'){
                count_carl++;
                // cout<<s[i]<<endl;
            }

            else if(s[i]=='N'){
                // cout<<s[i]<<endl;
                count_chef++;
            }

            else{
                // cout<<s[i]<<endl;
                count_draw++;
            }
        }
        // cout<<count_carl<<" "<<count_chef<<" "<<count_draw<<endl;
        int score_carl = 2*count_carl + 1*count_draw;
        int score_chef = 2*count_chef + 1*count_draw;

        if(score_carl>score_chef){
            cout<<60*n<<endl;
        }

        else if(score_carl==score_chef){
            cout<<55*n<<endl;
        }

        else{
            cout<<40*n<<endl;
        }
    }
    

    return 0;
}