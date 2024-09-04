#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int freq[26]={0};
        for(char c:s){
            freq[c-'A']++;
        }
        for(int i=0; i<26; ++i){
            if(freq[i]!=0){
                for(int j=1; j<=freq[i]; ++j){
                    if(j==1) sum+=2;
                    else sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}