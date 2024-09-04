#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    for(int t=1; t<=test; t++){
        string s;
        cin>>s;
        int sum1=0, sum2=0;
        for(int i=0; i<=2; i++){
            sum1+=s[i];
        }
        for(int i=5; i>=3; i--){
            sum2+=s[i];
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}