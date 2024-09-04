#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int cnt=1;
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]==a[j]){
            cnt=1;
        }
        else{
            cnt=0;
            break;
        }
        i++;
        j--;
    }
    if(cnt==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}