#include <bits/stdc++.h>
using namespace std;
long long print(int x, int n)
{
    long long int sum=0;
    for(int i=2; i<=n; i=i+2){
        sum+=pow(x,i);
    }
    return sum;
}
int main ()
{
    int x, n;
    cin>>x>>n;
    cout << print(x,n) << endl;
    return 0;
}