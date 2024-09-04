#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    for(int t=1; t<=test&&test>=1&&test<=100; t++){
        int n,result,mn=INT_MAX;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                result=a[i]+a[j]+j-i;
                mn=min(mn,result);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}