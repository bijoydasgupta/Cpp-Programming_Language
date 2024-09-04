#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i, N, X,mx=0;
    cin>>N;
    int a[N];
    for(i=1; i<=N; i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    cout<<mx;
    return 0;
}