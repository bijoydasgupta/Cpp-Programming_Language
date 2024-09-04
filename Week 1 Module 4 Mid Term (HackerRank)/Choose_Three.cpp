#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    for(int t=1; t<=test; t++){
        int n, s, count=0;
        cin>>n>>s;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k]==s){
                        count=1;
                    }
                }
            }
        }
        if(count==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}